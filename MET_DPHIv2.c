#include "TCanvas.h"
#include <iostream>
#include "TLorentzVector.h"
#include "TFile.h"
#include "TH1F.h"
#include "TTree.h"
#include "TString.h"
#include <vector>
#include "autumnclass.C"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#ifdef __MAKECINT__
#pragma link C++ class vector<TLorentzVector> +;
#pragma link C++ class vector<vector<short> >+;
#endif

using namespace std;

//File initialization
TString File1 ="/Users/jsewell/Documents/ROOT_documents/EW_SUSY/CN500_WH_sgino100_sget90_BB.root";
TString File2 ="/Users/jsewell/Documents/ROOT_documents/EW_SUSY/CN600_WH_sgino100_sget90_BB.root";
TString File3 ="/Users/jsewell/Documents/ROOT_documents/EW_SUSY/CN750_WH_sgino100_sget90_BB.root";
TString File4 ="/Users/jsewell/Documents/ROOT_documents/EW_SUSY/CN925_WH_sgino100_sget90_BB.root";

TFile* tf1 = new TFile(File1,"r");
TFile* tf2 = new TFile(File2,"r");
TFile* tf3 = new TFile(File3,"r");
TFile* tf4 = new TFile(File4,"r");

TTree* tr1 = (TTree*) tf1->Get("TreeMaker2/PreSelection");
TTree* tr2 = (TTree*) tf2->Get("TreeMaker2/PreSelection");
TTree* tr3 = (TTree*) tf3->Get("TreeMaker2/PreSelection");
TTree* tr4 = (TTree*) tf4->Get("TreeMaker2/PreSelection");

autumnclass c1(tr1);
autumnclass c2(tr2);
autumnclass c3(tr3);
autumnclass c4(tr4);

//Cut values & Weights
TLorentzVector MET4;
vector<double> AK4DPhi = {1.5,0.5,0.3,0.3};
vector<double> AK8DPhi = {1.5,0.5};

double WZBB5Weight = 2.05777E-06;
double WZBB6Weight = 4.53489e-07;
double WZBB7Weight = 3.04765e-07;
double WZBB9Weight = 5.57407e-08;

double WHBB5Weight = 1.01343e-06;
double WHBB6Weight = 4.45119e-07;
double WHBB7Weight = 1.52922e-07;
double WHBB9Weight = 5.14554e-08;

double HHBB5Weight = 9.85737e-07;
double HHBB6Weight = 4.36664e-07;
double HHBB7Weight = 1.43046e-07;
double HHBB9Weight = 4.72025e-08;

double WZGLGL5Weight = 1.03433e-06;
double WZGLGL6Weight = 5.25858e-07;
double WZGLGL7Weight = 1.53118e-07;
double WZGLGL9Weight = 5.65055e-08;

double WHGLGL5Weight = 1.02747e-06;
double WHGLGL6Weight = 4.45247e-07;
double WHGLGL7Weight = 1.53311e-07;
double WHGLGL9Weight = 5.18325e-08;

double HHGLGL5Weight = 1.11994e-06;
double HHGLGL6Weight = 4.35597e-07;
double HHGLGL7Weight = 1.43343e-07;
double HHGLGL9Weight = 4.67219e-08;

//Functions
void HistPlot4(TH1F* h1, TH1F* h2, TH1F* h3, TH1F* h4, TString title,  TString label1, TString label2, TString label3, TString label4, TString OutFile, bool log=true){

  TCanvas* can = new TCanvas("can","can",500,500);
  can->SetGrid();
  if(log){gPad->SetLogy();}
  
  gStyle->SetOptStat("neMi");
  
  double max1 = h1->GetMaximum();
  double max2 = h2->GetMaximum();
  double max3 = h3->GetMaximum();
  double max4 = h4->GetMaximum();
  double TrueMax = max({max1,max2,max3,max4});

  h1->SetMaximum(TrueMax + 1);
  h1->SetMinimum(0);
  
  h1->SetLineColor(kViolet+5);
  h1->SetLineWidth(2);

  h2->SetLineColor(kAzure+1);
  h2->SetLineWidth(2);

  h3->SetLineColor(kSpring+4);
  h3->SetLineWidth(2);

  h4->SetLineColor(kOrange-3);
  h4->SetLineWidth(2);

  h1->Draw("hist");
  h2->Draw("SAME hist");
  h3->Draw("SAME hist");
  h4->Draw("SAME hist");
  h1->GetYaxis()->SetTitle("NEvents");
  h1->GetXaxis()->SetTitle("Phi");
  h1->SetTitle(title);
  
  auto legend = new TLegend(0.45,0.8,0.75,0.9);
  legend->SetHeader("Files","C");
  legend->SetTextSize(0.025);
  legend->AddEntry(h1,label1,"l");
  legend->AddEntry(h2,label2,"l");
  legend->AddEntry(h3,label3,"l");
  legend->AddEntry(h4,label4,"l");
  legend->Draw();

  can->SaveAs(OutFile);

  delete can;
 }

bool AK4JetsCut(autumnclass obj){

  int c = 0;
  for(int i=0;i<obj.Jets->size();i++){
    if (obj.Jets->at(i).Pt()>30 && fabs(obj.Jets->at(i).Eta())<2.4){
      c++;
   }
     }
  return !(c<2 || c>6);

}
  
      
bool AK8JetsCut(autumnclass obj){

  int c = 0;
    for(int i=0;i<obj.JetsAK8->size();i++){
      if(obj.JetsAK8->at(i).Pt()>200 && fabs(obj.JetsAK8->at(i).Eta())<2 && obj.JetsAK8_softDropMass->at(i)>50){
	c++;
	      }
      else{continue;}
    }
  return (c>=1);
}

bool TwoAK8Jets(autumnclass obj){

  int c = 0;
    for(int i=0;i<obj.JetsAK8->size();i++){
      if(obj.JetsAK8->at(i).Pt()>200 && fabs(obj.JetsAK8->at(i).Eta())<2 && obj.JetsAK8_softDropMass->at(i)>0){
	c++;
	      }
     }
  return (c>=2);

}
  
bool HTPTCut(autumnclass obj){

  return (obj.HT>300 && obj.MET>200);

}

bool AK4DeltaPhiCut(autumnclass obj){

  for(int i=0;i<obj.Jets->size();i++){
      if(i==AK4DPhi.size()){break;}
      if(!(fabs(obj.Jets->at(i).DeltaPhi(MET4))>AK4DPhi.at(i))){
           return (false);
    }
  }
   return (true);

}

bool AK8DeltaPhiCut(autumnclass obj){

    for(int i=0;i<obj.JetsAK8->size();i++){
      if(i==AK8DPhi.size()){break;}
    if(!(fabs(obj.JetsAK8->at(i).DeltaPhi(MET4))>AK8DPhi.at(i))){
      return (false);
    }
  }
  return (true);
}

bool NVetos(autumnclass obj){

  return ( obj.NElectrons == 0 && obj.NMuons == 0 );

}

bool TrackVetos(autumnclass obj){

  return ( obj.isoElectronTracks == 0 && obj.isoMuonTracks == 0 && obj.isoPionTracks == 0 );
  
}

//WH SR-->WHTag(1,999,1,999)
//H SR-->WHTag(0,0,1,999)
//W SR-->WHTag(1,999,0,0)

bool WHTag(int MinWTag,int MaxWTag, int MinHTag, int MaxHTag,autumnclass obj){
  
double AK8PtThreshold=200.;
double AK8EtaThreshold=2.0;
double AK4PtThreshold=30.;
double AK4EtaThreshold=2.4;
double bbDiscThreshold=0.8365;
double WDiscThreshold=0.918;
double bDiscThreshold=0.4184;


std::vector<int> BtagIndices;

 
BtagIndices.clear();
 int HiggsTags = 0 ;
 int WbosonTags = 0 ;
 
for( int i = 0 ; i < obj.Jets->size(); i++){
  if( obj.Jets->at(i).Pt() > AK4PtThreshold &&
      fabs(obj.Jets->at(i).Eta()) < AK4EtaThreshold &&
      obj.Jets_bJetTagDeepCSVBvsAll->at(i) > bDiscThreshold ) BtagIndices.push_back(i);
}

if( BtagIndices.size() == 0 ) return false;


for( int i = 0 ; i < obj.JetsAK8->size() ; i++){

  bool HiggsCand=false;

  for( int b = 0 ; b < BtagIndices.size() ; b++){

    if( obj.JetsAK8->at(i).DeltaR(obj.Jets->at(BtagIndices[b])) < 0.8 ){
      HiggsCand=true;
      break;
    }// end if 
  }// end loop over bjets

if( HiggsCand ){

    HiggsTags+=int(obj.JetsAK8->at(i).Pt() > AK8PtThreshold &&
		   fabs(obj.JetsAK8->at(i).Eta()) < AK8EtaThreshold &&
		   obj.JetsAK8_DeepMassDecorrelTagbbvsLight->at(i) > bbDiscThreshold &&
		   obj.JetsAK8_softDropMass->at(i) > 75 &&
		   obj.JetsAK8_softDropMass->at(i) < 140 );
  }else{

    WbosonTags+=int(obj.JetsAK8->at(i).Pt() > AK8PtThreshold &&
		    fabs(obj.JetsAK8->at(i).Eta()) < AK8EtaThreshold &&
		    obj.JetsAK8_DeepTagWvsQCD->at(i) > WDiscThreshold &&
		    obj.JetsAK8_softDropMass->at(i) > 65 &&
		    obj.JetsAK8_softDropMass->at(i) < 105 );
  }// end if-else block to check for Higgs or W candidates

}// end loop over AK8 jets 

 return HiggsTags >= MinHTag && HiggsTags <= MaxHTag && WbosonTags >= MinWTag && WbosonTags <= MaxWTag ;
  }


TLorentzVector METAdd(autumnclass obj,int pdgid){
  TLorentzVector sum = {0,0,0,0};
   
     for(int pdg = 0;pdg<obj.GenParticles_PdgId->size();pdg++){

       if( abs(obj.GenParticles_PdgId->at(pdg)) == pdgid  ){
	 sum += obj.GenParticles->at(pdg);    
       }
     }
  return sum;
 }

void CutFlow(autumnclass obj, TTree* tree, double weight, int pdgid, TH1F* hist, TH1F* hist2, TH1F* hist3){
  for(int evt=0;evt<tree->GetEntries();evt++){
    obj.GetEntry(evt);

    TLorentzVector MET4 = {0,0,0,0};
    MET4.SetPtEtaPhiE(obj.MET,0,obj.METPhi,0);

    TLorentzVector METSum = METAdd(obj,pdgid);
    double DPHIMET = MET4.DeltaPhi(METSum);

    if(obj.Jets->size() == 0){ continue ; }
    
    if(obj.JetsAK8->size() == 0){ continue; }
      

    if( NVetos(obj) && TrackVetos(obj) && HTPTCut(obj) && AK4JetsCut(obj) && AK8JetsCut(obj) && AK4DeltaPhiCut(obj) && AK8DeltaPhiCut(obj) && TwoAK8Jets(obj) ){

      //WH SR
      if(WHTag(1,999,1,999,obj)){ hist->Fill(DPHIMET,137000*weight); }
      
      //H SR
      if(WHTag(0,0,1,999,obj)){ hist2->Fill(DPHIMET,137000*weight); }
      
      //W SR
      if(WHTag(1,999,0,0,obj)){ hist3->Fill(DPHIMET,137000*weight); }
      
       
      
     }//end if statement--------------------
    }//end for loop================================
}



void MET_DPHIv2(){

  //CN500
    TH1F* WH_MET5 = new TH1F("WH_MET5",";MET;Events",24,-M_PI,M_PI);
    TH1F*  W_MET5 = new TH1F("W_MET5",";MET;Events",24,-M_PI,M_PI);
    TH1F*  H_MET5 = new TH1F("H_MET5",";MET;Events",24,-M_PI,M_PI);
  //CN600
    TH1F* WH_MET6 = new TH1F("WH_MET6",";MET;Events",24,-M_PI,M_PI);
    TH1F*  W_MET6 = new TH1F("W_MET6",";MET;Events",24,-M_PI,M_PI);
    TH1F*  H_MET6 = new TH1F("H_MET6",";MET;Events",24,-M_PI,M_PI);
  //CN750
    TH1F* WH_MET7 = new TH1F("WH_MET7",";MET;Events",24,-M_PI,M_PI);
    TH1F*  W_MET7 = new TH1F("W_MET7",";MET;Events",24,-M_PI,M_PI);
    TH1F*  H_MET7 = new TH1F("H_MET7",";MET;Events",24,-M_PI,M_PI);
  //CN925
    TH1F* WH_MET9 = new TH1F("WH_MET9",";MET;Events",24,-M_PI,M_PI);
    TH1F*  W_MET9 = new TH1F("W_MET9",";MET;Events",24,-M_PI,M_PI);
    TH1F*  H_MET9 = new TH1F("H_MET9",";MET;Events",24,-M_PI,M_PI);

//CutFlow(autumnclass obj, TTree* tree, double weight, int pdgid, TH1F* hist, TH1F* hist2, TH1F* hist3) 
    CutFlow(c1, tr1, WHBB5Weight, 23, WH_MET5, W_MET5, H_MET5);
    CutFlow(c2, tr2, WHBB6Weight, 23, WH_MET6, W_MET6, H_MET6);
    CutFlow(c3, tr3, WHBB7Weight, 23, WH_MET7, W_MET7, H_MET7);
    CutFlow(c4, tr4, WHBB9Weight, 23, WH_MET9, W_MET9, H_MET9);


//HistPlot4(TH1F* h1, TH1F* h2, TH1F* h3, TH1F* h4, TString title,  TString label1, TString label2, TString label3, TString label4, TString OutFile, bool log=true

    HistPlot4(WH_MET5, WH_MET6, WH_MET7, WH_MET9, "WH SR ZDHI", "CN500WHBB", "CN600WHBB", "CN750WHBB", "CN925WHBB","WHBB_WH_ZDPHI.png",false);
    HistPlot4(W_MET5, W_MET6, W_MET7, W_MET9, "W SR ZDHI", "CN500WHBB", "CN600WHBB", "CN750WHBB", "CN925WHBB","WHBB_W_ZDPHI.png",false);
    HistPlot4(H_MET5, H_MET6, H_MET7, H_MET9, "H SR ZDHI", "CN500WHBB", "CN600WHBB", "CN750WHBB", "CN925WHBB","WHBB_H_ZDPHI.png",false);

    
}
