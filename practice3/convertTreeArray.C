// Read normail tree with array in leaf, convert it to a simple tree.
// convert branch array into sigle event
//

#include "TFile.h"
#include "TTree.h"
#include "TTree.h"
#include "TCut.h"
#include "TH1.h"
#include <iostream>

void convertTreeArray(){

	//create tree
	TFile *fout= new TFile("ConvertedTree.root","recreate");
	TTree *nt= new TTree("nt","ConvertedTree");

	int event;
	int ref;
	int nref;
	int nrefmax=100;
	float jtpt[nrefmax], jteta[nrefmax], jtphi[nrefmax], refpt[nrefmax], rawpt[nrefmax],discr_ssvHighEff[nrefmax], discr_ssvHighPur[nrefmax];
	float svtxm[nrefmax], svtxmcorr[nrefmax], discr_prob[nrefmax];
	float pthat;
	double Weight;
	double crossS;;
	int refparton_flavorForB[nrefmax];

	int bin=1;
	bool evtSelection=true;
	int vz=1;
	float maxTrgPt=3000;

	// for new tree nonarray branch
	float jtptN, jtetaN, jtphiN, refptN, rawptN, discr_ssvHighEffN, discr_ssvHighPurN;
	float svtxmN, svtxmcorrN, discr_probN;
	int refparton_flavorForBN;

	nt->Branch("event",&event);// for distungush which jets belong to same event;
	nt->Branch("ref",&ref);//

	nt->Branch("weight",&Weight);
	nt->Branch("crossS",&crossS);
	nt->Branch("pthat",&pthat);
	nt->Branch("nref",&nref);
	nt->Branch("jtpt",&jtptN);
	nt->Branch("jteta",&jtetaN);
	nt->Branch("jtphi",&jtphiN);
	nt->Branch("refpt",&refptN);
	nt->Branch("rawpt",&rawptN);
	nt->Branch("discr_ssvHighEff",&discr_ssvHighEffN);
	nt->Branch("discr_ssvHighPur",&discr_ssvHighPurN);
	nt->Branch("svtxm",&svtxmN);
	nt->Branch("svtxmcorr",&svtxmcorrN);
	nt->Branch("discr_prob",&discr_probN);
	nt->Branch("refparton_flavorForB",&refparton_flavorForBN);
	// for template fit usesage
	nt->Branch("bin",&bin);
	nt->Branch("evtSelection",&evtSelection);
	nt->Branch("vz",&vz);
	nt->Branch("maxTrgPt",&maxTrgPt);




	// load tree
	TFile *fin= new TFile("myOutput.root");
	TTree *t3= (TTree*)fin->Get("tJet");

	t3->SetBranchAddress("pthat",&pthat);
	t3->SetBranchAddress("nref",&nref);
	t3->SetBranchAddress("jtpt",jtpt);
	t3->SetBranchAddress("jteta",jteta);
	t3->SetBranchAddress("jtphi",jtphi);
	t3->SetBranchAddress("refpt",refpt);
	t3->SetBranchAddress("rawpt",rawpt);
	t3->SetBranchAddress("discr_ssvHighEff",discr_ssvHighEff);
	t3->SetBranchAddress("discr_ssvHighPur",discr_ssvHighPur);
	t3->SetBranchAddress("svtxm",svtxm);
	t3->SetBranchAddress("svtxmcorr",svtxmcorr);
	t3->SetBranchAddress("discr_prob",discr_prob);
	t3->SetBranchAddress("refparton_flavorForB",refparton_flavorForB);
  t3->SetBranchAddress("weight",&Weight);
  t3->SetBranchAddress("crossS",&crossS);
  t3->SetBranchAddress("bin",&bin);
  t3->SetBranchAddress("evtSelection",&evtSelection);
  t3->SetBranchAddress("vz",&vz);
  t3->SetBranchAddress("maxTrgPt",&maxTrgPt);

	int nentries;
	nentries=t3->GetEntries();
	for(int ievt=0; ievt<nentries; ievt++){
		t3->GetEntry(ievt);
		event=ievt;
		for(int inref=0; inref< nref ; inref++){

			jtptN=jtpt[inref]; 
			jtetaN=jteta[inref]; 
			jtphiN=jtphi[inref]; 
			refptN=refpt[inref];
			rawptN=rawpt[inref]; 
			discr_ssvHighEffN=discr_ssvHighEff[inref]; 
			discr_ssvHighPurN=discr_ssvHighPur[inref];
  		svtxmN=svtxm[inref];
			svtxmcorrN=svtxmcorr[inref];
			discr_probN=discr_prob[inref];
  		refparton_flavorForBN=refparton_flavorForB[inref];
			ref=inref;
			nt->Fill();
		}
	}
	fin->Close();
	fout->cd();
	nt->Write();

}

//  useless
/*
	 int nref=2;
	 int event=1;
	 double ssv[nref];
	 double pt[nref];

	 t1->Branch("event",&event,"event/I");
	 t1->Branch("nref",&nref,"nref/I");
	 t1->Branch("ssv",ssv,"ssv[nref]/D");
	 t1->Branch("pt",pt,"pt[nref]/D");

// event 1

event=1;
nref=2;
ssv[0]=11;
ssv[1]=12;
pt[0]=111;
pt[1]=121;

t1->Fill(); 

event=2;
nref=1;
ssv[0]=21;
pt[0]=211;
t1->Fill();

//	t1->Fill();
event=3;
nref=2;
ssv[0]=31;
ssv[1]=32;
pt[0]=311;
pt[1]=312;
t1->Fill();


t1->Write();




}
*/
