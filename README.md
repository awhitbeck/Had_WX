

## setting up code

### compile classes into static libraries

`g++ $(root-config --glibs --cflags --libs) -c RA2bNtuple.cc`

Note the `$()` executes a command before running g++, it will essentially generate an number of key flags you'll need to
properly build library or executable against your specific ROOT version.  
This will ultimately create a `.o` file.  This must be linked against any executable you create, e.g.:

`g++ $(root-config --glibs --cflags --libs) test_class.cc RA2bNtuple.o -o test_class`

This command produces an executable, which can be run with:

`./test_class`

Note, your executables must have code to be run inside a 'main' function whose return and inputs are:

`int main(int argc, char **argv)`

The input argumeents can be used to pass command line inputs to your program.  The first (`argc`) is the number of arguments
passed and the second is an array of arguments pass has arrays of `char`.

## Libraries

The code in this repo depends on some key classes.  The main class is the tree class that manages all of the
branches in the RA2b ntuples: `RA2bNtuple`.  If you make changes to this class, you should remake the static library
file that will be used by other classes and applications.  To build this static library run the following command:

`g++ $(root-config --glibs --cflags --libs) -c RA2bNtuple.cc`

There is also one base class that is used to build up selections for analysis work.  To build the static
library for this, run the following command:

`g++ $(root-config --glibs --cflags --libs) -c RA2bCut.cc`

## Cut Flow

This code depends on the tree class `RA2bNtuple.cc` and an abstract class `RA2bCut.cc`.  To implement cuts, you should
write a new class that derives from `RA2bCut` and implement the `bool ApplyCut()` method which is a pure virtuaal
method in the base class.  You should then initialize a list of pointers to `RA2bCut` derived objects in a vector.
Each event is checked against these cuts and a histogram is formed.

If you make changes to this code, be sure to recompile it by running the following command:

`g++ $(root-config --glibs --cflags --libs) cut_flow.cc RA2bNtuple.o RA2bCut.o -o cut_flow`

You can run with:

`./cut_flow`


# For comparing miniAOD and nanoAOD trees:

You will need to use the tree classes defined in `RA2bNtupleV20.h` and `NanoTree.h`.  Currently, these
do not need to be compiled into a library file, all code that uses these compiles everything all at
once.

A simple piece of code that can compare branches directly with no manipulation is `compare_nano_ra2bv20.C`.
This is a pretty fancy piece of code that relies on the `CompareVars` class defined in `CompareVars.cc`.
This code uses a pair of trees, one of type `RA2bNtupleV20` and one of type `NanoTree`, a pair of branch names,
one for each tree type, information for how to build a histogram (number of bins, start bin, and end bin),
and if your extracting information from a vector or array, the index you would like to extract. So, if you
wanted to compare the `BadChargedCandidateFilter` in each tree you would call the `CompareVar::CompareVar` with:
`CompareVars test_comparison(ra2b_t,nano_t,"BadChargedCandidateFilter","Flag_BadChargedCandidateFilter",2,0.5,1.5);`
If you would like to compare the leading pt electron eta:
`CompareVars test_comparison(ra2b_t,nano_t,"Electrons_fCoordinates_fEta","Electron_eta",20,-5.,5.,0);`

The script `compare_nano_ra2bv20.C` implements a number of comparison.  You can run this code with:
`root -l -n compare_nano_ra2bv20.C`

In case more detailed comparisons are necessary, e.g. if you have to first apply cuts, you can look at the code
in `ak8jets.C`.  In this code you first get the list of jets that pass pt and eta requirements, then only compare
jets that pass those requirements.  This is necessary for collections of objects that have different requirements
in the trees.