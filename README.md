# BelleAnalyzer

This is a Loop-based analyzer written for Belle Data Analysis. The main file is main.cxx, BelleAna.C and BelleAna.h contain the analyzer class and t1.C and t1.h stores the structure of the Belle analysis rootfile.
It loops through all the available TLeaves and stored them into TH1 according to their types. Additional analysis can be done by adding codes to the execute function which is called every event.

To run the analysis code, simply do

make

and run it with

./ana input.script

where input.script is filled with paths to the root files you want to analyze. Example here is the file exp55_XK.root stored in ../data/ folder.
