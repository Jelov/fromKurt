// Build test tree with 3 events, ssv & pt are array of size nref
//
//

#include "TFile.h"
#include "TTree.h"
#include "TTree.h"
#include "TCut.h"
#include "TH1.h"
#include <iostream>

void buildTestTree(){

	// create tree
	TFile *f1= new TFile("testTree.root","recreate");
	TTree *t1= new TTree("t1","testCut");

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

