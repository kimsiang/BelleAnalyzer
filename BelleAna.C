#include "BelleAna.h"
#include <iostream>
#include <stdio.h>
#include <string.h>

void BelleAna::Loop(){
    cout << "Loop()" << endl;

    initialize(fChain);

    if (fChain == 0) return;

    Long64_t nentries = fChain->GetEntriesFast();

    Int_t nbytes = 0, nb = 0;
    for (Long64_t jentry=0; jentry<nentries;jentry++) {
        Long64_t ientry = LoadTree(jentry);
        if (ientry < 0) break;
        nb = fChain->GetEntry(jentry);   nbytes += nb;
        clear();
        tLeafToHist();
        execute();

    }

    finalize();

}

void BelleAna::initialize(TTree *fChain){
    cout << "initialize()" << endl;


    // create a new root file
    mFile_ = new TFile ("test.root", "recreate");

    // get list of leaves
    leaves  = fChain->GetListOfLeaves();

    // get number of leaves
    nLeaves_ = leaves->GetSize();
    cout<<nLeaves_<<endl;

    // counting Int_t and Double_t type TLeaf 
    nLeavesI_=0;
    nLeavesD_=0;

    // get the all branch names and store them
    for (int i=0; i<nLeaves_;i++) {

        // go through each leaf
        TLeaf *leaf = (TLeaf*)leaves->UncheckedAt(i);

        // create array of TH1I
        if(strcmp(leaf->GetTypeName(), "Int_t") == 0) {
            histI_[nLeavesI_] = new TH1I(leaf->GetName(),leaf->GetName(),1000,0,0.01); 
            histI_[nLeavesI_]->SetCanExtend(kTRUE);
            nLeavesI_++;
        }

        // create array of TH1D
        if(strcmp(leaf->GetTypeName(), "Double_t") == 0 || strcmp(leaf->GetTypeName(), "Long64_t") == 0) {
            histD_[nLeavesD_] = new TH1D(leaf->GetName(),leaf->GetName(),1000,0,0.01); 
            histD_[nLeavesD_]->SetCanExtend(kTRUE);
            nLeavesD_++;
        }
    }

    // Initialize private event counter
    nEvent_ = 0;
}


void BelleAna::execute(){


    if (nEvent_%1000 == 0) { 
        cout<<"## "<<nEvent_<<" processed!"<<endl;
    }


    // increment private event counter
    ++nEvent_;
}

void BelleAna::finalize(){

    cout << "finalize()" << endl;
    mFile_->Write ();
    mFile_->Close ();

}

void BelleAna::clear(){
    //  cout << "clear()" << endl;
}

void BelleAna::tLeafToHist(){

    int iLeavesI=0;
    int iLeavesD=0;

    for (int i=0; i<nLeaves_;i++) {

        // go through each leaf
        TLeaf *leaf = (TLeaf*)leaves->UncheckedAt(i);

        if(strcmp(leaf->GetTypeName(), "Int_t") == 0) {
            histI_[iLeavesI]->Fill(leaf->GetValue(0)); 
            histI_[iLeavesI]->ExtendAxis(leaf->GetValue(0),histI_[iLeavesI]->GetXaxis()); 
            iLeavesI++;
        }

        if(strcmp(leaf->GetTypeName(), "Double_t") == 0 || strcmp(leaf->GetTypeName(), "Long64_t") == 0) {
            histD_[iLeavesD]->Fill(leaf->GetValue(0)); 
            histD_[iLeavesD]->ExtendAxis(leaf->GetValue(0),histI_[iLeavesI]->GetXaxis()); 
            iLeavesD++;
        }

    }
}
