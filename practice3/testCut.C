//
//
//
//

#include "TFile.h"
#include "TTree.h"
#include "TTree.h"
#include "TCut.h"
#include "TH1.h"
#include <iostream>

void testCut(){

	// create tree
	TFile *f1= new TFile("testCut.root","recreate");
	TTree *t1= new TTree("t1","testCut");
	
	int nref=2;

	double ssv[nref];
  double pt[nref];

	t1->Branch("nref",&nref,"nref/I");
	t1->Branch("ssv",ssv,"ssv[nref]/D");
	t1->Branch("pt",pt,"pt[nref]/D");

	ssv[0]=1;
	ssv[1]=3;
  pt[0]=10;
	pt[1]=30;

	t1->Fill();
//	t1->Fill();	

	t1->Write();
	
	

}

