#include "RA2bNtuple.h"

class RA2bCut{

public :

  RA2bNtuple* tree;


  RA2bCut(RA2bNtuple* tree_=0);
  virtual bool ApplyCut()=0;

};
