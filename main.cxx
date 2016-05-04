#include <iostream>
#include <fstream>
#include "TString.h"
#include "BelleAna.h"
int main(int argc, char **argv)
{
  TChain *chain = new TChain("ubfit_tree");
  if(argc>1){
    ifstream fin(argv[1]);
    if(!fin.is_open()){
      cerr << "file open error:" << argv[1] << endl;
      exit(1);
    }
    TString fname;
    while(fin>>fname){
      chain->Add(fname);
    }
  }else{
    cerr << "no input file" << endl;
    exit(1);
  }
  BelleAna ana(chain);
  ana.Loop();
  return 0;
}
