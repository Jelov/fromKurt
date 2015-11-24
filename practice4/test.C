//  read root file and plot some branch with cut

#include <iostream>
#include "TMath.h"
#include "TFile.h"
#include "TH1.h"
#include "TF1.h"
#include "TCanvas.h"
#include "TLegend.h"
#include "TStyle.h"
#include "TROOT.h"
#include "TPad.h"
#include "TRandom.h"
#include "THStack.h"
#include "TH2.h"
#include "TLatex.h"
#include "TTree.h"
#include "TPaveText.h"
#include "TFrame.h"
#include "TCut.h"

#include <RooFit.h>
#include <RooRealVar.h>
#include <RooDataHist.h>
#include <RooDataSet.h>
#include <RooHistPdf.h>
#include <RooPlot.h>
#include <RooAddPdf.h>
#include <RooGlobalFunc.h>

#include <sstream>

using namespace RooFit;

void test(){

TFile *fin= new TFile("histos/ConvertedTree.root");
TTree *tin= (TTree*) fin->Get("nt");


double ptMin=130;
double ptMax=170;
double etaMin=-1;
double etaMax=1;
double svtxmMin=0;
double svtxmMax=6;
double ptHatMin = 0;

// for svtxm
int nhistBins=100;
double minXvar=0.;
double maxXvar=6.;

std::string var="svtxm";

TH1D *hB= new TH1D("hB","hB",nhistBins,minXvar,maxXvar);
TH1D *hC= new TH1D("hC","hC",nhistBins,minXvar,maxXvar);
TH1D *hL= new TH1D("hL","hL",nhistBins,minXvar,maxXvar);
TH1D *hdata= new TH1D("hdata","hdata",nhistBins,minXvar,maxXvar);


TCut Gcut=Form("jtpt>%f && jtpt<%f && svtxm>%f && svtxm<%f && jteta>%f && jteta<%f && jtpt/rawpt<1.5 && pthat>%f",ptMin,ptMax,svtxmMin,svtxmMax,etaMin,etaMax,ptHatMin);
TCut Bcut="abs(refparton_flavorForB)==5";
TCut Ccut="abs(refparton_flavorForB)==4";
TCut Lcut="abs(refparton_flavorForB)!=5 && abs(refparton_flavorForB)!=4";

TCut svtcut="svtxm>2.2 && svtxm<2.3";
TCut testcut=(Gcut&&Lcut&&svtcut)*"weight";
TCanvas *c1= new TCanvas("c1","svtxm for jtpt>130 && jtpt<170");
c1->cd();
c1->Divide(2,2);
c1->cd(1);
tin->Draw(Form("%s>>hB",var.c_str()),(Gcut&&Bcut)*"weight");
c1->cd(2);
tin->Draw(Form("%s>>hC",var.c_str()),(Gcut&&Ccut)*"weight");
c1->cd(3);
tin->Draw(Form("%s>>hL",var.c_str()),(Gcut&&Lcut)*"weight");
c1->cd(4);
tin->Draw(Form("%s>>hdata",var.c_str()),Gcut*"weight");
//tin->Draw(Form("%s>>hB",var.c_str()),Gcut);
TCanvas *c2= new TCanvas("c2","showing peak");
c2->cd();
c2->Divide(2,2);
c2->cd(1);
tin->Draw("svtxm",testcut);
c2->cd(2);
tin->Draw("jtpt",testcut);
c2->cd(3);
tin->Draw("pthat",testcut);
c2->cd(4);
tin->Draw("refparton_flavorForB",testcut);


// cut format (PtCut&&Tag)*"weight"	
}
