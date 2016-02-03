here i will demonstrate how to perform interopability between VB script and C/C++ environment; 
YOU can check the appendix.doc in DPL folder for explanation of the demo codes demonstrating interaperability

:-STEPS TO FOLLOW
1) download the DPL.zip from github
2) Extract the DPL.zip onto your Desktop

NOTE BRIEFLY VERY IMPORTANT FOR "squareFunct.xlsb" file
3) now make the following changes
4)open the squareFunct.xlsb file...Then open Visual basic through developer tab..go edit both module squareC and squareCPP
5.)replace the HPUSER username of "C:\Users\HPUSER\Desktop\DPL\DLLfiles\square.dll" to your username of your PC
6.) do the same for squareCPP module "C:\Users\HPUSER\Desktop\DPL\DLLfiles\square.dll"; replace HPUSER with your username.
7.) Now you can go ahead and test the macros in squareFunct.xlsb which are C/C++ functions for providing fast run time execution.

IMPORTANT NOTES..............
*if it says to enable macro then do so
*the squareonWorksheet function in excel was written in the C environment 
*the squareonWorksheett function in excel was written in the C++ environment  

NOTE BRIEFLY VERY IMPORTANT FOR "arraysFunct.xlsb" file
8) now make the following changes
9)open the arraysFunct.xlsb file...Then open Visual basic through developer tab..go edit useArray module
10.)replace the HPUSER username of ""C:\Users\HPUSER\Desktop\DPL\DLLfiles\arrayDLL.dll" " to your username of your PC
11.) Now you can go ahead and test the macros in arraysFunct.xlsb which are C functions for providing fast run time execution. 


NOTE....................................................................................
The square folder contain project used to build square.DLL function file
The squareC++ folder contain project used to build squareC++.DLL function file
The "DLLfiles" folder contain the executable DLL files for square function written in C and C++.
The "square.dll" file was written in C
The "squareC++.dll" file was written in C++
Both DLL files were created when the function were build and compiled respectively
...........................................................................................


---EVENT HANDLERS---------------------------
WELCOME button-> just welcomes user
Higher button ->just increment the value in cell e3 by 1
Lower button ->just decrement the value in cell e3 by 1
Duplicate -> duplicate "Data" worksheet
Delete-> delete all sheets except "Data" worksheet

----------------------------------------------------------------------------------


