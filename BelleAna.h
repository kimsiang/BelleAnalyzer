#ifndef BELLEANA_h
#define BELLEANA_h

#include "t1.h"
#include <stdio.h>
#include "TH1D.h"
#include "TLeaf.h"
#include "TBranch.h"
#include "TH1D.h"
#include "TH1I.h"
#include "TGraph.h"
#include <iostream>
#include <fstream>

class BelleAna : public t1 {
    public:
        BelleAna(TTree *tree=0):t1(tree){};
        ~BelleAna() {};
        virtual void Loop();
        void initialize(TTree *fChain);
        void execute();
        void tLeafToHist();
        void finalize();
        void clear();

    private:
        TFile *mFile_;
        int nEvent_;
        int nLeaves_; 
        int nLeavesI_; 
        int nLeavesD_; 

        TObjArray *leaves;
        TH1I *histI_[300];
        TH1D *histD_[400];


};
#endif
