ssh -XY username@hep.rcac.purdue.edu

- First make a directory called "scratch"

 - scram project CMSSW CMSSW_5_3_20

- cd CMSSW_5_3_20/src

- "cmsenv"

 - scp my files from lxplus to your working area

Modify our existing macro to draw jets with pT > 200 && SSV (High Purity) > 2.5.  You can also find the "purity" of jets with this selection by saving the flavor information from MC - the flavor is saved in the variable "discr_flavorForB", where flavor == 5 means b-jet and flavor == 4 means c-jet.  Any other flavor is light jet.

So draw b-jet purity (as a function of pT) of jets with the selection above.

purity = Number of b-jets with selection / Number of total jets with selection.

Files are here: username@lxplus.cern.ch:/afs/cern.ch/user/k/kjung/public/forCheng
