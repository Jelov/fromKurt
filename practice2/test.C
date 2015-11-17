
//Cheng-Chieh learning 2 from Kurt
// Created Oct 22, 2015
// Modified Oct 22, 2015

#include "TTree.h"
#include "TFile.h"
#include "TH1D.h"
#include <iostream>
#include <fstream>
#include <string>
#include <array>

using namespace std;

//double xsecs[10] = {5.335E-01, 3.378E-02, 3.778E-03, 4.412E-04, 6.147E-05, 1.018E-05, 2.477E-06, 6.160E-07, 1.088E-07, 0};
//double pthatbin[10]= {15,30,50,80,120,170,220,280,370,9999};
//weight = (xsecs[ibin]-xsecs[ibin+1])/pthatEntries[ibin];

void test(){


	double array_size5[5]={1,2,3,4,5};
	float array_sizebycontent[]={1,2,3,4,5,6};
	cout<<array_size5.size()<<endl;

	for (int i=0; i<5; i++){

		cout<<array_size5[i]<<" array_size5 "<<	array_sizebycontent[i]<<" array_sizebycontent "<<endl;

	}

memset(array_size5, 0, sizeof(array_size5)); // for automatically-allocated arrays
memset(array_sizebycontent, 0, sizeof(array_sizebycontent)); // for automatically-allocated arrays

//memset(myarray, 0, N*sizeof(*myarray)); // for heap-allocated arrays, where N is the number of elements
    cout<<"aftermemset"<<endl;

  for (int i=0; i<5; i++){
    cout<<array_size5[i]<<" array_size5 "<< array_sizebycontent[i]<<" array_sizebycontent "<<endl;

  }

/*
	std::string list_of_files = "../pAQCDMC_fixGSP_all.txt";

	ifstream infile(list_of_files.c_str());

	std::string filename;

	TFile *fout = new TFile("myOutput.root","recreate");

	TH1D *histoPt = new TH1D("histoPt","histoPt",100,30,200); histoPt->Sumw2();
	TH1D *histoSSV = new TH1D("histoSSV","histoSSV",20,0,6); histoSSV->Sumw2();

	TTree *tJet = new TTree("tJet","tJet");

	//include jtpt, jteta, jtphi, refpt, rawpt, discr_ssvHighEff, discr_ssvHighPur, svtxm, svtxmcorr, discr_prob, weight, pthat

  float jetPt1[100], discrSSV[100],jetpt1;


	tJet->Branch("jtpt1",&jetpt1);
	tJet->Branch("jtpt2",jetPt1);


	int ifile=0;
	while(infile >> filename && ifile<10){

		ifile++;
		TFile *f1 = new TFile(filename.c_str());
		f1->cd();
		TTree *jetTree = (TTree*)f1->Get("akPu3PFJetAnalyzer/t");

		float jetPt1[100], discrSSV[100],jetpt1;
		int nref;
		//      double jtpt, jteta, jtphi, refpt, rawpt, discr_ssvHighEff, discr_ssvHighPur, svtxm, svtxmcorr, discr_prob, weight, pthat
		//			  double jetPt[100];
		jetTree->SetBranchAddress("jtpt",jetPt1);
		jetTree->SetBranchAddress("discr_ssvHighEff",discrSSV);
		jetTree->SetBranchAddress("nref",&nref);
//		tJet->Branch("jtpt1",&jetpt1);
//		tJet->Branch("jtpt2",jetPt1);
//		tJet->Branch("discr_ssvHighEff1",discrSSV);


		for(int ievt=0; ievt<jetTree->GetEntries(); ievt++){

			jetTree->GetEntry(ievt);
			for(int ijet=0; ijet<nref; ijet++){
				histoPt->Fill( jetPt1[ijet] );
				histoSSV->Fill(discrSSV[ijet]);
				jetpt1=jetPt1[1];
				tJet->Fill();

			}

		}

		f1->Close();

	}
	//    TFile *fout = new TFile("myOutput.root","recreate");
	fout->cd();
	histoPt->Write();
	histoSSV->Write();
	tJet->Write();
	fout->Close();*/
}
