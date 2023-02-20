#include "TCanvas.h"
#include <iostream>
#include "TLorentzVector.h"
#include "TFile.h"
#include "TH1F.h"
#include "TTree.h"
#include "TString.h"
#include <vector>
#include "autumnclass.C"
#include "WZBB.C"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#ifdef __MAKECINT__
#pragma link C++ class vector<TLorentzVector> +;
#pragma link C++ class vector<vector<short> >+;
#endif

using namespace std;



TString File1  ="/Users/jsewell/Documents/ROOT_documents/EW_SUSY/Signal_1000_100_Autumn18Fast_TChiWH.root";
TFile* tf1 = new TFile(File1,"r");
TTree* tr1 = (TTree*) tf1->Get("tree");
autumnclass c1(tr1);

TString File2 ="/Users/jsewell/Documents/ROOT_documents/EW_SUSY/CN925_WZ_sgino100_sget90_BB.root";
TFile* tf2 = new TFile(File2,"r");
TTree* tr2 = (TTree*) tf2->Get("TreeMaker2/PreSelection");
WZBB c2(tr2);  

TLorentzVector MET4;
vector<double> AK4DPhi = {1.5,0.5,0.3,0.3};
vector<double> AK8DPhi = {1.5,0.5};

void HistPlot(TH1F* h1, TH1F* h2, TString title,  TString label1, TString label2, TString OutFile, bool log=true){

  TCanvas* can = new TCanvas("can","can",500,500);
  can->SetGrid();
  if(log){gPad->SetLogy();}
  
  h1->SetLineColor(kViolet+5);
  h1->SetLineWidth(2);

  h2->SetLineColor(kAzure+1);
  h2->SetLineWidth(2);

  h1->Draw("hist");
  h2->Draw("SAME hist");
  h1->GetXaxis()->SetTitle("MET");
  h1->GetYaxis()->SetTitle("NEvents");
  h1->SetTitle(title);
  
  auto legend = new TLegend(0.6,0.8,0.9,0.9);
  legend->SetHeader("Files","C");
  legend->SetTextSize(0.025);
  legend->AddEntry(h1,label1,"l");
  legend->AddEntry(h2,label2,"l");
  legend->Draw();
  
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
  for(int i=0;i<c2.Jets->size();i++){
    if (c2.Jets->at(i).Pt()>30 && fabs(c2.Jets->at(i).Eta())<2.4){
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
    for(int i=0;i<c2.JetsAK8->size();i++){
      if(c2.JetsAK8->at(i).Pt()>200 && fabs(c2.JetsAK8->at(i).Eta())<2 && c2.JetsAK8_softDropMass->at(i)>50){
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
    for(int i=0;i<c2.JetsAK8->size();i++){
      if(c2.JetsAK8->at(i).Pt()>200 && fabs(c2.JetsAK8->at(i).Eta())<2 && c2.JetsAK8_softDropMass->at(i)>0){
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
    return (c2.HT>300 && c2.MET>200);
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
  for(int i=0;i<c2.Jets->size();i++){
      if(i==AK4DPhi.size()){break;}
      if(!(fabs(c2.Jets->at(i).DeltaPhi(MET4))>AK4DPhi.at(i))){
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
    for(int i=0;i<c2.JetsAK8->size();i++){
      if(i==AK8DPhi.size()){break;}
    if(!(fabs(c2.JetsAK8->at(i).DeltaPhi(MET4))>AK8DPhi.at(i))){
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
  return ( c2.NElectrons == 0 && c2.NMuons == 0 );
  }
}

bool TrackVetos(int x){
  if(x==1){
  return ( c1.isoElectronTracks == 0 && c1.isoMuonTracks == 0 && c1.isoPionTracks == 0 );
  }
  if(x==2){
  return ( c2.isoElectronTracks == 0 && c2.isoMuonTracks == 0 && c2.isoPionTracks == 0 );
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
 
for( int i = 0 ; i < c2.Jets->size(); i++){
  if( c2.Jets->at(i).Pt() > AK4PtThreshold &&
      fabs(c2.Jets->at(i).Eta()) < AK4EtaThreshold &&
      c2.Jets_bJetTagDeepCSVBvsAll->at(i) > bDiscThreshold ) BtagIndices.push_back(i);
}

if( BtagIndices.size() == 0 ) return false;


for( int i = 0 ; i < c2.JetsAK8->size() ; i++){

  bool HiggsCand=false;

  for( int b = 0 ; b < BtagIndices.size() ; b++){

    if( c2.JetsAK8->at(i).DeltaR(c2.Jets->at(BtagIndices[b])) < 0.8 ){
      HiggsCand=true;
      break;
    }// end if 
  }// end loop over bjets

if( HiggsCand ){

    HiggsTags+=int(c2.JetsAK8->at(i).Pt() > AK8PtThreshold &&
		   fabs(c2.JetsAK8->at(i).Eta()) < AK8EtaThreshold &&
		   c2.JetsAK8_DeepMassDecorrelTagbbvsLight->at(i) > bbDiscThreshold &&
		   c2.JetsAK8_softDropMass->at(i) > 75 &&
		   c2.JetsAK8_softDropMass->at(i) < 140 );
  }else{

    WbosonTags+=int(c2.JetsAK8->at(i).Pt() > AK8PtThreshold &&
		    fabs(c2.JetsAK8->at(i).Eta()) < AK8EtaThreshold &&
		    c2.JetsAK8_DeepTagWvsQCD->at(i) > WDiscThreshold &&
		    c2.JetsAK8_softDropMass->at(i) > 65 &&
		    c2.JetsAK8_softDropMass->at(i) < 105 );
  }// end if-else block to check for Higgs or W candidates

}// end loop over AK8 jets 

 return HiggsTags >= MinHTag && HiggsTags <= MaxHTag && WbosonTags >= MinWTag && WbosonTags <= MaxWTag ;
  }
  
};


void MET_Comparison2(){


    double WHbins[9] = {200,250,300,350,400,450,500,600,900};
    double Wbins[10] = {200,250,300,350,400,450,500,600,800,1200};
    double Hbins[10] = {200,250,300,350,400,450,500,600,800,1200};
    TH1F* WH_MET = new TH1F("WH_MET",";MET;Events",8,WHbins);
    TH1F*  W_MET = new TH1F("W_MET",";MET;Events",9,Wbins);
    TH1F*  H_MET = new TH1F("H_MET",";MET;Events",9,Hbins);
    TH1F* WH_METC = new TH1F("WH_METC",";MET;Events",8,WHbins);
    TH1F*  W_METC = new TH1F("W_METC",";MET;Events",9,Wbins);
    TH1F*  H_METC = new TH1F("H_METC",";MET;Events",9,Hbins);

      
//File 1***************************************
    for(int evt=0;evt<tr1->GetEntries();evt++){
      
    c1.GetEntry(evt);

    MET4.SetPtEtaPhiE(c1.MET,0,c1.METPhi,0);

    if(c1.Jets->size() == 0){ continue ; }
    
    if(c1.JetsAK8->size() == 0){ continue; }
      

    if( NVetos(1) && TrackVetos(1) && HTPTCut(1) && AK4JetsCut(1) && AK8JetsCut(1) && AK4DeltaPhiCut(1) && AK8DeltaPhiCut(1) && TwoAK8Jets(1) ){


      //WH SR
      if(WHTag(1,999,1,999,1)){ WH_MET->Fill(c1.MET,c1.Weight*137000); }
      
      //H SR
      if(WHTag(0,0,1,999,1)){
	//cout<<"Event: "<<evt<<" H_MET weight: "<<c1.Weight<<endl;
	H_MET->Fill(c1.MET, c1.Weight*137000);
      }
      
      //W SR
      if(WHTag(1,999,0,0,1)){ W_MET->Fill(c1.MET, c1.Weight*137000);  }
      
       
      
     }//end if statement--------------------
    }//end for loop================================
  
    
 //File 2****************************************
    for(int evt=0;evt<tr2->GetEntries();evt++){
      
    c2.GetEntry(evt);

    MET4.SetPtEtaPhiE(c2.MET,0,c2.METPhi,0);

    if(c2.Jets->size() == 0){ continue ; }
    
    if(c2.JetsAK8->size() == 0){ continue; }
      

    if( NVetos(2) && TrackVetos(2) && HTPTCut(2) && AK4JetsCut(2) && AK8JetsCut(2) && AK4DeltaPhiCut(2) && AK8DeltaPhiCut(2) && TwoAK8Jets(2) ){

      //WH SR
      if(WHTag(1,999,1,999,2)){
	//cout<<"Event: "<<evt<<" WH_MET2: "<<c2.MET<<endl;
	WH_METC->Fill(c2.MET,137000*5.57407e-08);
      }
      
      //H SR
      if(WHTag(0,0,1,999,2)){
	//cout<<"Event: "<<evt<<" H_MET2 Weight: "<<c2.Weight<<endl;
	H_METC->Fill(c2.MET,137000*5.57407e-08);
      }
      
      //W SR
      if(WHTag(1,999,0,0,2)){
	//cout<<"Event: "<<evt<<" W_MET2: "<<c2.MET<<endl;
	W_METC->Fill(c2.MET,137000*5.57407e-08);
      }
      
       
      
     }//end if statement--------------------
    }//end for loop================================
    
  WH_MET->SetBinContent(8,WH_MET->GetBinContent(8) + WH_MET->GetBinContent(9) );
  H_MET->SetBinContent( 9,H_MET->GetBinContent(9 ) +  H_MET->GetBinContent(10));
  W_MET->SetBinContent( 9,W_MET->GetBinContent(9 ) +  W_MET->GetBinContent(10));

  WH_METC->SetBinContent(8,WH_METC->GetBinContent(8) + WH_METC->GetBinContent(9) );
  H_METC->SetBinContent( 9,H_METC->GetBinContent(9 ) +  H_METC->GetBinContent(10));
  W_METC->SetBinContent( 9,W_METC->GetBinContent(9 ) +  W_METC->GetBinContent(10));

  HistPlot(H_MET,H_METC,"H SR","Autumn18","CN925WZBB","WZBB_H_Comparison.png");
  HistPlot(W_MET,W_METC,"W SR","Autumn18","CN925WZBB","WZBB_W_Comparison.png");
  HistPlot(WH_MET,WH_METC,"WH SR","Autumn18","CN925WZBB","WZBB_WH_Comparison.png");

  
}




