Hi,

So here is the pthat reweighting algorithm:

t->SetBranchAddress("pthat",&t_pthat);

weight = (xsecs[ibin]-xsecs[ibin+1])/pthatEntries[ibin];

where 

double xsecs[10] = {5.335E-01, 3.378E-02, 3.778E-03, 4.412E-04, 6.147E-05, 1.018E-05, 2.477E-06, 6.160E-07, 1.088E-07, 0}; //5.02 tev weights

and these cross-sections correspond to pthat: {15,30,50,80,120,170,220,280,370,9999};

So the idea is that you look at each event, figure out which pthat bin it corresponds to, then take the cross-section of that bin subtract it by the cross section of the next bin, then divide that remainder by the total number of events in that pthat bin over your whole fileset.

In your tree, include:

jtpt, jteta, jtphi, refpt, rawpt, discr_ssvHighEff, discr_ssvHighPur, svtxm, svtxmcorr, discr_prob, weight, pthat
