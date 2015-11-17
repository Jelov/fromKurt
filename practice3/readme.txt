
Task:

Kurt Jung: nice! See if you can get the b-jet fraction, efficiency, and purity from your tree
Kurt Jung: where efficiency = "tagging efficiency" = # b-jets that pass the SSV > 2.0 cut / # b-jet total
Kurt Jung: and purity = "tagging purity", which I think we've done before

Cheng-Chieh Peng: purity also for B-jet? , it means that I need to save "refparton_flavorForB" in my tree and read the flavor==5?

Kurt Jung: yes thats right - if you're feeling ambitious you can do c-jet too

Cheng-Chieh Peng: what is the definition for b-jet fraction, # of b-jets over # of all jets?

Kurt Jung: thats right - but instead of simply calculating it in simulation, do it the "data-driven way"
Kurt Jung: where you use the tagging purity and efficiency
Kurt Jung: bFraction = taggedFraction * purity / efficiency
Cheng-Chieh Peng: purity = Number of b-jets with selection / Number of total jets with selection.

------------------

cross check bFraction directly (#B/#Alljets)
and =(#tagAll)/(#jets)*(#tagB)/(#tagAlljets)*(#B)/(#tagB)
       taggedFraction *   purifty           *  1/tagefficiency


include the weight info when doing calculation.


---------------------------


readFile.C : read all MC files & stored needed information into myOutput.root

plot.C : read myOutput.root, calculate, fill histogram and plot.


--------------------------

result discuss

1.Pt dependece appears on all plots, especially for Purity and BFrac

2.Purity plot could compare with AN2014_019_v9.pdf,Figure 14 for Purity -
differece mainly due to binning ( checked by Kurt)

3.BFrac plot could compare with Fighre 25.The differece coming from on note,
they use refpt for MC, here the plot use jtpt instead of refpt. The detector
smearling effect tend to make a steep plot become flat, but with different
degree for different jets.  
Selfcheck refpt for MC plots->flatter, but binning is the central issuse. 


