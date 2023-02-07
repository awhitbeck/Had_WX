## Necessary files
To run the code you will need three different files, SUSY_Analysis.c, autumnclass.C, and autumnclass.H.
Put these files in the same directory.

## Changes to the code
You will need to change the file path on line 20 to the path for the root file you will be using. 
```c++
TString inFileName ="/file/path/to/root/file.root";
```
Also, on line 23 there is a command to get the TTree from the file,
```c++
TTree* tr = (TTree*) tf->Get("tree");
```
You will need to change the string inside the Get command to the name of TTree you will be using.

## Running the code
Once you have made the necessary changes and have the files in the same directory, open a terminal in that directory. 
In the terminal, you can run the code using the command.
```
root -l -n -q -b SUSY_Analysis.c
```
