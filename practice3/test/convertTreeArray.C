// Read test tree with 3 events, ssv & pt are array of size nref
// convert branch array into sigle events.
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
	TTree *t2= new TTree("t2","ConvertedTree");
	int event;
	int nref;
	int nrefmax=100;
	double ssv[nrefmax]; // used to read original tree
	double pt[nrefmax];
	int ref;
	int eventN;
	double ssvN;	// used to write new tree
	double ptN;

	t2->Branch("event",&eventN);//,"eventN/I");
	t2->Branch("nref",&nref);//,"nref/I");
	t2->Branch("ref",&ref);//,"ref/I");
	t2->Branch("ssv",&ssvN,"ssvN/D");
	t2->Branch("pt",&ptN,"pt/D");

	// load tree
	TFile *fin= new TFile("testTree.root");
	TTree *t3= (TTree*)fin->Get("t1");


	t3->SetBranchAddress("event",&event);
	t3->SetBranchAddress("nref",&nref);
	t3->SetBranchAddress("ssv",ssv);
	t3->SetBranchAddress("pt",pt);

	int nentries;
	nentries=t3->GetEntries();
	for(int ievt=0; ievt<nentries; ievt++){
		t3->GetEntry(ievt);
		eventN=ievt;
		for(int inref=0; inref< nref ; inref++){
			ssvN=ssv[inref];
			ptN=pt[inref];
			ref=inref;
			t2->Fill();
		}
	}
	fin->Close();
	fout->cd();
	t2->Write();

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
