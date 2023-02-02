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

TString inFileName ="/Users/jsewell/Documents/ROOT_documents/EW_SUSY/Signal_1000_100_Autumn18Fast_TChiWH.root";
TFile* tf = new TFile(inFileName,"r");
TTree* tr = (TTree*) tf->Get("tree");
    autumnclass h(tr);

TLorentzVector MET4;
vector<double> AK4DPhi = {1.5,0.5,0.3,0.3};
vector<double> AK8DPhi = {1.5,0.5};


bool AK4JetsCut(){
  int c = 0;
  for(int i=0;i<h.Jets->size();i++){
    if (h.Jets->at(i).Pt()>30 && fabs(h.Jets->at(i).Eta())<2.4){
      c++;
    }
    
  }
  return !(c<2 || c>6);
  }
      
bool AK8JetsCut(){
  int c = 0;
    for(int i=0;i<h.JetsAK8->size();i++){
      if(h.JetsAK8->at(i).Pt()>200 && fabs(h.JetsAK8->at(i).Eta())<2 && h.JetsAK8_softDropMass->at(i)>50){
	c++;
	      }
     }
  return (c>=1);
}

bool TwoAK8Jets(){
  if(h.JetsAK8->size() >= 2){
    return (true);
  }
  return (false);
}
  
bool HTPTCut(){
  return (h.HT>300 && h.MET>200);
}

bool AK4DeltaPhiCut(){
  for(int i=0;i<h.Jets->size();i++){
      if(i==AK4DPhi.size()){break;}
        if(!(fabs(h.Jets->at(i).DeltaPhi(MET4))>AK4DPhi.at(i))){
           return (false);
    }
  }
   return (true);
}

bool AK8DeltaPhiCut(){
    for(int i=0;i<h.JetsAK8->size();i++){
      if(i==AK8DPhi.size()){break;}
    if(!(fabs(h.JetsAK8->at(i).DeltaPhi(MET4))>AK8DPhi.at(i))){
      return (false);
    }
  }
  return (true);
}

bool NVetos(){
  return ( h.NElectrons == 0 && h.NMuons == 0 );
}

bool TrackVetos(){
  return ( h.isoElectronTracks == 0 && h.isoMuonTracks == 0 && h.isoPionTracks == 0 );
}

//WH SR-->WHTag(1,999,1,999)
//H SR-->WHTag(0,0,1,999)
//W SR-->WHTag(1,999,0,0)

bool WHTag(int MinWTag,int MaxWTag, int MinHTag, int MaxHTag,int n = 0){

  if( n == 0 ){
  
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
 
for( int i = 0 ; i < h.Jets->size(); i++){
  if( h.Jets->at(i).Pt() > AK4PtThreshold &&
      fabs(h.Jets->at(i).Eta()) < AK4EtaThreshold &&
      h.Jets_bJetTagDeepCSVBvsAll->at(i) > bDiscThreshold ) BtagIndices.push_back(i);
}

if( BtagIndices.size() == 0 ) return false;


for( int i = 0 ; i < h.JetsAK8->size() ; i++){

  bool HiggsCand=false;

  for( int b = 0 ; b < BtagIndices.size() ; b++){

    if( h.JetsAK8->at(i).DeltaR(h.Jets->at(BtagIndices[b])) < 0.8 ){
      HiggsCand=true;
      break;
    }// end if 
  }// end loop over bjets

if( HiggsCand ){

    HiggsTags+=int(h.JetsAK8->at(i).Pt() > AK8PtThreshold &&
		   fabs(h.JetsAK8->at(i).Eta()) < AK8EtaThreshold &&
		   h.JetsAK8_DeepMassDecorrelTagbbvsLight->at(i) > bbDiscThreshold &&
		   h.JetsAK8_softDropMass->at(i) > 75 &&
		   h.JetsAK8_softDropMass->at(i) < 140 );
  }else{

    WbosonTags+=int(h.JetsAK8->at(i).Pt() > AK8PtThreshold &&
		    fabs(h.JetsAK8->at(i).Eta()) < AK8EtaThreshold &&
		    h.JetsAK8_DeepTagWvsQCD->at(i) > WDiscThreshold &&
		    h.JetsAK8_softDropMass->at(i) > 65 &&
		    h.JetsAK8_softDropMass->at(i) < 105 );
  }// end if-else block to check for Higgs or W candidates

}// end loop over AK8 jets 

 return HiggsTags >= MinHTag && HiggsTags <= MaxHTag && WbosonTags >= MinWTag && WbosonTags <= MaxWTag ;
  }

  else if( n == 1 ){return true;}
};

bool BVeto(int n = 0){

  if( n == 0 ){
double PtThreshold=30.;
double EtaThreshold=2.4;
double DiscThreshold=0.4184;
int MinBTag=0;
int MaxBtag=999;

int count = 0 ;
   for( int i = 0 ; i < h.Jets->size() ; i++){
     count+=int( h.Jets->at(i).Pt() > PtThreshold &&
		fabs( h.Jets->at(i).Eta()) < EtaThreshold &&
		h.Jets_bJetTagDeepCSVBvsAll->at(i) > DiscThreshold );
   }

   return count > MinBTag && count < MaxBtag;

 }



  else if( n == 1 ){return true;}

}



void SUSY_Analysis(){
 
   gStyle->SetOptStat(1111111);

    TCanvas* can = new TCanvas("can","can",500,500);
    double WHbins[9] = {200,250,300,350,400,450,500,600,900};
    double Wbins[10] = {200,250,300,350,400,450,500,600,800,1200};
    double Hbins[10] = {200,250,300,350,400,450,500,600,800,1200};
    TH1F WH_MET("WH_MET",";MET;Events",8,WHbins);
    TH1F W_MET("W_MET",";MET;Events",9,Wbins);
    TH1F H_MET("H_MET",";MET;Events",9,Hbins);


    
  // Read each event
    for(int evt=0;evt<tr->GetEntries();evt++){
    h.GetEntry(evt);

    MET4.SetPtEtaPhiE(h.MET,0,h.METPhi,0);
    
    if(h.Jets->size() == 0){
      continue;}
    
    if(h.JetsAK8->size() == 0){
      continue;}

    if( NVetos() && TrackVetos() && HTPTCut() && AK4JetsCut() && AK8JetsCut() && AK4DeltaPhiCut() && AK8DeltaPhiCut() && TwoAK8Jets()){

      //WH SR
      if(WHTag(1,999,1,999)){ WH_MET.Fill(h.MET,h.Weight*59.546381*1000.); }
      
      //H SR
      if(WHTag(0,0,1,999)){ H_MET.Fill(h.MET, h.Weight*59.546381*1000.);  }
      
      //W SR
      if(WHTag(1,999,0,0)){ W_MET.Fill(h.MET, h.Weight*59.546381*1000.);  }
      
       
      
   }//end if statement--------------------
    }//end for loop================================

  WH_MET.SetBinContent(8,WH_MET.GetBinContent(8) + WH_MET.GetBinContent(9) );
  H_MET.SetBinContent( 9,H_MET.GetBinContent(9 ) +  H_MET.GetBinContent(10));
  W_MET.SetBinContent( 9,W_MET.GetBinContent(9 ) +  W_MET.GetBinContent(10));

  WH_MET.SetLineColor(kViolet+5);
  WH_MET.SetLineWidth(2);
  H_MET.SetLineColor(kViolet+5);
  H_MET.SetLineWidth(2);
  W_MET.SetLineColor(kViolet+5);
  W_MET.SetLineWidth(2);

 
  WH_MET.Draw();
  can->SaveAs("WH_MET.png");
  
  H_MET.Draw();
  can->SaveAs("H_MET.png");

  W_MET.Draw();
  can->SaveAs("W_MET.png");
  
  delete can;
}




