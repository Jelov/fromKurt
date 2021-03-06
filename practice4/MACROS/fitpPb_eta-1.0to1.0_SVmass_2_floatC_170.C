{
//=========Macro generated from canvas: can1_9/can1_9
//=========  (Mon Nov 16 22:04:26 2015) by ROOT version5.34/20
   TCanvas *can1_9 = new TCanvas("can1_9", "can1_9",220,243,700,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   can1_9->Range(-0.7500001,-8.542021,6.75,-4.792021);
   can1_9->SetFillColor(0);
   can1_9->SetBorderMode(0);
   can1_9->SetBorderSize(2);
   can1_9->SetLogy();
   can1_9->SetFrameBorderMode(0);
   can1_9->SetFrameBorderMode(0);
   
   TH1D *hData_9 = new TH1D("hData_9","hData_9",12,0,6);
   hData_9->SetBinContent(1,4.538431e-08);
   hData_9->SetBinContent(2,1.361474e-07);
   hData_9->SetBinContent(3,9.343305e-08);
   hData_9->SetBinContent(4,6.211883e-08);
   hData_9->SetBinContent(5,3.348202e-08);
   hData_9->SetBinContent(6,2.420446e-08);
   hData_9->SetBinContent(7,1.555745e-08);
   hData_9->SetBinContent(8,9.294492e-09);
   hData_9->SetBinContent(9,4.932583e-09);
   hData_9->SetBinContent(10,2.548175e-09);
   hData_9->SetBinContent(11,1.742678e-09);
   hData_9->SetBinContent(12,1.36354e-09);
   hData_9->SetBinContent(13,1.239803e-09);
   hData_9->SetBinError(1,1.975126e-09);
   hData_9->SetBinError(2,2.940255e-09);
   hData_9->SetBinError(3,2.741134e-09);
   hData_9->SetBinError(4,1.907133e-09);
   hData_9->SetBinError(5,1.304084e-09);
   hData_9->SetBinError(6,1.372616e-09);
   hData_9->SetBinError(7,1.026125e-09);
   hData_9->SetBinError(8,5.980221e-10);
   hData_9->SetBinError(9,4.175881e-10);
   hData_9->SetBinError(10,2.876298e-10);
   hData_9->SetBinError(11,2.569432e-10);
   hData_9->SetBinError(12,2.510206e-10);
   hData_9->SetBinError(13,2.110244e-10);
   hData_9->SetMinimum(2);
   hData_9->SetMaximum(6.807371e-06);
   hData_9->SetEntries(54724);
   hData_9->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hData_9->SetLineColor(ci);
   hData_9->SetMarkerStyle(8);
   hData_9->SetMarkerSize(1.5);
   hData_9->GetXaxis()->SetTitle("Secondary vertex mass (GeV/c^{2})");
   hData_9->GetXaxis()->CenterTitle(true);
   hData_9->GetXaxis()->SetLabelFont(43);
   hData_9->GetXaxis()->SetLabelSize(28);
   hData_9->GetXaxis()->SetTitleSize(28);
   hData_9->GetXaxis()->SetTitleOffset(1.3);
   hData_9->GetXaxis()->SetTitleFont(43);
   hData_9->GetYaxis()->SetTitle("Number of jets");
   hData_9->GetYaxis()->CenterTitle(true);
   hData_9->GetYaxis()->SetLabelFont(43);
   hData_9->GetYaxis()->SetLabelSize(28);
   hData_9->GetYaxis()->SetTitleSize(28);
   hData_9->GetYaxis()->SetTitleFont(43);
   hData_9->GetZaxis()->SetLabelFont(43);
   hData_9->GetZaxis()->SetLabelSize(28);
   hData_9->GetZaxis()->SetTitleSize(28);
   hData_9->GetZaxis()->SetTitleFont(43);
   hData_9->Draw("");
   
   THStack *hs_9 = new THStack();
   hs_9->SetName("hs_9");
   hs_9->SetTitle("le stack of MC histos");
   
   TH1F *hs_9_stack_4 = new TH1F("hs_9_stack_4","le stack of MC histos",12,0,6);
   hs_9_stack_4->SetMinimum(4.390988e-11);
   hs_9_stack_4->SetMaximum(2.723656e-07);
   hs_9_stack_4->SetDirectory(0);
   hs_9_stack_4->SetStats(0);

   ci = TColor::GetColor("#000099");
   hs_9_stack_4->SetLineColor(ci);
   hs_9_stack_4->GetXaxis()->SetLabelFont(43);
   hs_9_stack_4->GetXaxis()->SetLabelSize(28);
   hs_9_stack_4->GetXaxis()->SetTitleSize(28);
   hs_9_stack_4->GetXaxis()->SetTitleFont(43);
   hs_9_stack_4->GetYaxis()->SetLabelFont(43);
   hs_9_stack_4->GetYaxis()->SetLabelSize(28);
   hs_9_stack_4->GetYaxis()->SetTitleSize(28);
   hs_9_stack_4->GetYaxis()->SetTitleFont(43);
   hs_9_stack_4->GetZaxis()->SetLabelFont(43);
   hs_9_stack_4->GetZaxis()->SetLabelSize(28);
   hs_9_stack_4->GetZaxis()->SetTitleSize(28);
   hs_9_stack_4->GetZaxis()->SetTitleFont(43);
   hs_9->SetHistogram(hs_9_stack_4);
   
   
   TH1D *hMCB_9 = new TH1D("hMCB_9","hMCB_9",12,0,6);
   hMCB_9->SetBinContent(1,7.755272e-10);
   hMCB_9->SetBinContent(2,5.490462e-09);
   hMCB_9->SetBinContent(3,9.133137e-09);
   hMCB_9->SetBinContent(4,8.683258e-09);
   hMCB_9->SetBinContent(5,7.003165e-09);
   hMCB_9->SetBinContent(6,5.589331e-09);
   hMCB_9->SetBinContent(7,3.829764e-09);
   hMCB_9->SetBinContent(8,2.190507e-09);
   hMCB_9->SetBinContent(9,1.172273e-09);
   hMCB_9->SetBinContent(10,5.779305e-10);
   hMCB_9->SetBinContent(11,3.40096e-10);
   hMCB_9->SetBinContent(12,2.931865e-10);
   hMCB_9->SetBinContent(13,2.273654e-10);
   hMCB_9->SetBinError(1,2.322733e-10);
   hMCB_9->SetBinError(2,3.295833e-10);
   hMCB_9->SetBinError(3,5.753336e-10);
   hMCB_9->SetBinError(4,3.230349e-10);
   hMCB_9->SetBinError(5,3.557954e-10);
   hMCB_9->SetBinError(6,3.414869e-10);
   hMCB_9->SetBinError(7,3.055682e-10);
   hMCB_9->SetBinError(8,1.671473e-10);
   hMCB_9->SetBinError(9,1.224148e-10);
   hMCB_9->SetBinError(10,8.154578e-11);
   hMCB_9->SetBinError(11,6.507085e-11);
   hMCB_9->SetBinError(12,7.020641e-11);
   hMCB_9->SetBinError(13,4.754012e-11);
   hMCB_9->SetEntries(19058);
   hMCB_9->SetStats(0);

   ci = TColor::GetColor("#cc3333");
   hMCB_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   hMCB_9->SetLineColor(ci);
   hMCB_9->SetMarkerSize(0);
   hMCB_9->GetXaxis()->SetLabelFont(43);
   hMCB_9->GetXaxis()->SetLabelSize(28);
   hMCB_9->GetXaxis()->SetTitleSize(28);
   hMCB_9->GetXaxis()->SetTitleFont(43);
   hMCB_9->GetYaxis()->SetLabelFont(43);
   hMCB_9->GetYaxis()->SetLabelSize(28);
   hMCB_9->GetYaxis()->SetTitleSize(28);
   hMCB_9->GetYaxis()->SetTitleFont(43);
   hMCB_9->GetZaxis()->SetLabelFont(43);
   hMCB_9->GetZaxis()->SetLabelSize(28);
   hMCB_9->GetZaxis()->SetTitleSize(28);
   hMCB_9->GetZaxis()->SetTitleFont(43);
   hs_9->Add(hMCB_9,"");
   
   TH1D *hMCC_9 = new TH1D("hMCC_9","hMCC_9",12,0,6);
   hMCC_9->SetBinContent(1,5.715921e-09);
   hMCC_9->SetBinContent(2,4.12524e-08);
   hMCC_9->SetBinContent(3,3.878047e-08);
   hMCC_9->SetBinContent(4,2.736679e-08);
   hMCC_9->SetBinContent(5,6.325078e-09);
   hMCC_9->SetBinContent(6,3.614817e-09);
   hMCC_9->SetBinContent(7,2.131251e-09);
   hMCC_9->SetBinContent(8,1.53576e-09);
   hMCC_9->SetBinContent(9,8.501568e-10);
   hMCC_9->SetBinContent(10,5.408173e-10);
   hMCC_9->SetBinContent(11,5.793283e-10);
   hMCC_9->SetBinContent(12,3.699116e-10);
   hMCC_9->SetBinContent(13,2.589946e-10);
   hMCC_9->SetBinError(1,4.867682e-10);
   hMCC_9->SetBinError(2,1.389653e-09);
   hMCC_9->SetBinError(3,1.770733e-09);
   hMCC_9->SetBinError(4,1.815032e-09);
   hMCC_9->SetBinError(5,5.543226e-10);
   hMCC_9->SetBinError(6,4.411027e-10);
   hMCC_9->SetBinError(7,3.001729e-10);
   hMCC_9->SetBinError(8,2.640073e-10);
   hMCC_9->SetBinError(9,1.563746e-10);
   hMCC_9->SetBinError(10,1.369664e-10);
   hMCC_9->SetBinError(11,1.784742e-10);
   hMCC_9->SetBinError(12,1.312312e-10);
   hMCC_9->SetBinError(13,5.95042e-11);
   hMCC_9->SetEntries(13044);
   hMCC_9->SetStats(0);

   ci = TColor::GetColor("#33cc33");
   hMCC_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   hMCC_9->SetLineColor(ci);
   hMCC_9->SetMarkerSize(0);
   hMCC_9->GetXaxis()->SetLabelFont(43);
   hMCC_9->GetXaxis()->SetLabelSize(28);
   hMCC_9->GetXaxis()->SetTitleSize(28);
   hMCC_9->GetXaxis()->SetTitleFont(43);
   hMCC_9->GetYaxis()->SetLabelFont(43);
   hMCC_9->GetYaxis()->SetLabelSize(28);
   hMCC_9->GetYaxis()->SetTitleSize(28);
   hMCC_9->GetYaxis()->SetTitleFont(43);
   hMCC_9->GetZaxis()->SetLabelFont(43);
   hMCC_9->GetZaxis()->SetLabelSize(28);
   hMCC_9->GetZaxis()->SetTitleSize(28);
   hMCC_9->GetZaxis()->SetTitleFont(43);
   hs_9->Add(hMCC_9,"");
   
   TH1D *hMCL_9 = new TH1D("hMCL_9","hMCL_9",12,0,6);
   hMCL_9->SetBinContent(1,5.387396e-08);
   hMCL_9->SetBinContent(2,1.199996e-07);
   hMCL_9->SetBinContent(3,4.634477e-08);
   hMCL_9->SetBinContent(4,1.728098e-08);
   hMCL_9->SetBinContent(5,8.455645e-09);
   hMCL_9->SetBinContent(6,4.834972e-09);
   hMCL_9->SetBinContent(7,2.260382e-09);
   hMCL_9->SetBinContent(8,1.490143e-09);
   hMCL_9->SetBinContent(9,7.069845e-10);
   hMCL_9->SetBinContent(10,3.740078e-10);
   hMCL_9->SetBinContent(11,2.654396e-10);
   hMCL_9->SetBinContent(12,1.807928e-10);
   hMCL_9->SetBinContent(13,4.284942e-10);
   hMCL_9->SetBinError(1,2.515483e-09);
   hMCL_9->SetBinError(2,3.525101e-09);
   hMCL_9->SetBinError(3,2.035146e-09);
   hMCL_9->SetBinError(4,9.150307e-10);
   hMCL_9->SetBinError(5,6.437219e-10);
   hMCL_9->SetBinError(6,1.060441e-09);
   hMCL_9->SetBinError(7,2.88587e-10);
   hMCL_9->SetBinError(8,2.323465e-10);
   hMCL_9->SetBinError(9,1.055091e-10);
   hMCL_9->SetBinError(10,7.288884e-11);
   hMCL_9->SetBinError(11,6.379656e-11);
   hMCL_9->SetBinError(12,5.474088e-11);
   hMCL_9->SetBinError(13,1.948368e-10);
   hMCL_9->SetEntries(22622);
   hMCL_9->SetStats(0);

   ci = TColor::GetColor("#3333cc");
   hMCL_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   hMCL_9->SetLineColor(ci);
   hMCL_9->SetMarkerSize(0);
   hMCL_9->GetXaxis()->SetLabelFont(43);
   hMCL_9->GetXaxis()->SetLabelSize(28);
   hMCL_9->GetXaxis()->SetTitleSize(28);
   hMCL_9->GetXaxis()->SetTitleFont(43);
   hMCL_9->GetYaxis()->SetLabelFont(43);
   hMCL_9->GetYaxis()->SetLabelSize(28);
   hMCL_9->GetYaxis()->SetTitleSize(28);
   hMCL_9->GetYaxis()->SetTitleFont(43);
   hMCL_9->GetZaxis()->SetLabelFont(43);
   hMCL_9->GetZaxis()->SetLabelSize(28);
   hMCL_9->GetZaxis()->SetTitleSize(28);
   hMCL_9->GetZaxis()->SetTitleFont(43);
   hs_9->Add(hMCL_9,"");
   hs_9->Draw("same h e");
   
   TH1D *hData_9 = new TH1D("hData_9","hData_9",12,0,6);
   hData_9->SetBinContent(1,4.538431e-08);
   hData_9->SetBinContent(2,1.361474e-07);
   hData_9->SetBinContent(3,9.343305e-08);
   hData_9->SetBinContent(4,6.211883e-08);
   hData_9->SetBinContent(5,3.348202e-08);
   hData_9->SetBinContent(6,2.420446e-08);
   hData_9->SetBinContent(7,1.555745e-08);
   hData_9->SetBinContent(8,9.294492e-09);
   hData_9->SetBinContent(9,4.932583e-09);
   hData_9->SetBinContent(10,2.548175e-09);
   hData_9->SetBinContent(11,1.742678e-09);
   hData_9->SetBinContent(12,1.36354e-09);
   hData_9->SetBinContent(13,1.239803e-09);
   hData_9->SetBinError(1,1.975126e-09);
   hData_9->SetBinError(2,2.940255e-09);
   hData_9->SetBinError(3,2.741134e-09);
   hData_9->SetBinError(4,1.907133e-09);
   hData_9->SetBinError(5,1.304084e-09);
   hData_9->SetBinError(6,1.372616e-09);
   hData_9->SetBinError(7,1.026125e-09);
   hData_9->SetBinError(8,5.980221e-10);
   hData_9->SetBinError(9,4.175881e-10);
   hData_9->SetBinError(10,2.876298e-10);
   hData_9->SetBinError(11,2.569432e-10);
   hData_9->SetBinError(12,2.510206e-10);
   hData_9->SetBinError(13,2.110244e-10);
   hData_9->SetMinimum(2);
   hData_9->SetMaximum(6.807371e-06);
   hData_9->SetEntries(54724);
   hData_9->SetStats(0);

   ci = TColor::GetColor("#000099");
   hData_9->SetLineColor(ci);
   hData_9->SetMarkerStyle(8);
   hData_9->SetMarkerSize(1.5);
   hData_9->GetXaxis()->SetTitle("Secondary vertex mass (GeV/c^{2})");
   hData_9->GetXaxis()->CenterTitle(true);
   hData_9->GetXaxis()->SetLabelFont(43);
   hData_9->GetXaxis()->SetLabelSize(28);
   hData_9->GetXaxis()->SetTitleSize(28);
   hData_9->GetXaxis()->SetTitleOffset(1.3);
   hData_9->GetXaxis()->SetTitleFont(43);
   hData_9->GetYaxis()->SetTitle("Number of jets");
   hData_9->GetYaxis()->CenterTitle(true);
   hData_9->GetYaxis()->SetLabelFont(43);
   hData_9->GetYaxis()->SetLabelSize(28);
   hData_9->GetYaxis()->SetTitleSize(28);
   hData_9->GetYaxis()->SetTitleFont(43);
   hData_9->GetZaxis()->SetLabelFont(43);
   hData_9->GetZaxis()->SetLabelSize(28);
   hData_9->GetZaxis()->SetTitleSize(28);
   hData_9->GetZaxis()->SetTitleFont(43);
   hData_9->Draw("same");
   
   TH1D *MCTotal_9 = new TH1D("MCTotal_9","MCTotal_9",12,0,6);
   MCTotal_9->SetBinContent(1,6.03654e-08);
   MCTotal_9->SetBinContent(2,1.667425e-07);
   MCTotal_9->SetBinContent(3,9.425837e-08);
   MCTotal_9->SetBinContent(4,5.333103e-08);
   MCTotal_9->SetBinContent(5,2.178389e-08);
   MCTotal_9->SetBinContent(6,1.403912e-08);
   MCTotal_9->SetBinContent(7,8.221397e-09);
   MCTotal_9->SetBinContent(8,5.21641e-09);
   MCTotal_9->SetBinContent(9,2.729414e-09);
   MCTotal_9->SetBinContent(10,1.492756e-09);
   MCTotal_9->SetBinContent(11,1.184864e-09);
   MCTotal_9->SetBinContent(12,8.438909e-10);
   MCTotal_9->SetBinContent(13,9.148541e-10);
   MCTotal_9->SetBinError(1,2.572654e-09);
   MCTotal_9->SetBinError(2,3.803432e-09);
   MCTotal_9->SetBinError(3,2.758319e-09);
   MCTotal_9->SetBinError(4,2.058148e-09);
   MCTotal_9->SetBinError(5,9.210005e-10);
   MCTotal_9->SetBinError(6,1.198216e-09);
   MCTotal_9->SetBinError(7,5.164864e-10);
   MCTotal_9->SetBinError(8,3.89388e-10);
   MCTotal_9->SetBinError(9,2.24879e-10);
   MCTotal_9->SetBinError(10,1.752778e-10);
   MCTotal_9->SetBinError(11,2.003928e-10);
   MCTotal_9->SetBinError(12,1.585785e-10);
   MCTotal_9->SetBinError(13,2.091942e-10);
   MCTotal_9->SetEntries(54724);
   MCTotal_9->SetStats(0);

   ci = TColor::GetColor("#9999ff");
   MCTotal_9->SetLineColor(ci);
   MCTotal_9->SetLineWidth(3);

   ci = TColor::GetColor("#666666");
   MCTotal_9->SetMarkerColor(ci);
   MCTotal_9->SetMarkerSize(0);
   MCTotal_9->GetXaxis()->SetLabelFont(43);
   MCTotal_9->GetXaxis()->SetLabelSize(28);
   MCTotal_9->GetXaxis()->SetTitleSize(28);
   MCTotal_9->GetXaxis()->SetTitleFont(43);
   MCTotal_9->GetYaxis()->SetLabelFont(43);
   MCTotal_9->GetYaxis()->SetLabelSize(28);
   MCTotal_9->GetYaxis()->SetTitleSize(28);
   MCTotal_9->GetYaxis()->SetTitleFont(43);
   MCTotal_9->GetZaxis()->SetLabelFont(43);
   MCTotal_9->GetZaxis()->SetLabelSize(28);
   MCTotal_9->GetZaxis()->SetTitleSize(28);
   MCTotal_9->GetZaxis()->SetTitleFont(43);
   MCTotal_9->Draw("same,e");
   
   TH1D *hData_9 = new TH1D("hData_9","hData_9",12,0,6);
   hData_9->SetBinContent(1,4.538431e-08);
   hData_9->SetBinContent(2,1.361474e-07);
   hData_9->SetBinContent(3,9.343305e-08);
   hData_9->SetBinContent(4,6.211883e-08);
   hData_9->SetBinContent(5,3.348202e-08);
   hData_9->SetBinContent(6,2.420446e-08);
   hData_9->SetBinContent(7,1.555745e-08);
   hData_9->SetBinContent(8,9.294492e-09);
   hData_9->SetBinContent(9,4.932583e-09);
   hData_9->SetBinContent(10,2.548175e-09);
   hData_9->SetBinContent(11,1.742678e-09);
   hData_9->SetBinContent(12,1.36354e-09);
   hData_9->SetBinContent(13,1.239803e-09);
   hData_9->SetBinError(1,1.975126e-09);
   hData_9->SetBinError(2,2.940255e-09);
   hData_9->SetBinError(3,2.741134e-09);
   hData_9->SetBinError(4,1.907133e-09);
   hData_9->SetBinError(5,1.304084e-09);
   hData_9->SetBinError(6,1.372616e-09);
   hData_9->SetBinError(7,1.026125e-09);
   hData_9->SetBinError(8,5.980221e-10);
   hData_9->SetBinError(9,4.175881e-10);
   hData_9->SetBinError(10,2.876298e-10);
   hData_9->SetBinError(11,2.569432e-10);
   hData_9->SetBinError(12,2.510206e-10);
   hData_9->SetBinError(13,2.110244e-10);
   hData_9->SetMinimum(2);
   hData_9->SetMaximum(6.807371e-06);
   hData_9->SetEntries(54724);
   hData_9->SetStats(0);

   ci = TColor::GetColor("#000099");
   hData_9->SetLineColor(ci);
   hData_9->SetMarkerStyle(8);
   hData_9->SetMarkerSize(1.5);
   hData_9->GetXaxis()->SetTitle("Secondary vertex mass (GeV/c^{2})");
   hData_9->GetXaxis()->CenterTitle(true);
   hData_9->GetXaxis()->SetLabelFont(43);
   hData_9->GetXaxis()->SetLabelSize(28);
   hData_9->GetXaxis()->SetTitleSize(28);
   hData_9->GetXaxis()->SetTitleOffset(1.3);
   hData_9->GetXaxis()->SetTitleFont(43);
   hData_9->GetYaxis()->SetTitle("Number of jets");
   hData_9->GetYaxis()->CenterTitle(true);
   hData_9->GetYaxis()->SetLabelFont(43);
   hData_9->GetYaxis()->SetLabelSize(28);
   hData_9->GetYaxis()->SetTitleSize(28);
   hData_9->GetYaxis()->SetTitleFont(43);
   hData_9->GetZaxis()->SetLabelFont(43);
   hData_9->GetZaxis()->SetLabelSize(28);
   hData_9->GetZaxis()->SetTitleSize(28);
   hData_9->GetZaxis()->SetTitleFont(43);
   hData_9->Draw("same");
   
   TH1D *hData_9__4 = new TH1D("hData_9__4","hData_9",12,0,6);
   hData_9__4->SetBinContent(1,4.538431e-08);
   hData_9__4->SetBinContent(2,1.361474e-07);
   hData_9__4->SetBinContent(3,9.343305e-08);
   hData_9__4->SetBinContent(4,6.211883e-08);
   hData_9__4->SetBinContent(5,3.348202e-08);
   hData_9__4->SetBinContent(6,2.420446e-08);
   hData_9__4->SetBinContent(7,1.555745e-08);
   hData_9__4->SetBinContent(8,9.294492e-09);
   hData_9__4->SetBinContent(9,4.932583e-09);
   hData_9__4->SetBinContent(10,2.548175e-09);
   hData_9__4->SetBinContent(11,1.742678e-09);
   hData_9__4->SetBinContent(12,1.36354e-09);
   hData_9__4->SetBinContent(13,1.239803e-09);
   hData_9__4->SetBinError(1,1.975126e-09);
   hData_9__4->SetBinError(2,2.940255e-09);
   hData_9__4->SetBinError(3,2.741134e-09);
   hData_9__4->SetBinError(4,1.907133e-09);
   hData_9__4->SetBinError(5,1.304084e-09);
   hData_9__4->SetBinError(6,1.372616e-09);
   hData_9__4->SetBinError(7,1.026125e-09);
   hData_9__4->SetBinError(8,5.980221e-10);
   hData_9__4->SetBinError(9,4.175881e-10);
   hData_9__4->SetBinError(10,2.876298e-10);
   hData_9__4->SetBinError(11,2.569432e-10);
   hData_9__4->SetBinError(12,2.510206e-10);
   hData_9__4->SetBinError(13,2.110244e-10);
   hData_9__4->SetMinimum(2);
   hData_9__4->SetMaximum(6.807371e-06);
   hData_9__4->SetEntries(54724);
   hData_9__4->SetDirectory(0);
   hData_9__4->SetStats(0);

   ci = TColor::GetColor("#000099");
   hData_9__4->SetLineColor(ci);
   hData_9__4->SetMarkerStyle(8);
   hData_9__4->SetMarkerSize(1.5);
   hData_9__4->GetXaxis()->SetTitle("Secondary vertex mass (GeV/c^{2})");
   hData_9__4->GetXaxis()->CenterTitle(true);
   hData_9__4->GetXaxis()->SetLabelFont(43);
   hData_9__4->GetXaxis()->SetLabelSize(28);
   hData_9__4->GetXaxis()->SetTitleSize(28);
   hData_9__4->GetXaxis()->SetTitleOffset(1.3);
   hData_9__4->GetXaxis()->SetTitleFont(43);
   hData_9__4->GetYaxis()->SetTitle("Number of jets");
   hData_9__4->GetYaxis()->CenterTitle(true);
   hData_9__4->GetYaxis()->SetLabelFont(43);
   hData_9__4->GetYaxis()->SetLabelSize(28);
   hData_9__4->GetYaxis()->SetTitleSize(28);
   hData_9__4->GetYaxis()->SetTitleFont(43);
   hData_9__4->GetZaxis()->SetLabelFont(43);
   hData_9__4->GetZaxis()->SetLabelSize(28);
   hData_9__4->GetZaxis()->SetTitleSize(28);
   hData_9__4->GetZaxis()->SetTitleFont(43);
   hData_9__4->Draw("sameaxis");
   
   TLegend *leg = new TLegend(0.63,0.75,0.883,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("hData_9","pPb data","lp");

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hMCB_9","b","f");

   ci = TColor::GetColor("#cc3333");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hMCC_9","c","f");

   ci = TColor::GetColor("#33cc33");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hMCL_9","udsg","f");

   ci = TColor::GetColor("#3333cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.6,0.684,"170 < p_{T} < 250 GeV/c");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(23);
   tex->Draw();
      tex = new TLatex(0.17,0.965,"CMS");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(23);
   tex->Draw();
      tex = new TLatex(0.7,0.965,"#sqrt{s_{NN}} = 5.02 TeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(23);
   tex->Draw();
      tex = new TLatex(0.2,0.88,"-1.0<#eta<1.0");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(23);
   tex->Draw();
   can1_9->Modified();
   can1_9->cd();
   can1_9->SetSelected(can1_9);
}
