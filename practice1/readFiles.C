
//Cheng-Chieh's first macro!
// Created Oct 20, 2015
// modified Oct 21, 2015

#include "TTree.h"
#include "TFile.h"
#include "TH1D.h"
#include <iostream>
#include <fstream>
#include <string>
#include "TCanvas.h"

using namespace std;

void readFiles(){

    std::string list_of_files = "./pAQCDMC_fixGSP_all.txt";

    ifstream infile(list_of_files.c_str());

    std::string filename;
    
    TH1D *histoPt = new TH1D("histoPt","histoPt",100,30,200); histoPt->Sumw2();
    TH1D *histoSSVHE = new TH1D("histoSSVHE","histoSSVHE",20,0,6); histoSSVHE->Sumw2();

    TH1D *histoSSVHP = new TH1D("histoSSVHP","histoSSVHP",10,0,6); histoSSVHP->Sumw2();
    TH1D *histoSSVHP_b = new TH1D("histoSSVHP_b","histoSSVHP_b",10,0,6); histoSSVHP_b->Sumw2();

		TH1D *histoPt_bjet= new TH1D("histoPt_bjet","histoPt_bjet",10,50,400); histoPt_bjet->Sumw2();
    TH1D *histoPt_alljet= new TH1D("histoPt_alljet","histoPt_alljet",10,50,400); histoPt_alljet->Sumw2();

    TH1D *histoSSVHP_cut = new TH1D("histoSSVHP_cut","histoSSVHP_cut",10,2,6); histoSSVHP_cut->Sumw2();
    TH1D *histoSSVHP_b_cut = new TH1D("histoSSVHP_b_cut","histoSSVHP_b_cut",10,2,6); histoSSVHP_b_cut->Sumw2();

    TH1D *histoPt_bjet_cut= new TH1D("histoPt_bjet_cut","histoPt_bjet_cut",10,200,400); histoPt_bjet_cut->Sumw2();
    TH1D *histoPt_alljet_cut= new TH1D("histoPt_alljet_cut","histoPt_alljet_cut",10,200,400); histoPt_alljet_cut->Sumw2();

//    TH1D *histoSSVHP = new TH1D("histoSSVHP","histoSSVHP",20,0,6); histoSSVHP->Sumw2();


    int ifile=0;
    while(infile >> filename && ifile<100){
    
        ifile++;
        TFile *f1 = new TFile(filename.c_str());
        TTree *jetTree = (TTree*)f1->Get("akPu3PFJetAnalyzer/t");

				int nrefMax=100; // this size of array must larger than biggest nref in event.
        float jetPt[nrefMax], discrSSVHE[nrefMax], discrSSVHP[nrefMax];
        int nref, flavorForB[nrefMax];

        jetTree->SetBranchAddress("jtpt",jetPt);
        jetTree->SetBranchAddress("discr_ssvHighEff",discrSSVHE);
        jetTree->SetBranchAddress("discr_ssvHighPur",discrSSVHP);
        jetTree->SetBranchAddress("nref",&nref);
				jetTree->SetBranchAddress("refparton_flavorForB",flavorForB);
            
        for(int ievt=0; ievt<jetTree->GetEntries(); ievt++){

            jetTree->GetEntry(ievt);
            for(int ijet=0; ijet<nref; ijet++){
                histoPt->Fill( jetPt[ijet] );
                histoSSVHE->Fill(discrSSVHE[ijet]);
							if(discrSSVHP[ijet]>1 && jetPt[ijet]>50){
								histoPt_alljet->Fill(jetPt[ijet]);
								histoSSVHP->Fill(discrSSVHP[ijet]);
								if(abs(flavorForB[ijet])==5){
									histoPt_bjet->Fill(jetPt[ijet]);
									histoSSVHP_b->Fill(discrSSVHP[ijet]);
								}
							}

              if(discrSSVHP[ijet]>2.5 && jetPt[ijet]>200){
                histoPt_alljet_cut->Fill(jetPt[ijet]);
                histoSSVHP_cut->Fill(discrSSVHP[ijet]);
                if(abs(flavorForB[ijet])==5){
                  histoPt_bjet_cut->Fill(jetPt[ijet]);
                  histoSSVHP_b_cut->Fill(discrSSVHP[ijet]);
                }
              }
            }
        }

        f1->Close();
    
    }
    TFile *fout = new TFile("myOutput.root","recreate");
    fout->cd();
    histoPt->Write();
    histoSSVHE->Write();
    histoPt_alljet->Write();
	  histoPt_bjet->Write();
		histoSSVHP->Write();
		histoSSVHP_b->Write();

    histoPt_alljet_cut->Write();
    histoPt_bjet_cut->Write();
    histoSSVHP_cut->Write();
    histoSSVHP_b_cut->Write();

    TH1D *histoPt_bratio = (TH1D*)histoPt_bjet->Clone("histoPt_bratio");
	  histoPt_bratio->SetTitle("histoPt_bratio");
    histoPt_bratio->Divide(histoPt_alljet);
    TH1D *histoSSVHP_bratio = (TH1D*)histoSSVHP_b->Clone("histoSSV_bratio");
    histoSSVHP_bratio->SetTitle("histoSSVHP_bratio");
		histoSSVHP_bratio->Divide(histoSSVHP);

    TH1D *histoPt_bratio_cut = (TH1D*)histoPt_bjet_cut->Clone("histoPt_bratio_cut");
    histoPt_bratio_cut->SetTitle("histoPt_bratio_cut");
    histoPt_bratio_cut->Divide(histoPt_alljet_cut);
    TH1D *histoSSVHP_bratio_cut = (TH1D*)histoSSVHP_b_cut->Clone("histoSSV_bratio_cut");
    histoSSVHP_bratio_cut->SetTitle("histoSSVHP_bratio_cut");
    histoSSVHP_bratio_cut->Divide(histoSSVHP_cut);

		TCanvas *canvas= new TCanvas("canvas","bjet_Ratio");
		canvas->Divide(2,2);
		canvas->cd(1);
  //  histoPt->GetXaxis()->SetTitle("X axis title Pt"); not work
		histoPt_bratio->Draw("e1");
		canvas->cd(2);
		histoSSVHP_bratio->Draw("e1");
		canvas->cd(3);
    histoPt_bratio_cut->Draw("e1");
    canvas->cd(4);
    histoSSVHP_bratio_cut->Draw("e1");

		canvas->SaveAs("./bjet_ratio.jpg");
	

}
