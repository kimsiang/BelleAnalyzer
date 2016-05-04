//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed May  4 12:11:46 2016 by ROOT version 6.04/02
// from TTree ubfit_tree/ubfit_tree
// found on file: exp55_XK.root
//////////////////////////////////////////////////////////

#ifndef t1_h
#define t1_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <vector>
using namespace std;

// Header file for the classes stored in the TTree if any.

class t1 {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           evtno;
   Int_t           runno;
   Int_t           input0;
   Int_t           input1;
   Int_t           trgbit1;
   Int_t           trgbit2;
   Int_t           trgbit3;
   Int_t           flag0;
   Int_t           flag1;
   Int_t           flag2;
   Int_t           flag3;
   Int_t           flag4;
   Int_t           flag5;
   Int_t           flag6;
   Int_t           flag7;
   Int_t           flag8;
   Int_t           flag9;
   Int_t           numtrk;
   Int_t           numtrkp;
   Int_t           numtrkm;
   Int_t           numgtrk;
   Int_t           numgtrkp;
   Int_t           numgtrkm;
   Int_t           numgam;
   Int_t           numggam;
   Int_t           numbeamp2trk3gamfit;
   Int_t           dat_pippindf;
   Int_t           dat_pimpindf;
   Int_t           dat_isrgmatch;
   Int_t           dat_isrgquality;
   Int_t           dat_isrgnhits;
   Int_t           dat_gamgmatch;
   Int_t           dat_gamgquality;
   Int_t           dat_gamgnhits;
   Int_t           dat_gamlmatch;
   Int_t           dat_gamlquality;
   Int_t           dat_gamlnhits;
   Long64_t        index;
   Double_t        expno;
   Double_t        rec_bestchi2;
   Double_t        ecm;
   Double_t        dat_max1stggame_lab;
   Double_t        dat_max2ndggame_lab;
   Double_t        dat_max3rdggame_lab;
   Double_t        dat_hlpx;
   Double_t        dat_hlpy;
   Double_t        dat_hlpt;
   Double_t        dat_hlpz;
   Double_t        dat_hle;
   Double_t        dat_hlm;
   Double_t        dat_hltht;
   Double_t        dat_pippichisq;
   Double_t        dat_pippicl;
   Double_t        dat_pippioldhelix0;
   Double_t        dat_pippioldhelix3;
   Double_t        dat_pippx;
   Double_t        rec_pippx;
   Double_t        dat_pippy;
   Double_t        rec_pippy;
   Double_t        dat_pippt;
   Double_t        rec_pippt;
   Double_t        dat_pippz;
   Double_t        rec_pippz;
   Double_t        dat_pipp;
   Double_t        rec_pipp;
   Double_t        dat_pipe;
   Double_t        rec_pipe;
   Double_t        dat_piptht;
   Double_t        rec_piptht;
   Double_t        dat_pimpichisq;
   Double_t        dat_pimpicl;
   Double_t        dat_pimpioldhelix0;
   Double_t        dat_pimpioldhelix3;
   Double_t        dat_pimpx;
   Double_t        rec_pimpx;
   Double_t        dat_pimpy;
   Double_t        rec_pimpy;
   Double_t        dat_pimpt;
   Double_t        rec_pimpt;
   Double_t        dat_pimpz;
   Double_t        rec_pimpz;
   Double_t        dat_pimp;
   Double_t        rec_pimp;
   Double_t        dat_pime;
   Double_t        rec_pime;
   Double_t        dat_pimtht;
   Double_t        rec_pimtht;
   Double_t        dat_pipeid;
   Double_t        dat_pipmuid;
   Double_t        dat_pipmuchi2;
   Double_t        dat_pippie;
   Double_t        dat_pippimu;
   Double_t        dat_pippik;
   Double_t        dat_pippip;
   Double_t        dat_pimeid;
   Double_t        dat_pimmuid;
   Double_t        dat_pimmuchi2;
   Double_t        dat_pimpie;
   Double_t        dat_pimpimu;
   Double_t        dat_pimpik;
   Double_t        dat_pimpip;
   Double_t        dat_isrgenergy;
   Double_t        dat_isrgtheta;
   Double_t        dat_isrgftheta;
   Double_t        dat_isrge9oe25;
   Double_t        dat_isrgwidth;
   Double_t        dat_isrgpx;
   Double_t        rec_isrgpx;
   Double_t        dat_isrgpy;
   Double_t        rec_isrgpy;
   Double_t        dat_isrgpt;
   Double_t        rec_isrgpt;
   Double_t        dat_isrgpz;
   Double_t        rec_isrgpz;
   Double_t        dat_isrge;
   Double_t        rec_isrge;
   Double_t        dat_isrgtht;
   Double_t        rec_isrgtht;
   Double_t        dat_gamgenergy;
   Double_t        dat_gamgtheta;
   Double_t        dat_gamgftheta;
   Double_t        dat_gamge9oe25;
   Double_t        dat_gamgwidth;
   Double_t        dat_gamgpx;
   Double_t        rec_gamgpx;
   Double_t        dat_gamgpy;
   Double_t        rec_gamgpy;
   Double_t        dat_gamgpt;
   Double_t        rec_gamgpt;
   Double_t        dat_gamgpz;
   Double_t        rec_gamgpz;
   Double_t        dat_gamge;
   Double_t        rec_gamge;
   Double_t        dat_gamgtht;
   Double_t        rec_gamgtht;
   Double_t        dat_gamlenergy;
   Double_t        dat_gamltheta;
   Double_t        dat_gamlftheta;
   Double_t        dat_gamle9oe25;
   Double_t        dat_gamlwidth;
   Double_t        dat_gamlpx;
   Double_t        rec_gamlpx;
   Double_t        dat_gamlpy;
   Double_t        rec_gamlpy;
   Double_t        dat_gamlpt;
   Double_t        rec_gamlpt;
   Double_t        dat_gamlpz;
   Double_t        rec_gamlpz;
   Double_t        dat_gamle;
   Double_t        rec_gamle;
   Double_t        dat_gamltht;
   Double_t        rec_gamltht;
   Double_t        dat_pipoip;
   Double_t        dat_pimoip;
   Double_t        dat_pipoiz;
   Double_t        dat_pimoiz;
   Double_t        dat_pipoir;
   Double_t        dat_pimoir;
   Double_t        dat_pipnip;
   Double_t        dat_pimnip;
   Double_t        dat_pipniz;
   Double_t        dat_pimniz;
   Double_t        dat_pipnir;
   Double_t        dat_pimnir;
   Double_t        dat_pipdip;
   Double_t        dat_pimdip;
   Double_t        dat_pipdiz;
   Double_t        dat_pimdiz;
   Double_t        dat_pipdir;
   Double_t        dat_pimdir;
   Double_t        dat_2pie;
   Double_t        rec_2pie;
   Double_t        dat_2pim;
   Double_t        rec_2pim;
   Double_t        dat_2pitht;
   Double_t        rec_2pitht;
   Double_t        dat_pip2gamm;
   Double_t        rec_pip2gamm;
   Double_t        dat_pim2gamm;
   Double_t        rec_pim2gamm;
   Double_t        dat_hade;
   Double_t        rec_hade;
   Double_t        dat_hadm;
   Double_t        rec_hadm;
   Double_t        dat_hadtht;
   Double_t        rec_hadtht;
   Double_t        dat_2gampx;
   Double_t        rec_2gampx;
   Double_t        dat_2gampy;
   Double_t        rec_2gampy;
   Double_t        dat_2gampt;
   Double_t        rec_2gampt;
   Double_t        dat_2gampz;
   Double_t        rec_2gampz;
   Double_t        dat_2gamp;
   Double_t        rec_2gamp;
   Double_t        dat_2game;
   Double_t        rec_2game;
   Double_t        dat_2gamm;
   Double_t        rec_2gamm;
   Double_t        dat_2gamtht;
   Double_t        rec_2gamtht;
   Double_t        dat_allpx;
   Double_t        rec_allpx;
   Double_t        dat_allpy;
   Double_t        rec_allpy;
   Double_t        dat_allpt;
   Double_t        rec_allpt;
   Double_t        dat_allpz;
   Double_t        rec_allpz;
   Double_t        dat_allp;
   Double_t        rec_allp;
   Double_t        dat_alle;
   Double_t        rec_alle;
   Double_t        dat_allm;
   Double_t        rec_allm;
   Double_t        dat_alltht;
   Double_t        rec_alltht;
   Double_t        dat_2pioir;
   Double_t        dat_2pinir;
   Double_t        dat_pippimtht;
   Double_t        rec_pippimtht;
   Double_t        dat_gamggamltht;
   Double_t        rec_gamggamltht;
   Double_t        dat_pip2gamtht;
   Double_t        rec_pip2gamtht;
   Double_t        dat_pim2gamtht;
   Double_t        rec_pim2gamtht;
   Double_t        dat_isrghadtht;
   Double_t        rec_isrghadtht;
   Double_t        dat_isrgpiptht;
   Double_t        rec_isrgpiptht;
   Double_t        dat_isrgpimtht;
   Double_t        rec_isrgpimtht;
   Double_t        dat_isrg2gamtht;
   Double_t        rec_isrg2gamtht;

   // List of branches
   TBranch        *b_evtno;   //!
   TBranch        *b_runno;   //!
   TBranch        *b_input0;   //!
   TBranch        *b_input1;   //!
   TBranch        *b_trgbit1;   //!
   TBranch        *b_trgbit2;   //!
   TBranch        *b_trgbit3;   //!
   TBranch        *b_flag0;   //!
   TBranch        *b_flag1;   //!
   TBranch        *b_flag2;   //!
   TBranch        *b_flag3;   //!
   TBranch        *b_flag4;   //!
   TBranch        *b_flag5;   //!
   TBranch        *b_flag6;   //!
   TBranch        *b_flag7;   //!
   TBranch        *b_flag8;   //!
   TBranch        *b_flag9;   //!
   TBranch        *b_numtrk;   //!
   TBranch        *b_numtrkp;   //!
   TBranch        *b_numtrkm;   //!
   TBranch        *b_numgtrk;   //!
   TBranch        *b_numgtrkp;   //!
   TBranch        *b_numgtrkm;   //!
   TBranch        *b_numgam;   //!
   TBranch        *b_numggam;   //!
   TBranch        *b_numbeamp2trk3gamfit;   //!
   TBranch        *b_dat_pippindf;   //!
   TBranch        *b_dat_pimpindf;   //!
   TBranch        *b_dat_isrgmatch;   //!
   TBranch        *b_dat_isrgquality;   //!
   TBranch        *b_dat_isrgnhits;   //!
   TBranch        *b_dat_gamgmatch;   //!
   TBranch        *b_dat_gamgquality;   //!
   TBranch        *b_dat_gamgnhits;   //!
   TBranch        *b_dat_gamlmatch;   //!
   TBranch        *b_dat_gamlquality;   //!
   TBranch        *b_dat_gamlnhits;   //!
   TBranch        *b_index;   //!
   TBranch        *b_expno;   //!
   TBranch        *b_rec_bestchi2;   //!
   TBranch        *b_ecm;   //!
   TBranch        *b_dat_max1stggame_lab;   //!
   TBranch        *b_dat_max2ndggame_lab;   //!
   TBranch        *b_dat_max3rdggame_lab;   //!
   TBranch        *b_dat_hlpx;   //!
   TBranch        *b_dat_hlpy;   //!
   TBranch        *b_dat_hlpt;   //!
   TBranch        *b_dat_hlpz;   //!
   TBranch        *b_dat_hle;   //!
   TBranch        *b_dat_hlm;   //!
   TBranch        *b_dat_hltht;   //!
   TBranch        *b_dat_pippichisq;   //!
   TBranch        *b_dat_pippicl;   //!
   TBranch        *b_dat_pippioldhelix0;   //!
   TBranch        *b_dat_pippioldhelix3;   //!
   TBranch        *b_dat_pippx;   //!
   TBranch        *b_rec_pippx;   //!
   TBranch        *b_dat_pippy;   //!
   TBranch        *b_rec_pippy;   //!
   TBranch        *b_dat_pippt;   //!
   TBranch        *b_rec_pippt;   //!
   TBranch        *b_dat_pippz;   //!
   TBranch        *b_rec_pippz;   //!
   TBranch        *b_dat_pipp;   //!
   TBranch        *b_rec_pipp;   //!
   TBranch        *b_dat_pipe;   //!
   TBranch        *b_rec_pipe;   //!
   TBranch        *b_dat_piptht;   //!
   TBranch        *b_rec_piptht;   //!
   TBranch        *b_dat_pimpichisq;   //!
   TBranch        *b_dat_pimpicl;   //!
   TBranch        *b_dat_pimpioldhelix0;   //!
   TBranch        *b_dat_pimpioldhelix3;   //!
   TBranch        *b_dat_pimpx;   //!
   TBranch        *b_rec_pimpx;   //!
   TBranch        *b_dat_pimpy;   //!
   TBranch        *b_rec_pimpy;   //!
   TBranch        *b_dat_pimpt;   //!
   TBranch        *b_rec_pimpt;   //!
   TBranch        *b_dat_pimpz;   //!
   TBranch        *b_rec_pimpz;   //!
   TBranch        *b_dat_pimp;   //!
   TBranch        *b_rec_pimp;   //!
   TBranch        *b_dat_pime;   //!
   TBranch        *b_rec_pime;   //!
   TBranch        *b_dat_pimtht;   //!
   TBranch        *b_rec_pimtht;   //!
   TBranch        *b_dat_pipeid;   //!
   TBranch        *b_dat_pipmuid;   //!
   TBranch        *b_dat_pipmuchi2;   //!
   TBranch        *b_dat_pippie;   //!
   TBranch        *b_dat_pippimu;   //!
   TBranch        *b_dat_pippik;   //!
   TBranch        *b_dat_pippip;   //!
   TBranch        *b_dat_pimeid;   //!
   TBranch        *b_dat_pimmuid;   //!
   TBranch        *b_dat_pimmuchi2;   //!
   TBranch        *b_dat_pimpie;   //!
   TBranch        *b_dat_pimpimu;   //!
   TBranch        *b_dat_pimpik;   //!
   TBranch        *b_dat_pimpip;   //!
   TBranch        *b_dat_isrgenergy;   //!
   TBranch        *b_dat_isrgtheta;   //!
   TBranch        *b_dat_isrgftheta;   //!
   TBranch        *b_dat_isrge9oe25;   //!
   TBranch        *b_dat_isrgwidth;   //!
   TBranch        *b_dat_isrgpx;   //!
   TBranch        *b_rec_isrgpx;   //!
   TBranch        *b_dat_isrgpy;   //!
   TBranch        *b_rec_isrgpy;   //!
   TBranch        *b_dat_isrgpt;   //!
   TBranch        *b_rec_isrgpt;   //!
   TBranch        *b_dat_isrgpz;   //!
   TBranch        *b_rec_isrgpz;   //!
   TBranch        *b_dat_isrge;   //!
   TBranch        *b_rec_isrge;   //!
   TBranch        *b_dat_isrgtht;   //!
   TBranch        *b_rec_isrgtht;   //!
   TBranch        *b_dat_gamgenergy;   //!
   TBranch        *b_dat_gamgtheta;   //!
   TBranch        *b_dat_gamgftheta;   //!
   TBranch        *b_dat_gamge9oe25;   //!
   TBranch        *b_dat_gamgwidth;   //!
   TBranch        *b_dat_gamgpx;   //!
   TBranch        *b_rec_gamgpx;   //!
   TBranch        *b_dat_gamgpy;   //!
   TBranch        *b_rec_gamgpy;   //!
   TBranch        *b_dat_gamgpt;   //!
   TBranch        *b_rec_gamgpt;   //!
   TBranch        *b_dat_gamgpz;   //!
   TBranch        *b_rec_gamgpz;   //!
   TBranch        *b_dat_gamge;   //!
   TBranch        *b_rec_gamge;   //!
   TBranch        *b_dat_gamgtht;   //!
   TBranch        *b_rec_gamgtht;   //!
   TBranch        *b_dat_gamlenergy;   //!
   TBranch        *b_dat_gamltheta;   //!
   TBranch        *b_dat_gamlftheta;   //!
   TBranch        *b_dat_gamle9oe25;   //!
   TBranch        *b_dat_gamlwidth;   //!
   TBranch        *b_dat_gamlpx;   //!
   TBranch        *b_rec_gamlpx;   //!
   TBranch        *b_dat_gamlpy;   //!
   TBranch        *b_rec_gamlpy;   //!
   TBranch        *b_dat_gamlpt;   //!
   TBranch        *b_rec_gamlpt;   //!
   TBranch        *b_dat_gamlpz;   //!
   TBranch        *b_rec_gamlpz;   //!
   TBranch        *b_dat_gamle;   //!
   TBranch        *b_rec_gamle;   //!
   TBranch        *b_dat_gamltht;   //!
   TBranch        *b_rec_gamltht;   //!
   TBranch        *b_dat_pipoip;   //!
   TBranch        *b_dat_pimoip;   //!
   TBranch        *b_dat_pipoiz;   //!
   TBranch        *b_dat_pimoiz;   //!
   TBranch        *b_dat_pipoir;   //!
   TBranch        *b_dat_pimoir;   //!
   TBranch        *b_dat_pipnip;   //!
   TBranch        *b_dat_pimnip;   //!
   TBranch        *b_dat_pipniz;   //!
   TBranch        *b_dat_pimniz;   //!
   TBranch        *b_dat_pipnir;   //!
   TBranch        *b_dat_pimnir;   //!
   TBranch        *b_dat_pipdip;   //!
   TBranch        *b_dat_pimdip;   //!
   TBranch        *b_dat_pipdiz;   //!
   TBranch        *b_dat_pimdiz;   //!
   TBranch        *b_dat_pipdir;   //!
   TBranch        *b_dat_pimdir;   //!
   TBranch        *b_dat_2pie;   //!
   TBranch        *b_rec_2pie;   //!
   TBranch        *b_dat_2pim;   //!
   TBranch        *b_rec_2pim;   //!
   TBranch        *b_dat_2pitht;   //!
   TBranch        *b_rec_2pitht;   //!
   TBranch        *b_dat_pip2gamm;   //!
   TBranch        *b_rec_pip2gamm;   //!
   TBranch        *b_dat_pim2gamm;   //!
   TBranch        *b_rec_pim2gamm;   //!
   TBranch        *b_dat_hade;   //!
   TBranch        *b_rec_hade;   //!
   TBranch        *b_dat_hadm;   //!
   TBranch        *b_rec_hadm;   //!
   TBranch        *b_dat_hadtht;   //!
   TBranch        *b_rec_hadtht;   //!
   TBranch        *b_dat_2gampx;   //!
   TBranch        *b_rec_2gampx;   //!
   TBranch        *b_dat_2gampy;   //!
   TBranch        *b_rec_2gampy;   //!
   TBranch        *b_dat_2gampt;   //!
   TBranch        *b_rec_2gampt;   //!
   TBranch        *b_dat_2gampz;   //!
   TBranch        *b_rec_2gampz;   //!
   TBranch        *b_dat_2gamp;   //!
   TBranch        *b_rec_2gamp;   //!
   TBranch        *b_dat_2game;   //!
   TBranch        *b_rec_2game;   //!
   TBranch        *b_dat_2gamm;   //!
   TBranch        *b_rec_2gamm;   //!
   TBranch        *b_dat_2gamtht;   //!
   TBranch        *b_rec_2gamtht;   //!
   TBranch        *b_dat_allpx;   //!
   TBranch        *b_rec_allpx;   //!
   TBranch        *b_dat_allpy;   //!
   TBranch        *b_rec_allpy;   //!
   TBranch        *b_dat_allpt;   //!
   TBranch        *b_rec_allpt;   //!
   TBranch        *b_dat_allpz;   //!
   TBranch        *b_rec_allpz;   //!
   TBranch        *b_dat_allp;   //!
   TBranch        *b_rec_allp;   //!
   TBranch        *b_dat_alle;   //!
   TBranch        *b_rec_alle;   //!
   TBranch        *b_dat_allm;   //!
   TBranch        *b_rec_allm;   //!
   TBranch        *b_dat_alltht;   //!
   TBranch        *b_rec_alltht;   //!
   TBranch        *b_dat_2pioir;   //!
   TBranch        *b_dat_2pinir;   //!
   TBranch        *b_dat_pippimtht;   //!
   TBranch        *b_rec_pippimtht;   //!
   TBranch        *b_dat_gamggamltht;   //!
   TBranch        *b_rec_gamggamltht;   //!
   TBranch        *b_dat_pip2gamtht;   //!
   TBranch        *b_rec_pip2gamtht;   //!
   TBranch        *b_dat_pim2gamtht;   //!
   TBranch        *b_rec_pim2gamtht;   //!
   TBranch        *b_dat_isrghadtht;   //!
   TBranch        *b_rec_isrghadtht;   //!
   TBranch        *b_dat_isrgpiptht;   //!
   TBranch        *b_rec_isrgpiptht;   //!
   TBranch        *b_dat_isrgpimtht;   //!
   TBranch        *b_rec_isrgpimtht;   //!
   TBranch        *b_dat_isrg2gamtht;   //!
   TBranch        *b_rec_isrg2gamtht;   //!

   t1(TTree *tree=0);
   virtual ~t1();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef t1_cxx
t1::t1(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("exp55_XK.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("exp55_XK.root");
      }
      f->GetObject("ubfit_tree",tree);

   }
   Init(tree);
}

t1::~t1()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t t1::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t t1::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void t1::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("evtno", &evtno, &b_evtno);
   fChain->SetBranchAddress("runno", &runno, &b_runno);
   fChain->SetBranchAddress("input0", &input0, &b_input0);
   fChain->SetBranchAddress("input1", &input1, &b_input1);
   fChain->SetBranchAddress("trgbit1", &trgbit1, &b_trgbit1);
   fChain->SetBranchAddress("trgbit2", &trgbit2, &b_trgbit2);
   fChain->SetBranchAddress("trgbit3", &trgbit3, &b_trgbit3);
   fChain->SetBranchAddress("flag0", &flag0, &b_flag0);
   fChain->SetBranchAddress("flag1", &flag1, &b_flag1);
   fChain->SetBranchAddress("flag2", &flag2, &b_flag2);
   fChain->SetBranchAddress("flag3", &flag3, &b_flag3);
   fChain->SetBranchAddress("flag4", &flag4, &b_flag4);
   fChain->SetBranchAddress("flag5", &flag5, &b_flag5);
   fChain->SetBranchAddress("flag6", &flag6, &b_flag6);
   fChain->SetBranchAddress("flag7", &flag7, &b_flag7);
   fChain->SetBranchAddress("flag8", &flag8, &b_flag8);
   fChain->SetBranchAddress("flag9", &flag9, &b_flag9);
   fChain->SetBranchAddress("numtrk", &numtrk, &b_numtrk);
   fChain->SetBranchAddress("numtrkp", &numtrkp, &b_numtrkp);
   fChain->SetBranchAddress("numtrkm", &numtrkm, &b_numtrkm);
   fChain->SetBranchAddress("numgtrk", &numgtrk, &b_numgtrk);
   fChain->SetBranchAddress("numgtrkp", &numgtrkp, &b_numgtrkp);
   fChain->SetBranchAddress("numgtrkm", &numgtrkm, &b_numgtrkm);
   fChain->SetBranchAddress("numgam", &numgam, &b_numgam);
   fChain->SetBranchAddress("numggam", &numggam, &b_numggam);
   fChain->SetBranchAddress("numbeamp2trk3gamfit", &numbeamp2trk3gamfit, &b_numbeamp2trk3gamfit);
   fChain->SetBranchAddress("dat_pippindf", &dat_pippindf, &b_dat_pippindf);
   fChain->SetBranchAddress("dat_pimpindf", &dat_pimpindf, &b_dat_pimpindf);
   fChain->SetBranchAddress("dat_isrgmatch", &dat_isrgmatch, &b_dat_isrgmatch);
   fChain->SetBranchAddress("dat_isrgquality", &dat_isrgquality, &b_dat_isrgquality);
   fChain->SetBranchAddress("dat_isrgnhits", &dat_isrgnhits, &b_dat_isrgnhits);
   fChain->SetBranchAddress("dat_gamgmatch", &dat_gamgmatch, &b_dat_gamgmatch);
   fChain->SetBranchAddress("dat_gamgquality", &dat_gamgquality, &b_dat_gamgquality);
   fChain->SetBranchAddress("dat_gamgnhits", &dat_gamgnhits, &b_dat_gamgnhits);
   fChain->SetBranchAddress("dat_gamlmatch", &dat_gamlmatch, &b_dat_gamlmatch);
   fChain->SetBranchAddress("dat_gamlquality", &dat_gamlquality, &b_dat_gamlquality);
   fChain->SetBranchAddress("dat_gamlnhits", &dat_gamlnhits, &b_dat_gamlnhits);
   fChain->SetBranchAddress("index", &index, &b_index);
   fChain->SetBranchAddress("expno", &expno, &b_expno);
   fChain->SetBranchAddress("rec_bestchi2", &rec_bestchi2, &b_rec_bestchi2);
   fChain->SetBranchAddress("ecm", &ecm, &b_ecm);
   fChain->SetBranchAddress("dat_max1stggame_lab", &dat_max1stggame_lab, &b_dat_max1stggame_lab);
   fChain->SetBranchAddress("dat_max2ndggame_lab", &dat_max2ndggame_lab, &b_dat_max2ndggame_lab);
   fChain->SetBranchAddress("dat_max3rdggame_lab", &dat_max3rdggame_lab, &b_dat_max3rdggame_lab);
   fChain->SetBranchAddress("dat_hlpx", &dat_hlpx, &b_dat_hlpx);
   fChain->SetBranchAddress("dat_hlpy", &dat_hlpy, &b_dat_hlpy);
   fChain->SetBranchAddress("dat_hlpt", &dat_hlpt, &b_dat_hlpt);
   fChain->SetBranchAddress("dat_hlpz", &dat_hlpz, &b_dat_hlpz);
   fChain->SetBranchAddress("dat_hle", &dat_hle, &b_dat_hle);
   fChain->SetBranchAddress("dat_hlm", &dat_hlm, &b_dat_hlm);
   fChain->SetBranchAddress("dat_hltht", &dat_hltht, &b_dat_hltht);
   fChain->SetBranchAddress("dat_pippichisq", &dat_pippichisq, &b_dat_pippichisq);
   fChain->SetBranchAddress("dat_pippicl", &dat_pippicl, &b_dat_pippicl);
   fChain->SetBranchAddress("dat_pippioldhelix0", &dat_pippioldhelix0, &b_dat_pippioldhelix0);
   fChain->SetBranchAddress("dat_pippioldhelix3", &dat_pippioldhelix3, &b_dat_pippioldhelix3);
   fChain->SetBranchAddress("dat_pippx", &dat_pippx, &b_dat_pippx);
   fChain->SetBranchAddress("rec_pippx", &rec_pippx, &b_rec_pippx);
   fChain->SetBranchAddress("dat_pippy", &dat_pippy, &b_dat_pippy);
   fChain->SetBranchAddress("rec_pippy", &rec_pippy, &b_rec_pippy);
   fChain->SetBranchAddress("dat_pippt", &dat_pippt, &b_dat_pippt);
   fChain->SetBranchAddress("rec_pippt", &rec_pippt, &b_rec_pippt);
   fChain->SetBranchAddress("dat_pippz", &dat_pippz, &b_dat_pippz);
   fChain->SetBranchAddress("rec_pippz", &rec_pippz, &b_rec_pippz);
   fChain->SetBranchAddress("dat_pipp", &dat_pipp, &b_dat_pipp);
   fChain->SetBranchAddress("rec_pipp", &rec_pipp, &b_rec_pipp);
   fChain->SetBranchAddress("dat_pipe", &dat_pipe, &b_dat_pipe);
   fChain->SetBranchAddress("rec_pipe", &rec_pipe, &b_rec_pipe);
   fChain->SetBranchAddress("dat_piptht", &dat_piptht, &b_dat_piptht);
   fChain->SetBranchAddress("rec_piptht", &rec_piptht, &b_rec_piptht);
   fChain->SetBranchAddress("dat_pimpichisq", &dat_pimpichisq, &b_dat_pimpichisq);
   fChain->SetBranchAddress("dat_pimpicl", &dat_pimpicl, &b_dat_pimpicl);
   fChain->SetBranchAddress("dat_pimpioldhelix0", &dat_pimpioldhelix0, &b_dat_pimpioldhelix0);
   fChain->SetBranchAddress("dat_pimpioldhelix3", &dat_pimpioldhelix3, &b_dat_pimpioldhelix3);
   fChain->SetBranchAddress("dat_pimpx", &dat_pimpx, &b_dat_pimpx);
   fChain->SetBranchAddress("rec_pimpx", &rec_pimpx, &b_rec_pimpx);
   fChain->SetBranchAddress("dat_pimpy", &dat_pimpy, &b_dat_pimpy);
   fChain->SetBranchAddress("rec_pimpy", &rec_pimpy, &b_rec_pimpy);
   fChain->SetBranchAddress("dat_pimpt", &dat_pimpt, &b_dat_pimpt);
   fChain->SetBranchAddress("rec_pimpt", &rec_pimpt, &b_rec_pimpt);
   fChain->SetBranchAddress("dat_pimpz", &dat_pimpz, &b_dat_pimpz);
   fChain->SetBranchAddress("rec_pimpz", &rec_pimpz, &b_rec_pimpz);
   fChain->SetBranchAddress("dat_pimp", &dat_pimp, &b_dat_pimp);
   fChain->SetBranchAddress("rec_pimp", &rec_pimp, &b_rec_pimp);
   fChain->SetBranchAddress("dat_pime", &dat_pime, &b_dat_pime);
   fChain->SetBranchAddress("rec_pime", &rec_pime, &b_rec_pime);
   fChain->SetBranchAddress("dat_pimtht", &dat_pimtht, &b_dat_pimtht);
   fChain->SetBranchAddress("rec_pimtht", &rec_pimtht, &b_rec_pimtht);
   fChain->SetBranchAddress("dat_pipeid", &dat_pipeid, &b_dat_pipeid);
   fChain->SetBranchAddress("dat_pipmuid", &dat_pipmuid, &b_dat_pipmuid);
   fChain->SetBranchAddress("dat_pipmuchi2", &dat_pipmuchi2, &b_dat_pipmuchi2);
   fChain->SetBranchAddress("dat_pippie", &dat_pippie, &b_dat_pippie);
   fChain->SetBranchAddress("dat_pippimu", &dat_pippimu, &b_dat_pippimu);
   fChain->SetBranchAddress("dat_pippik", &dat_pippik, &b_dat_pippik);
   fChain->SetBranchAddress("dat_pippip", &dat_pippip, &b_dat_pippip);
   fChain->SetBranchAddress("dat_pimeid", &dat_pimeid, &b_dat_pimeid);
   fChain->SetBranchAddress("dat_pimmuid", &dat_pimmuid, &b_dat_pimmuid);
   fChain->SetBranchAddress("dat_pimmuchi2", &dat_pimmuchi2, &b_dat_pimmuchi2);
   fChain->SetBranchAddress("dat_pimpie", &dat_pimpie, &b_dat_pimpie);
   fChain->SetBranchAddress("dat_pimpimu", &dat_pimpimu, &b_dat_pimpimu);
   fChain->SetBranchAddress("dat_pimpik", &dat_pimpik, &b_dat_pimpik);
   fChain->SetBranchAddress("dat_pimpip", &dat_pimpip, &b_dat_pimpip);
   fChain->SetBranchAddress("dat_isrgenergy", &dat_isrgenergy, &b_dat_isrgenergy);
   fChain->SetBranchAddress("dat_isrgtheta", &dat_isrgtheta, &b_dat_isrgtheta);
   fChain->SetBranchAddress("dat_isrgftheta", &dat_isrgftheta, &b_dat_isrgftheta);
   fChain->SetBranchAddress("dat_isrge9oe25", &dat_isrge9oe25, &b_dat_isrge9oe25);
   fChain->SetBranchAddress("dat_isrgwidth", &dat_isrgwidth, &b_dat_isrgwidth);
   fChain->SetBranchAddress("dat_isrgpx", &dat_isrgpx, &b_dat_isrgpx);
   fChain->SetBranchAddress("rec_isrgpx", &rec_isrgpx, &b_rec_isrgpx);
   fChain->SetBranchAddress("dat_isrgpy", &dat_isrgpy, &b_dat_isrgpy);
   fChain->SetBranchAddress("rec_isrgpy", &rec_isrgpy, &b_rec_isrgpy);
   fChain->SetBranchAddress("dat_isrgpt", &dat_isrgpt, &b_dat_isrgpt);
   fChain->SetBranchAddress("rec_isrgpt", &rec_isrgpt, &b_rec_isrgpt);
   fChain->SetBranchAddress("dat_isrgpz", &dat_isrgpz, &b_dat_isrgpz);
   fChain->SetBranchAddress("rec_isrgpz", &rec_isrgpz, &b_rec_isrgpz);
   fChain->SetBranchAddress("dat_isrge", &dat_isrge, &b_dat_isrge);
   fChain->SetBranchAddress("rec_isrge", &rec_isrge, &b_rec_isrge);
   fChain->SetBranchAddress("dat_isrgtht", &dat_isrgtht, &b_dat_isrgtht);
   fChain->SetBranchAddress("rec_isrgtht", &rec_isrgtht, &b_rec_isrgtht);
   fChain->SetBranchAddress("dat_gamgenergy", &dat_gamgenergy, &b_dat_gamgenergy);
   fChain->SetBranchAddress("dat_gamgtheta", &dat_gamgtheta, &b_dat_gamgtheta);
   fChain->SetBranchAddress("dat_gamgftheta", &dat_gamgftheta, &b_dat_gamgftheta);
   fChain->SetBranchAddress("dat_gamge9oe25", &dat_gamge9oe25, &b_dat_gamge9oe25);
   fChain->SetBranchAddress("dat_gamgwidth", &dat_gamgwidth, &b_dat_gamgwidth);
   fChain->SetBranchAddress("dat_gamgpx", &dat_gamgpx, &b_dat_gamgpx);
   fChain->SetBranchAddress("rec_gamgpx", &rec_gamgpx, &b_rec_gamgpx);
   fChain->SetBranchAddress("dat_gamgpy", &dat_gamgpy, &b_dat_gamgpy);
   fChain->SetBranchAddress("rec_gamgpy", &rec_gamgpy, &b_rec_gamgpy);
   fChain->SetBranchAddress("dat_gamgpt", &dat_gamgpt, &b_dat_gamgpt);
   fChain->SetBranchAddress("rec_gamgpt", &rec_gamgpt, &b_rec_gamgpt);
   fChain->SetBranchAddress("dat_gamgpz", &dat_gamgpz, &b_dat_gamgpz);
   fChain->SetBranchAddress("rec_gamgpz", &rec_gamgpz, &b_rec_gamgpz);
   fChain->SetBranchAddress("dat_gamge", &dat_gamge, &b_dat_gamge);
   fChain->SetBranchAddress("rec_gamge", &rec_gamge, &b_rec_gamge);
   fChain->SetBranchAddress("dat_gamgtht", &dat_gamgtht, &b_dat_gamgtht);
   fChain->SetBranchAddress("rec_gamgtht", &rec_gamgtht, &b_rec_gamgtht);
   fChain->SetBranchAddress("dat_gamlenergy", &dat_gamlenergy, &b_dat_gamlenergy);
   fChain->SetBranchAddress("dat_gamltheta", &dat_gamltheta, &b_dat_gamltheta);
   fChain->SetBranchAddress("dat_gamlftheta", &dat_gamlftheta, &b_dat_gamlftheta);
   fChain->SetBranchAddress("dat_gamle9oe25", &dat_gamle9oe25, &b_dat_gamle9oe25);
   fChain->SetBranchAddress("dat_gamlwidth", &dat_gamlwidth, &b_dat_gamlwidth);
   fChain->SetBranchAddress("dat_gamlpx", &dat_gamlpx, &b_dat_gamlpx);
   fChain->SetBranchAddress("rec_gamlpx", &rec_gamlpx, &b_rec_gamlpx);
   fChain->SetBranchAddress("dat_gamlpy", &dat_gamlpy, &b_dat_gamlpy);
   fChain->SetBranchAddress("rec_gamlpy", &rec_gamlpy, &b_rec_gamlpy);
   fChain->SetBranchAddress("dat_gamlpt", &dat_gamlpt, &b_dat_gamlpt);
   fChain->SetBranchAddress("rec_gamlpt", &rec_gamlpt, &b_rec_gamlpt);
   fChain->SetBranchAddress("dat_gamlpz", &dat_gamlpz, &b_dat_gamlpz);
   fChain->SetBranchAddress("rec_gamlpz", &rec_gamlpz, &b_rec_gamlpz);
   fChain->SetBranchAddress("dat_gamle", &dat_gamle, &b_dat_gamle);
   fChain->SetBranchAddress("rec_gamle", &rec_gamle, &b_rec_gamle);
   fChain->SetBranchAddress("dat_gamltht", &dat_gamltht, &b_dat_gamltht);
   fChain->SetBranchAddress("rec_gamltht", &rec_gamltht, &b_rec_gamltht);
   fChain->SetBranchAddress("dat_pipoip", &dat_pipoip, &b_dat_pipoip);
   fChain->SetBranchAddress("dat_pimoip", &dat_pimoip, &b_dat_pimoip);
   fChain->SetBranchAddress("dat_pipoiz", &dat_pipoiz, &b_dat_pipoiz);
   fChain->SetBranchAddress("dat_pimoiz", &dat_pimoiz, &b_dat_pimoiz);
   fChain->SetBranchAddress("dat_pipoir", &dat_pipoir, &b_dat_pipoir);
   fChain->SetBranchAddress("dat_pimoir", &dat_pimoir, &b_dat_pimoir);
   fChain->SetBranchAddress("dat_pipnip", &dat_pipnip, &b_dat_pipnip);
   fChain->SetBranchAddress("dat_pimnip", &dat_pimnip, &b_dat_pimnip);
   fChain->SetBranchAddress("dat_pipniz", &dat_pipniz, &b_dat_pipniz);
   fChain->SetBranchAddress("dat_pimniz", &dat_pimniz, &b_dat_pimniz);
   fChain->SetBranchAddress("dat_pipnir", &dat_pipnir, &b_dat_pipnir);
   fChain->SetBranchAddress("dat_pimnir", &dat_pimnir, &b_dat_pimnir);
   fChain->SetBranchAddress("dat_pipdip", &dat_pipdip, &b_dat_pipdip);
   fChain->SetBranchAddress("dat_pimdip", &dat_pimdip, &b_dat_pimdip);
   fChain->SetBranchAddress("dat_pipdiz", &dat_pipdiz, &b_dat_pipdiz);
   fChain->SetBranchAddress("dat_pimdiz", &dat_pimdiz, &b_dat_pimdiz);
   fChain->SetBranchAddress("dat_pipdir", &dat_pipdir, &b_dat_pipdir);
   fChain->SetBranchAddress("dat_pimdir", &dat_pimdir, &b_dat_pimdir);
   fChain->SetBranchAddress("dat_2pie", &dat_2pie, &b_dat_2pie);
   fChain->SetBranchAddress("rec_2pie", &rec_2pie, &b_rec_2pie);
   fChain->SetBranchAddress("dat_2pim", &dat_2pim, &b_dat_2pim);
   fChain->SetBranchAddress("rec_2pim", &rec_2pim, &b_rec_2pim);
   fChain->SetBranchAddress("dat_2pitht", &dat_2pitht, &b_dat_2pitht);
   fChain->SetBranchAddress("rec_2pitht", &rec_2pitht, &b_rec_2pitht);
   fChain->SetBranchAddress("dat_pip2gamm", &dat_pip2gamm, &b_dat_pip2gamm);
   fChain->SetBranchAddress("rec_pip2gamm", &rec_pip2gamm, &b_rec_pip2gamm);
   fChain->SetBranchAddress("dat_pim2gamm", &dat_pim2gamm, &b_dat_pim2gamm);
   fChain->SetBranchAddress("rec_pim2gamm", &rec_pim2gamm, &b_rec_pim2gamm);
   fChain->SetBranchAddress("dat_hade", &dat_hade, &b_dat_hade);
   fChain->SetBranchAddress("rec_hade", &rec_hade, &b_rec_hade);
   fChain->SetBranchAddress("dat_hadm", &dat_hadm, &b_dat_hadm);
   fChain->SetBranchAddress("rec_hadm", &rec_hadm, &b_rec_hadm);
   fChain->SetBranchAddress("dat_hadtht", &dat_hadtht, &b_dat_hadtht);
   fChain->SetBranchAddress("rec_hadtht", &rec_hadtht, &b_rec_hadtht);
   fChain->SetBranchAddress("dat_2gampx", &dat_2gampx, &b_dat_2gampx);
   fChain->SetBranchAddress("rec_2gampx", &rec_2gampx, &b_rec_2gampx);
   fChain->SetBranchAddress("dat_2gampy", &dat_2gampy, &b_dat_2gampy);
   fChain->SetBranchAddress("rec_2gampy", &rec_2gampy, &b_rec_2gampy);
   fChain->SetBranchAddress("dat_2gampt", &dat_2gampt, &b_dat_2gampt);
   fChain->SetBranchAddress("rec_2gampt", &rec_2gampt, &b_rec_2gampt);
   fChain->SetBranchAddress("dat_2gampz", &dat_2gampz, &b_dat_2gampz);
   fChain->SetBranchAddress("rec_2gampz", &rec_2gampz, &b_rec_2gampz);
   fChain->SetBranchAddress("dat_2gamp", &dat_2gamp, &b_dat_2gamp);
   fChain->SetBranchAddress("rec_2gamp", &rec_2gamp, &b_rec_2gamp);
   fChain->SetBranchAddress("dat_2game", &dat_2game, &b_dat_2game);
   fChain->SetBranchAddress("rec_2game", &rec_2game, &b_rec_2game);
   fChain->SetBranchAddress("dat_2gamm", &dat_2gamm, &b_dat_2gamm);
   fChain->SetBranchAddress("rec_2gamm", &rec_2gamm, &b_rec_2gamm);
   fChain->SetBranchAddress("dat_2gamtht", &dat_2gamtht, &b_dat_2gamtht);
   fChain->SetBranchAddress("rec_2gamtht", &rec_2gamtht, &b_rec_2gamtht);
   fChain->SetBranchAddress("dat_allpx", &dat_allpx, &b_dat_allpx);
   fChain->SetBranchAddress("rec_allpx", &rec_allpx, &b_rec_allpx);
   fChain->SetBranchAddress("dat_allpy", &dat_allpy, &b_dat_allpy);
   fChain->SetBranchAddress("rec_allpy", &rec_allpy, &b_rec_allpy);
   fChain->SetBranchAddress("dat_allpt", &dat_allpt, &b_dat_allpt);
   fChain->SetBranchAddress("rec_allpt", &rec_allpt, &b_rec_allpt);
   fChain->SetBranchAddress("dat_allpz", &dat_allpz, &b_dat_allpz);
   fChain->SetBranchAddress("rec_allpz", &rec_allpz, &b_rec_allpz);
   fChain->SetBranchAddress("dat_allp", &dat_allp, &b_dat_allp);
   fChain->SetBranchAddress("rec_allp", &rec_allp, &b_rec_allp);
   fChain->SetBranchAddress("dat_alle", &dat_alle, &b_dat_alle);
   fChain->SetBranchAddress("rec_alle", &rec_alle, &b_rec_alle);
   fChain->SetBranchAddress("dat_allm", &dat_allm, &b_dat_allm);
   fChain->SetBranchAddress("rec_allm", &rec_allm, &b_rec_allm);
   fChain->SetBranchAddress("dat_alltht", &dat_alltht, &b_dat_alltht);
   fChain->SetBranchAddress("rec_alltht", &rec_alltht, &b_rec_alltht);
   fChain->SetBranchAddress("dat_2pioir", &dat_2pioir, &b_dat_2pioir);
   fChain->SetBranchAddress("dat_2pinir", &dat_2pinir, &b_dat_2pinir);
   fChain->SetBranchAddress("dat_pippimtht", &dat_pippimtht, &b_dat_pippimtht);
   fChain->SetBranchAddress("rec_pippimtht", &rec_pippimtht, &b_rec_pippimtht);
   fChain->SetBranchAddress("dat_gamggamltht", &dat_gamggamltht, &b_dat_gamggamltht);
   fChain->SetBranchAddress("rec_gamggamltht", &rec_gamggamltht, &b_rec_gamggamltht);
   fChain->SetBranchAddress("dat_pip2gamtht", &dat_pip2gamtht, &b_dat_pip2gamtht);
   fChain->SetBranchAddress("rec_pip2gamtht", &rec_pip2gamtht, &b_rec_pip2gamtht);
   fChain->SetBranchAddress("dat_pim2gamtht", &dat_pim2gamtht, &b_dat_pim2gamtht);
   fChain->SetBranchAddress("rec_pim2gamtht", &rec_pim2gamtht, &b_rec_pim2gamtht);
   fChain->SetBranchAddress("dat_isrghadtht", &dat_isrghadtht, &b_dat_isrghadtht);
   fChain->SetBranchAddress("rec_isrghadtht", &rec_isrghadtht, &b_rec_isrghadtht);
   fChain->SetBranchAddress("dat_isrgpiptht", &dat_isrgpiptht, &b_dat_isrgpiptht);
   fChain->SetBranchAddress("rec_isrgpiptht", &rec_isrgpiptht, &b_rec_isrgpiptht);
   fChain->SetBranchAddress("dat_isrgpimtht", &dat_isrgpimtht, &b_dat_isrgpimtht);
   fChain->SetBranchAddress("rec_isrgpimtht", &rec_isrgpimtht, &b_rec_isrgpimtht);
   fChain->SetBranchAddress("dat_isrg2gamtht", &dat_isrg2gamtht, &b_dat_isrg2gamtht);
   fChain->SetBranchAddress("rec_isrg2gamtht", &rec_isrg2gamtht, &b_rec_isrg2gamtht);
   Notify();
}

Bool_t t1::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void t1::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t t1::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef t1_cxx
