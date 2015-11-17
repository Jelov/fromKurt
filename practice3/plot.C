//	Cheng-Chieh Peng
//
//	read the output of readFile from MC, using weight info to calculate and plot b fraction.
//  cross check bFraction directly (#B/#Alljets)
//  =(#tagAll)/(#jets)*(#tagB)/(#tagAlljets)*(#B)/(#tagB)
//     taggedFraction *   purifty           *  1/tagefficiency
//  tag: SSV > 2.0 cut 
//	
//	created 10.30.2015
//	modified 10.30.2015



#include <iostream>
#include "TTree.h"
#include "TH1.h"
#include "TFile.h"
#include "TCut.h"
#include "TCanvas.h"

void plot(){

	TFile *f1 = new TFile("myOutput.root");
	TTree *t1 = (TTree*)f1->Get("tJet");

  int ptbinN = 17;
  int ptbinMin=60;
	int ptbinMax=400;	

	TH1D *histoPt_allJets = new TH1D("histoPt_allJets","histoPt_allJets",ptbinN,ptbinMin,ptbinMax); 	histoPt_allJets->Sumw2();
  TH1D *histoPt_allJetsTag = new TH1D("histoPt_allJetsTag","histoPt_allJetsTag",ptbinN,ptbinMin,ptbinMax); 	histoPt_allJetsTag->Sumw2();
  TH1D *histoPt_BJets = new TH1D("histoPt_BJets","histoPt_BJets",ptbinN,ptbinMin,ptbinMax); 	histoPt_BJets->Sumw2();
  TH1D *histoPt_BJetsTag = new TH1D("histoPt_BJetsTag","histoPt_BJetsTag",ptbinN,ptbinMin,ptbinMax);		histoPt_BJetsTag->Sumw2(); 
	
  TH1D *histoPt_BFrac = new TH1D("histoPt_BFrac","histoPt_BFrac",ptbinN,ptbinMin,ptbinMax); 	histoPt_BFrac->Sumw2();
  TH1D *histoPt_BFrac1 = new TH1D("histoPt_BFrac1","histoPt_BFrac1",ptbinN,ptbinMin,ptbinMax);   histoPt_BFrac1->Sumw2();
  TH1D *histoPt_tagFrac = new TH1D("histoPt_tagFrac","histoPt_tagFrac",ptbinN,ptbinMin,ptbinMax);		histoPt_tagFrac->Sumw2();	
  TH1D *histoPt_Purity = new TH1D("histoPt_Purity","histoPt_Purity",ptbinN,ptbinMin,ptbinMax);		histoPt_Purity->Sumw2();
  TH1D *histoPt_tagEff = new TH1D("histoPt_tagEff","histoPt_tagEff",ptbinN,ptbinMin,ptbinMax);	histoPt_tagEff->Sumw2();

// refpt 
  TH1D *historefPt_allJets = new TH1D("historefPt_allJets","historefPt_allJets",ptbinN,ptbinMin,ptbinMax);   historefPt_allJets->Sumw2();
  TH1D *historefPt_allJetsTag = new TH1D("historefPt_allJetsTag","historefPt_allJetsTag",ptbinN,ptbinMin,ptbinMax);  historefPt_allJetsTag->Sumw2();
  TH1D *historefPt_BJets = new TH1D("historefPt_BJets","historefPt_BJets",ptbinN,ptbinMin,ptbinMax);   historefPt_BJets->Sumw2();
  TH1D *historefPt_BJetsTag = new TH1D("historefPt_BJetsTag","historefPt_BJetsTag",ptbinN,ptbinMin,ptbinMax);    historefPt_BJetsTag->Sumw2();

  TH1D *historefPt_BFrac = new TH1D("historefPt_BFrac","historefPt_BFrac",ptbinN,ptbinMin,ptbinMax);   historefPt_BFrac->Sumw2();
  TH1D *historefPt_BFrac1 = new TH1D("historefPt_BFrac1","historefPt_BFrac1",ptbinN,ptbinMin,ptbinMax);   historefPt_BFrac1->Sumw2();
  TH1D *historefPt_tagFrac = new TH1D("historefPt_tagFrac","historefPt_tagFrac",ptbinN,ptbinMin,ptbinMax);   historefPt_tagFrac->Sumw2();
  TH1D *historefPt_Purity = new TH1D("historefPt_Purity","historefPt_Purity",ptbinN,ptbinMin,ptbinMax);    historefPt_Purity->Sumw2();
  TH1D *historefPt_tagEff = new TH1D("historefPt_tagEff","historefPt_tagEff",ptbinN,ptbinMin,ptbinMax);  historefPt_tagEff->Sumw2();


	TCut Tag="discr_ssvHighEff>2.0";
	TCut Btrue="abs(flavorForB)==5";	
	TCut PtCut="pthat>50 && refpt>55 &&refpt>30";

	TCanvas *Canvas1 = new TCanvas("Canvas1","pt_Jets");
	Canvas1->Divide(2,2);
	Canvas1->SetLogy();
  Canvas1->cd(1);
  t1->Draw("jtpt>>histoPt_allJets",PtCut*"weight");	
  Canvas1->cd(2);
  t1->Draw("jtpt>>histoPt_allJetsTag",(PtCut&&Tag)*"weight");   //notice here Tag*"weight" , not "Tag*weight" nor Tag&&weight
	Canvas1->cd(3);
  t1->Draw("jtpt>>histoPt_BJets",(PtCut&&Btrue)*"weight");
	Canvas1->cd(4);
  t1->Draw("jtpt>>histoPt_BJetsTag",(PtCut&&Tag&&Btrue)*"weight");
	Canvas1->SaveAs("./plots/pt_Jets.pdf");

  histoPt_BFrac->Divide(histoPt_BJets,histoPt_allJets);
	histoPt_tagFrac->Divide(histoPt_allJetsTag,histoPt_allJets);
	histoPt_Purity->Divide(histoPt_BJetsTag,histoPt_allJetsTag);
  histoPt_tagEff->Divide(histoPt_BJetsTag,histoPt_BJets);

	histoPt_BFrac1->Multiply(histoPt_tagFrac,histoPt_Purity);
  histoPt_BFrac1->Divide(histoPt_BFrac1,histoPt_tagEff);  

	TCanvas *Canvas2 = new TCanvas("Canvas2","BFrac");
	Canvas2->Divide(3,2);
  Canvas2->cd(1);
	histoPt_BFrac->Draw();
	Canvas2->cd(2);
	histoPt_BFrac1->Draw();
	Canvas2->cd(3);
	histoPt_tagFrac->Draw();
	Canvas2->cd(4);
	histoPt_Purity->Draw();
  Canvas2->cd(5);
	histoPt_tagEff->Draw();
	Canvas2->SaveAs("./plots/BFrac.pdf");
 

  TCanvas *Canvas3 = new TCanvas("Canvas3","refpt_Jets");
  Canvas3->Divide(2,2);
  Canvas3->SetLogy();
  Canvas3->cd(1);
  t1->Draw("refpt>>historefPt_allJets",PtCut*"weight");
  Canvas3->cd(2);
  t1->Draw("refpt>>historefPt_allJetsTag",(PtCut&&Tag)*"weight");   //notice here Tag*"weight" , not "Tag*weight" nor Tag&&weight
  Canvas3->cd(3);
  t1->Draw("refpt>>historefPt_BJets",(PtCut&&Btrue)*"weight");
  Canvas3->cd(4);
  t1->Draw("refpt>>historefPt_BJetsTag",(PtCut&&Tag&&Btrue)*"weight");
  Canvas3->SaveAs("./plots/refpt_Jets.pdf");

  historefPt_BFrac->Divide(historefPt_BJets,historefPt_allJets);
  historefPt_tagFrac->Divide(historefPt_allJetsTag,historefPt_allJets);
  historefPt_Purity->Divide(historefPt_BJetsTag,historefPt_allJetsTag);
  historefPt_tagEff->Divide(historefPt_BJetsTag,historefPt_BJets);

  historefPt_BFrac1->Multiply(historefPt_tagFrac,historefPt_Purity);
  historefPt_BFrac1->Divide(historefPt_BFrac1,historefPt_tagEff);

  TCanvas *Canvas4 = new TCanvas("Canvas4","BFrac_refpt");
  Canvas4->Divide(3,2);
  Canvas4->cd(1);
  historefPt_BFrac->Draw();
  Canvas4->cd(2);
  historefPt_BFrac1->Draw();
  Canvas4->cd(3);
  historefPt_tagFrac->Draw();
  Canvas4->cd(4);
  historefPt_Purity->Draw();
  Canvas4->cd(5);
  historefPt_tagEff->Draw();
  Canvas4->SaveAs("./plots/BFrac_ref.pdf");



}
