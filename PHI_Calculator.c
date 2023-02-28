#include "TCanvas.h"
#include <iostream>
#include <cmath>
#include "TLorentzVector.h"
#include "TFile.h"
#include "TH1F.h"
#include "TTree.h"
#include "TString.h"
#include <vector>
//#include "autumnclass.C"
#include "WHBB.C"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#ifdef __MAKECINT__
#pragma link C++ class vector<TLorentzVector> +;
#pragma link C++ class vector<vector<short> >+;
#endif

using namespace std;

TString File1  ="/Users/jsewell/Documents/ROOT_documents/EW_SUSY/CN600_WH_sgino100_sget90_BB.root";
TFile* tf1 = new TFile(File1,"r");
TTree* tr1 = (TTree*) tf1->Get("TreeMaker2/PreSelection");
WHBB c1(tr1);


TLorentzVector MET4;
vector<double> AK4DPhi = {1.5,0.5,0.3,0.3};
vector<double> AK8DPhi = {1.5,0.5};


void HistPlot2(TH1F* h1, TH1F* h2, TString title,  TString label1, TString label2, TString OutFile, bool log=true){

  TCanvas* can = new TCanvas("can","can",500,500);
  can->SetGrid();
  if(log){gPad->SetLogy();}
  
  h1->SetLineColor(kViolet+5);
  h1->SetLineWidth(2);

  h2->SetLineColor(kAzure+1);
  h2->SetLineWidth(2);

  h1->Draw("hist");
  h2->Draw("SAME hist");
  h1->GetYaxis()->SetTitle("NEvents");
  h1->GetXaxis()->SetTitle("Phi");
  h1->SetTitle(title);
  
  auto legend = new TLegend(0.6,0.8,0.9,0.9);
  legend->SetHeader("Phi Functions","C");
  legend->SetTextSize(0.025);
  legend->AddEntry(h1,label1,"l");
  legend->AddEntry(h2,label2,"l");
  legend->Draw();
  
  can->SaveAs(OutFile);

  delete can;
 }


void HistPlot(TH1F* h1, TString title, TString OutFile, bool log=true){

  TCanvas* can = new TCanvas("can","can",500,500);
  can->SetGrid();
  if(log){gPad->SetLogy();}
  
  h1->SetLineColor(kViolet+5);
  h1->SetLineWidth(2);

  h1->Draw("hist");
  h1->GetYaxis()->SetTitle("NEvents");
  h1->GetXaxis()->SetTitle("METPhi-ManualPhi");
  h1->SetTitle(title);

  can->SaveAs(OutFile);

  delete can;
 }


bool AK4JetsCut(int x){
  if(x==1){
  int c = 0;
  for(int i=0;i<c1.Jets->size();i++){
    if (c1.Jets->at(i).Pt()>30 && fabs(c1.Jets->at(i).Eta())<2.4){
      c++;
   }
     }
  return !(c<2 || c>6);
    }
   if(x==2){
  int c = 0;
  for(int i=0;i<c1.Jets->size();i++){
    if (c1.Jets->at(i).Pt()>30 && fabs(c1.Jets->at(i).Eta())<2.4){
      c++;
   }
     }
  return !(c<2 || c>6);
    }
}
  
      
bool AK8JetsCut(int x){
  if(x==1){
  int c = 0;
    for(int i=0;i<c1.JetsAK8->size();i++){
      if(c1.JetsAK8->at(i).Pt()>200 && fabs(c1.JetsAK8->at(i).Eta())<2 && c1.JetsAK8_softDropMass->at(i)>50){
	c++;
	      }
     }
  return (c>=1);
  }
if(x==2){
  int c = 0;
    for(int i=0;i<c1.JetsAK8->size();i++){
      if(c1.JetsAK8->at(i).Pt()>200 && fabs(c1.JetsAK8->at(i).Eta())<2 && c1.JetsAK8_softDropMass->at(i)>50){
	c++;
	      }
     }
  return (c>=1);
  }
}

bool TwoAK8Jets(int x){
  if(x==1){
  int c = 0;
    for(int i=0;i<c1.JetsAK8->size();i++){
      if(c1.JetsAK8->at(i).Pt()>200 && fabs(c1.JetsAK8->at(i).Eta())<2 && c1.JetsAK8_softDropMass->at(i)>0){
	c++;
	      }
     }
  return (c>=2);
    }
  
  if(x==2){
  int c = 0;
    for(int i=0;i<c1.JetsAK8->size();i++){
      if(c1.JetsAK8->at(i).Pt()>200 && fabs(c1.JetsAK8->at(i).Eta())<2 && c1.JetsAK8_softDropMass->at(i)>0){
	c++;
	      }
     }
  return (c>=2);
    } 
}
  
bool HTPTCut(int x){
  if(x==1){
  return (c1.HT>300 && c1.MET>200);
    }
  if(x==2){
    return (c1.HT>300 && c1.MET>200);
    }
}

bool AK4DeltaPhiCut(int x){
  if(x==1){
  for(int i=0;i<c1.Jets->size();i++){
      if(i==AK4DPhi.size()){break;}
      if(!(fabs(c1.Jets->at(i).DeltaPhi(MET4))>AK4DPhi.at(i))){
           return (false);
    }
  }
   return (true);
  }
  if(x==2){
  for(int i=0;i<c1.Jets->size();i++){
      if(i==AK4DPhi.size()){break;}
      if(!(fabs(c1.Jets->at(i).DeltaPhi(MET4))>AK4DPhi.at(i))){
           return (false);
    }
  }
   return (true);
  }
}

bool AK8DeltaPhiCut(int x){
  if(x==1){
    for(int i=0;i<c1.JetsAK8->size();i++){
      if(i==AK8DPhi.size()){break;}
    if(!(fabs(c1.JetsAK8->at(i).DeltaPhi(MET4))>AK8DPhi.at(i))){
      return (false);
    }
  }
  return (true);
  }
  if(x==2){
    for(int i=0;i<c1.JetsAK8->size();i++){
      if(i==AK8DPhi.size()){break;}
    if(!(fabs(c1.JetsAK8->at(i).DeltaPhi(MET4))>AK8DPhi.at(i))){
      return (false);
    }
  }
  return (true);
  }
}

bool NVetos(int x){
  if(x==1){
  return ( c1.NElectrons == 0 && c1.NMuons == 0 );
  }
  if(x==2){
  return ( c1.NElectrons == 0 && c1.NMuons == 0 );
  }
}

bool TrackVetos(int x){
  if(x==1){
  return ( c1.isoElectronTracks == 0 && c1.isoMuonTracks == 0 && c1.isoPionTracks == 0 );
  }
  if(x==2){
  return ( c1.isoElectronTracks == 0 && c1.isoMuonTracks == 0 && c1.isoPionTracks == 0 );
  }
}

//WH SR-->WHTag(1,999,1,999)
//H SR-->WHTag(0,0,1,999)
//W SR-->WHTag(1,999,0,0)

bool WHTag(int MinWTag,int MaxWTag, int MinHTag, int MaxHTag,int x){

  if( x == 1 ){
  
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
 
for( int i = 0 ; i < c1.Jets->size(); i++){
  if( c1.Jets->at(i).Pt() > AK4PtThreshold &&
      fabs(c1.Jets->at(i).Eta()) < AK4EtaThreshold &&
      c1.Jets_bJetTagDeepCSVBvsAll->at(i) > bDiscThreshold ) BtagIndices.push_back(i);
}

if( BtagIndices.size() == 0 ) return false;


for( int i = 0 ; i < c1.JetsAK8->size() ; i++){

  bool HiggsCand=false;

  for( int b = 0 ; b < BtagIndices.size() ; b++){

    if( c1.JetsAK8->at(i).DeltaR(c1.Jets->at(BtagIndices[b])) < 0.8 ){
      HiggsCand=true;
      break;
    }// end if 
  }// end loop over bjets

if( HiggsCand ){

    HiggsTags+=int(c1.JetsAK8->at(i).Pt() > AK8PtThreshold &&
		   fabs(c1.JetsAK8->at(i).Eta()) < AK8EtaThreshold &&
		   c1.JetsAK8_DeepMassDecorrelTagbbvsLight->at(i) > bbDiscThreshold &&
		   c1.JetsAK8_softDropMass->at(i) > 75 &&
		   c1.JetsAK8_softDropMass->at(i) < 140 );
  }else{

    WbosonTags+=int(c1.JetsAK8->at(i).Pt() > AK8PtThreshold &&
		    fabs(c1.JetsAK8->at(i).Eta()) < AK8EtaThreshold &&
		    c1.JetsAK8_DeepTagWvsQCD->at(i) > WDiscThreshold &&
		    c1.JetsAK8_softDropMass->at(i) > 65 &&
		    c1.JetsAK8_softDropMass->at(i) < 105 );
  }// end if-else block to check for Higgs or W candidates

}// end loop over AK8 jets 

 return HiggsTags >= MinHTag && HiggsTags <= MaxHTag && WbosonTags >= MinWTag && WbosonTags <= MaxWTag ;
  }


  if( x == 2 ){
  
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
 
for( int i = 0 ; i < c1.Jets->size(); i++){
  if( c1.Jets->at(i).Pt() > AK4PtThreshold &&
      fabs(c1.Jets->at(i).Eta()) < AK4EtaThreshold &&
      c1.Jets_bJetTagDeepCSVBvsAll->at(i) > bDiscThreshold ) BtagIndices.push_back(i);
}

if( BtagIndices.size() == 0 ) return false;


for( int i = 0 ; i < c1.JetsAK8->size() ; i++){

  bool HiggsCand=false;

  for( int b = 0 ; b < BtagIndices.size() ; b++){

    if( c1.JetsAK8->at(i).DeltaR(c1.Jets->at(BtagIndices[b])) < 0.8 ){
      HiggsCand=true;
      break;
    }// end if 
  }// end loop over bjets

if( HiggsCand ){

    HiggsTags+=int(c1.JetsAK8->at(i).Pt() > AK8PtThreshold &&
		   fabs(c1.JetsAK8->at(i).Eta()) < AK8EtaThreshold &&
		   c1.JetsAK8_DeepMassDecorrelTagbbvsLight->at(i) > bbDiscThreshold &&
		   c1.JetsAK8_softDropMass->at(i) > 75 &&
		   c1.JetsAK8_softDropMass->at(i) < 140 );
  }else{

    WbosonTags+=int(c1.JetsAK8->at(i).Pt() > AK8PtThreshold &&
		    fabs(c1.JetsAK8->at(i).Eta()) < AK8EtaThreshold &&
		    c1.JetsAK8_DeepTagWvsQCD->at(i) > WDiscThreshold &&
		    c1.JetsAK8_softDropMass->at(i) > 65 &&
		    c1.JetsAK8_softDropMass->at(i) < 105 );
  }// end if-else block to check for Higgs or W candidates

}// end loop over AK8 jets 

 return HiggsTags >= MinHTag && HiggsTags <= MaxHTag && WbosonTags >= MinWTag && WbosonTags <= MaxWTag ;
  }
  
};


double PhiSum(){
  TLorentzVector sum = {0,0,0,0};
  int PDGID[5] = {12, 14, 16, 18, 39};
  
   for(int pdg = 0;pdg<c1.GenParticles_PdgId->size();pdg++){

     for( int i : PDGID ) {
       if( abs(c1.GenParticles_PdgId->at(pdg)) == i ){
       
        sum += c1.GenParticles->at(pdg);
       
       }
     }
         
       }

  return sum.Phi();
 }


void MET_Calculator(){

  TH1F*  SPHI = new TH1F("SPHI",";MET;Events",48,-M_PI,M_PI);
  TH1F*  FPHI = new TH1F("FPHI",";MET;Events",48,-M_PI,M_PI);
  TH1F*  DPHI = new TH1F("DPHI","title",36,0,M_PI+1);


//***********************************************
    for(int evt=0;evt<tr1->GetEntries();evt++){

    c1.GetEntry(evt);

    MET4.SetPtEtaPhiE(c1.MET,0,c1.METPhi,0);
    
    if(c1.GenParticles_PdgId->size()==0){ continue; }

    if(c1.Jets->size() == 0){ continue ; }
    
    if(c1.JetsAK8->size() == 0){ continue; }
      

    if( NVetos(1) && TrackVetos(1) && HTPTCut(1) && AK4JetsCut(1) && AK8JetsCut(1) && AK4DeltaPhiCut(1) && AK8DeltaPhiCut(1) && TwoAK8Jets(1) ){

      SPHI->Fill(PhiSum());
      FPHI->Fill(c1.METPhi);

      float g = fabs(c1.METPhi - PhiSum());
      if(g>M_PI){g = 2*M_PI - g;}
      DPHI->Fill(g);
	  
     }//end if statement--------------------
    }//end for loop================================

    HistPlot2(SPHI,FPHI,"Phi Comparison 600","Manual Sum","METPhi","PhiComparison600.png");
    HistPlot(DPHI,"Phi Difference 600","PhiDifference600.png");
    
}
  





  

