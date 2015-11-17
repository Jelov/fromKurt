
//Cheng-Chieh's first macro!
// Oct 20, 2015

#include "TTree.h"
#include "TFile.h"
#include "TH1D.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void readFiles(){

    std::string list_of_files = "./pAQCDMC_fixGSP_all.txt";

    ifstream infile(list_of_files.c_str());

    std::string filename;
    
    TH1D *histoPt = new TH1D("histoPt","histoPt",100,30,200); histoPt->Sumw2();
    TH1D *histoSSV = new TH1D("histoSSV","histoSSV",20,0,6); histoSSV->Sumw2();

    int ifile=0;
    while(infile >> filename && ifile<10){
    
        ifile++;
        TFile *f1 = new TFile(filename.c_str());
        TTree *jetTree = (TTree*)f1->Get("akPu3PFJetAnalyzer/t");

        float jetPt[100], discrSSV[100];
        int nref;

        jetTree->SetBranchAddress("jtpt",jetPt);
        jetTree->SetBranchAddress("discr_ssvHighEff",discrSSV);
        jetTree->SetBranchAddress("nref",&nref);
            
        for(int ievt=0; ievt<jetTree->GetEntries(); ievt++){

            jetTree->GetEntry(ievt);
            for(int ijet=0; ijet<nref; ijet++){
                histoPt->Fill( jetPt[ijet] );
                histoSSV->Fill(discrSSV[ijet]);
            
            }

        }

        f1->Close();
    
    }
    TFile *fout = new TFile("myOutput.root","recreate");
    fout->cd();
    histoPt->Write();
    histoSSV->Write();

}
