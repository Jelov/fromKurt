
// Cheng-Chieh learning 3 , firtst part read, from Kurt
// read source tree, calculate weight and save important branch to a new tree
// Created Oct 22, 2015
// Last Modified Oct 29, 2015

#include "TTree.h"
#include "TFile.h"
#include "TH1D.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


void readFiles(){

	double xsecs[10] = {5.335E-01, 3.378E-02, 3.778E-03, 4.412E-04, 6.147E-05, 1.018E-05, 2.477E-06, 6.160E-07, 1.088E-07, 0};
	double pthatbin[10]= {15,30,50,80,120,170,220,280,370,9999};
	int pthatEntries[10]={0,0,0,0,0,0,0,0,0,0};


	std::string list_of_files = "../pAQCDMC_fixGSP_all.txt";

	ifstream infile(list_of_files.c_str());

	std::string filename;
	int nrefmax=100; 
	float jtpt[nrefmax], jteta[nrefmax], jtphi[nrefmax], refpt[nrefmax], rawpt[nrefmax],discr_ssvHighEff[nrefmax], discr_ssvHighPur[nrefmax];
	float svtxm[nrefmax], svtxmcorr[nrefmax], discr_prob[nrefmax];
	float pthat;
	double Weight;
	double crossS;;
	int nref,refparton_flavorForB[nrefmax];

  int bin=1;
	bool evtSelection=true;
	int vz=1;
	float maxTrgPt=3000;


	TFile *fout = new TFile("myOutput.root","recreate");

	TH1D *histoPt = new TH1D("histoPt","histoPt",100,30,200); histoPt->Sumw2();
	TH1D *histoSSV = new TH1D("histoSSV","histoSSV",20,0,6); histoSSV->Sumw2();

	TTree *tJet = new TTree("tJet","tJet");

	//include jtpt, jteta, jtphi, refpt, rawpt, discr_ssvHighEff, discr_ssvHighPur, svtxm, svtxmcorr, discr_prob, weight, pthat
	tJet->Branch("crossS",&crossS,"crossS/D");
	tJet->Branch("pthat",&pthat,"pthat/F");
	tJet->Branch("nref",&nref,"nref/I");
	tJet->Branch("jtpt",jtpt,"jtpt[nref]/F");
	tJet->Branch("jteta",jteta,"jteta[nref]/F");
	tJet->Branch("jtphi",jtphi,"jtphi[nref]/F");
	tJet->Branch("refpt",refpt,"refpt[nref]/F");
	tJet->Branch("rawpt",rawpt,"rawpt[nref]/F");
	tJet->Branch("discr_ssvHighEff",discr_ssvHighEff,"discr_ssvHighEff[nref]/F");
	tJet->Branch("discr_ssvHighPur",discr_ssvHighPur,"discr_ssvHighPur[nref]/F");
	tJet->Branch("svtxm",svtxm,"svtxm[nref]/F");
	tJet->Branch("svtxmcorr",svtxmcorr,"svtxmcorr[nref]/F");
	tJet->Branch("discr_prob",discr_prob,"discr_prob[nref]/F");
	tJet->Branch("refparton_flavorForB",refparton_flavorForB,"refparton_flavorForB[nref]/I");
	// for template fit usesage
	tJet->Branch("bin",&bin,"bin/I");
	tJet->Branch("evtSelection",&evtSelection,"evtSelection/O");
  tJet->Branch("vz",&vz,"vz/I");
  tJet->Branch("maxTrgPt",&maxTrgPt,"maxTrgPt/F");


	int ifile=0;
	while(infile >> filename ){

		ifile++;
		TFile *f1 = new TFile(filename.c_str());
		f1->cd();
		TTree *jetTree = (TTree*)f1->Get("akPu3PFJetAnalyzer/t");

		jetTree->SetBranchAddress("pthat",&pthat);
		jetTree->SetBranchAddress("nref",&nref);
		jetTree->SetBranchAddress("jtpt",jtpt);
		jetTree->SetBranchAddress("jteta",jteta);
		jetTree->SetBranchAddress("jtphi",jtphi);
		jetTree->SetBranchAddress("refpt",refpt);
		jetTree->SetBranchAddress("rawpt",rawpt);
		jetTree->SetBranchAddress("discr_ssvHighEff",discr_ssvHighEff);
		jetTree->SetBranchAddress("discr_ssvHighPur",discr_ssvHighPur);
		jetTree->SetBranchAddress("svtxm",svtxm);
		jetTree->SetBranchAddress("svtxmcorr",svtxmcorr);
		jetTree->SetBranchAddress("discr_prob",discr_prob);
		jetTree->SetBranchAddress("refparton_flavorForB",refparton_flavorForB);


		for(int ievt=0; ievt<jetTree->GetEntries(); ievt++){

			// first clean the content of varaible 
			pthat=0;
			nref=0;
			memset(jtpt, 0, sizeof(jtpt)); 
			memset(jteta, 0, sizeof(jteta)); 
			memset(jtphi, 0, sizeof(jtphi)); 
			memset(refpt, 0, sizeof(refpt)); 
			memset(rawpt, 0, sizeof(rawpt)); 
			memset(discr_ssvHighEff, 0, sizeof(discr_ssvHighEff)); 
			memset(discr_ssvHighPur, 0, sizeof(discr_ssvHighPur)); 
			memset(svtxm, 0, sizeof(svtxm)); 
			memset(svtxmcorr, 0, sizeof(svtxmcorr)); 
			memset(discr_prob, 0, sizeof(discr_prob)); 
			memset(refparton_flavorForB, 0, sizeof(refparton_flavorForB));

			jetTree->GetEntry(ievt);
			bin=1;
			evtSelection=true;
			vz=1;
			maxTrgPt=3000;
			int ibin=0;
			if (pthat>9999){
				cout<<"pthat = "<<pthat<<" >9999, error"<<endl;
				pthat=9998;
				//break;
			}  
			for(ibin=0;pthatbin[ibin]<pthat; ibin++){
			}
			if(ibin==0){
				cout<<"pthat < 15 "<<endl;
				ibin=1;
			}
			pthatEntries[ibin-1]++;     
			crossS = (xsecs[ibin-1]-xsecs[ibin]); 

			for(int ijet=0; ijet<nref; ijet++){
				//				histoPt->Fill( jtpt[ijet] );
				//				histoSSV->Fill(discr_ssvHighEff[ijet]);

			}
			tJet->Fill();
		}

		f1->Close();

	}

	fout->cd();


	// calculate the correct weight and fill in a new tree.
	tJet->SetBranchAddress("crossS",&crossS);
	tJet->SetBranchAddress("pthat",&pthat);

	TBranch *weight=tJet-> Branch("weight",&Weight,"Weight/D"); 
	int nentries = (int)tJet->GetEntries();
	for (int ient = 0; ient < nentries; ient++){
		tJet->GetEntry(ient);
		int ibin;
		for(ibin=0;pthatbin[ibin]<pthat; ibin++){
		}
		if(ibin==0){
			cout<<"pthat < 15 "<<endl;
			ibin=1;
		}

		Weight= crossS/pthatEntries[ibin-1];

		weight->Fill();
	}


	//	for (int i=0; i<10;i++){
	//	cout<<"i= "<<i<<" pthatEntries = "<<pthatEntries[i]<<endl;
	//	}


	histoPt->Write();
	histoSSV->Write();
	tJet->Write();
	fout->Close();
}
