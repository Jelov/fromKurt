pratice for template fitting

start from reading kurt's bfractionVsJetPtPP @ bJetTools (Fork from githup
(https://github.com/kurtejung/bJetTools/blob/master/bfractionVsJetPtPP.C))

From Kurt: 
you can input your MC files on lines 198-200
and your data file on line 201
basically this code makes templates of MC distributions of flavor
as a function of jet probability and of secondary vertex mass
and then fits the data distributions to it
don't be too scared by the length - a lot of it is just plotting style :)
in any case, the heavy lifting is done on line 750
this is the RooFit way of fitting data to the templates


Temprory using MC for input to read the result

--
Code procedure:


--
Note:

