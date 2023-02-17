

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