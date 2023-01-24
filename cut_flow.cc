#include "RA2bCut.h"
#include <TCanvas.h>
#include <TH1F.h>
#include <vector>
#include <iostream>

class NoCuts:public RA2bCut{
  using RA2bCut::RA2bCut;
public:
  bool ApplyCut(){
    return true;
  }
};

class ElectronVeto:public RA2bCut{
  using RA2bCut::RA2bCut;
public:
  bool ApplyCut(){
    return tree->NElectrons==0;
  }
};
  
class MuonVeto:public RA2bCut{
  using RA2bCut::RA2bCut;
public:
  bool ApplyCut(){
    return tree->NMuons==0;
  }
};

class IsoTrackVeto:public RA2bCut{
  using RA2bCut::RA2bCut;
public:
  bool ApplyCut(){
    return tree->isoElectronTracks==0 && tree->isoMuonTracks==0 && tree->isoPionTracks==0;
  }
};

class MissPTCut:public RA2bCut{
  using RA2bCut::RA2bCut;
public:
  double threshold=200.;
  bool ApplyCut(){
    return tree->MET>threshold;
  }
};

class HTCut:public RA2bCut{
  using RA2bCut::RA2bCut;
public:
  double threshold=300.;
  bool ApplyCut(){
    return tree->HT>threshold;
  }
};

class NJetsCut:public RA2bCut{
  using RA2bCut::RA2bCut;
public:
  double PtThreshold=30.;
  double EtaThreshold=2.4;
  double MassThreshold=50.;
  int LowerBound=2;
  int UpperBound=6;
  bool ak4=true;
  
  bool ApplyCut(){
    int count=0;
    if( ak4 ){ // check ak4 jets
      for( auto jet : *(tree->Jets) ){
	count+=int(jet.Pt()>PtThreshold && fabs(jet.Eta())<EtaThreshold);
      }// end loop over ak4 jets    
    }else{ // end check of ak4 jets; start ak8
      for(int j = 0; j < tree->JetsAK8->size(); j++){
	count+=int(tree->JetsAK8->at(j).Pt()>PtThreshold && fabs(tree->JetsAK8->at(j).Eta())<EtaThreshold && tree->JetsAK8_softDropMass->at(j)>MassThreshold);
      } // end loop over aka8 jets
    }// end check of ak8 jets
    return count>=LowerBound && count <=UpperBound;
  }
};

class PhotonVeto:public RA2bCut{

  using RA2bCut::RA2bCut;

public:

  double PtThreshold=200.;
  double EtaThreshold=3.0;

  bool ApplyCut(){
    int count=0;
    for( auto photon : *(tree->Photons) ){
      count+=int(photon.Pt()>PtThreshold && fabs(photon.Eta())<EtaThreshold);
    }    
    return count==0;
  }

};

class DeltaPhiCuts:public RA2bCut{

  using RA2bCut::RA2bCut;

public:

  int index=0;
  double Threshold=1.5;
  bool ak4=true;
  bool debug=false;
  
  bool ApplyCut(){
    TLorentzVector met;
    met.SetPtEtaPhiE(tree->MET,0,tree->METPhi,0);
    if( ak4 ){
      if( tree->Jets->size() > index ){
	bool res=fabs(tree->Jets->at(index).DeltaPhi(met))>Threshold;
	if(debug) std::cout << "deltaphi(" << index << ")=" << fabs(tree->Jets->at(index).DeltaPhi(met)) << ">" << Threshold << "?" << res << std::endl;
	return res;
      }else
	return true;
    }else{
      if( tree->JetsAK8->size() > index ){
	bool res=fabs(tree->JetsAK8->at(index).DeltaPhi(met))>Threshold;
	if(debug) std::cout << "deltaPHI(" << index << ")=" << fabs(tree->Jets->at(index).DeltaPhi(met)) << ">" << Threshold << "?" << res << std::endl;
	return res;
      }else
	return true;
    }
  }

};

class BVeto:public RA2bCut{
  using RA2bCut::RA2bCut;
public:

  double PtThreshold=30.;
  double EtaThreshold=2.4;
  double DiscThreshold=0.4184;
  int MinBTag=0;
  int MaxBtag=999;
  
  bool ApplyCut(){
    int count = 0 ;
    for( int i = 0 ; i < tree->Jets->size() ; i++){
      count+=int(tree->Jets->at(i).Pt() > PtThreshold &&
		 fabs(tree->Jets->at(i).Eta()) < EtaThreshold &&
		 tree->Jets_bJetTagDeepCSVBvsAll->at(i) > DiscThreshold );
    }

    return count > MinBTag && count < MaxBtag;
    
  }
  
};

class WHTag:public RA2bCut{
  using RA2bCut::RA2bCut;
public:

  double AK8PtThreshold=200.;
  double AK8EtaThreshold=2.0;
  double AK4PtThreshold=30.;
  double AK4EtaThreshold=2.4;
  double bbDiscThreshold=0.8365;
  double WDiscThreshold=0.918;
  double bDiscThreshold=0.4184;
  int MinWTag=0;
  int MaxWTag=999;
  int MinHTag=0;
  int MaxHTag=999;

  //  std::vector<int> HiggsCandIndices;
  std::vector<int> BtagIndices;
  
  bool ApplyCut(){
    //std::cout << "--------------------" << std::endl;
    BtagIndices.clear();
    int HiggsTags = 0 ;
    int WbosonTags = 0 ;
    //std::cout << "loop over AK4 jets" << std::endl;
    for( int i = 0 ; i < tree->Jets->size(); i++){
      if( tree->Jets->at(i).Pt() > AK4PtThreshold &&
	  fabs(tree->Jets->at(i).Eta()) < AK4EtaThreshold &&
	  tree->Jets_bJetTagDeepCSVBvsAll->at(i) > bDiscThreshold ) BtagIndices.push_back(i);
    }

    //std::cout << "n b-tags: " << BtagIndices.size() << std::endl;
    
    if( BtagIndices.size() == 0 ) return false;

    //std::cout << "loop over AK8 jets" << std::endl;
    for( int i = 0 ; i < tree->JetsAK8->size() ; i++){
      //std::cout << "AK8 JET : " << i << std::endl;
      bool HiggsCand=false;
      //std::cout << "loop over btags" << std::endl;
      for( int b = 0 ; b < BtagIndices.size() ; b++){
	//std::cout << "BtagIndex: " << BtagIndices[b] << " ak4 jet size: " << tree->Jets->size() << " ak8 jet index: " << i << " ak8 size: " << tree->JetsAK8->size() << std::endl;
	if( tree->JetsAK8->at(i).DeltaR(tree->Jets->at(BtagIndices[b])) < 0.8 ){
	  HiggsCand=true;
	  break;
	}// end if 
      }// end loop over bjets

      if( HiggsCand ){
	//std::cout << "this is a higgs candidate" << std::endl;
	//std::cout << "pt: " << tree->JetsAK8->at(i).Pt() << " |eta|: " << fabs(tree->JetsAK8->at(i).Eta()) << " mass: " << tree->JetsAK8_softDropMass->at(i) << " disc: " << tree->JetsAK8_DeepMassDecorrelTagbbvsLight->at(i) << std::endl;
	HiggsTags+=int(tree->JetsAK8->at(i).Pt() > AK8PtThreshold &&
		       fabs(tree->JetsAK8->at(i).Eta()) < AK8EtaThreshold &&
		       tree->JetsAK8_DeepMassDecorrelTagbbvsLight->at(i) > bbDiscThreshold &&
		       tree->JetsAK8_softDropMass->at(i) > 75 &&
		       tree->JetsAK8_softDropMass->at(i) < 140 );
      }else{
	//std::cout << "this is a W candidate" << std::endl;
	//std::cout << "pt: " << tree->JetsAK8->at(i).Pt() << " |eta|: " << fabs(tree->JetsAK8->at(i).Eta()) << " mass: " << tree->JetsAK8_softDropMass->at(i) << " disc: " << tree->JetsAK8_DeepTagWvsQCD->at(i) << std::endl;

	WbosonTags+=int(tree->JetsAK8->at(i).Pt() > AK8PtThreshold &&
			fabs(tree->JetsAK8->at(i).Eta()) < AK8EtaThreshold &&
			tree->JetsAK8_DeepTagWvsQCD->at(i) > WDiscThreshold &&
			tree->JetsAK8_softDropMass->at(i) > 65 &&
			tree->JetsAK8_softDropMass->at(i) < 105 );
      }// end if-else block to check for Higgs or W candidates
      
    }// end loop over AK8 jets

    //std::cout << "HiggsTags: " << HiggsTags << " WbosonTags: " << WbosonTags << std::endl;
    //std::cout << "--------------------" << std::endl;
    
    return HiggsTags >= MinHTag && HiggsTags <= MaxHTag && WbosonTags >= MinWTag && WbosonTags <= MaxWTag ;
    
  }
  
};


//-------------------------------------------
//-------------------------------------------

int main(int argc, char **argv){

  std::vector<std::string> cutNames;
  std::vector<RA2bCut*> cuts;

  NoCuts*       c0  = new NoCuts();
  ElectronVeto* c1  = new ElectronVeto();
  MuonVeto*     c2  = new MuonVeto();
  IsoTrackVeto* c3  = new IsoTrackVeto();
  MissPTCut*    c4  = new MissPTCut();
  HTCut*        c5  = new HTCut();
  NJetsCut*     c6  = new NJetsCut();
  PhotonVeto*   c7  = new PhotonVeto();
  NJetsCut*     c8  = new NJetsCut();
  c8->LowerBound=1 ; c8->UpperBound=999 ; c8->PtThreshold=200. ; c8->EtaThreshold=2.0 ; c8->MassThreshold=50. ; c8->ak4=false ;
  DeltaPhiCuts* c9a4= new DeltaPhiCuts(); c9a4->index=0; c9a4->Threshold=1.5; //c9a4->debug=true;
  DeltaPhiCuts* c9b4= new DeltaPhiCuts(); c9b4->index=1; c9b4->Threshold=0.5;
  DeltaPhiCuts* c9c4= new DeltaPhiCuts(); c9c4->index=2; c9c4->Threshold=0.3;
  DeltaPhiCuts* c9d4= new DeltaPhiCuts(); c9d4->index=3; c9d4->Threshold=0.3;
  DeltaPhiCuts* c9a8= new DeltaPhiCuts(); c9a8->index=0; c9a8->Threshold=1.5; c9a8->ak4=false;
  DeltaPhiCuts* c9b8= new DeltaPhiCuts(); c9b8->index=1; c9b8->Threshold=0.5; c9b8->ak4=false;
  NJetsCut*     c10 = new NJetsCut();
  c10->LowerBound=2 ; c10->UpperBound=999 ; c10->PtThreshold=200. ; c10->EtaThreshold=2.0 ; c10->MassThreshold=0. ; c10->ak4=false ;
    
  WHTag* cWH = new WHTag();
  cWH->MinWTag=1;   cWH->MinHTag=1;
  cWH->MaxWTag=999; cWH->MaxHTag=999; 
  WHTag* cH  = new WHTag();
  cH->MinWTag=0;    cH->MinHTag=1;
  cH->MaxWTag=0;    cH->MaxHTag=999; 
  WHTag* cW  = new WHTag();
  cW->MinWTag=1;    cW->MinHTag=0;
  cW->MaxWTag=999;  cW->MaxHTag=0; 
  
  cuts.push_back(c0);   cutNames.push_back("None");		      
  cuts.push_back(c1);   cutNames.push_back("Electron Veto");
  cuts.push_back(c2);   cutNames.push_back("Muon Veto");
  cuts.push_back(c3);   cutNames.push_back("Iso Track Veto");
  cuts.push_back(c4);   cutNames.push_back("MET>200 GeV");
  cuts.push_back(c5);   cutNames.push_back("HT>300 GeV");
  cuts.push_back(c6);   cutNames.push_back("2<=N_{j}<=6");
  cuts.push_back(c7);   cutNames.push_back("Photon Veto");
  cuts.push_back(c8);   cutNames.push_back("1<=N_{J}");
  cuts.push_back(c9a4); cutNames.push_back("Deltaphi_1");
  cuts.push_back(c9b4); cutNames.push_back("Deltaphi_2");
  cuts.push_back(c9c4); cutNames.push_back("Deltaphi_3");
  cuts.push_back(c9d4); cutNames.push_back("Deltaphi_4");
  cuts.push_back(c9a8); cutNames.push_back("DeltaPhi_1");
  cuts.push_back(c9b8); cutNames.push_back("DeltaPhi_2");
  cuts.push_back(c10);  cutNames.push_back("2<=N_{J}");
                        cutNames.push_back("WH SR");
			cutNames.push_back("H SR");
			cutNames.push_back("W SR");

  TH1F cut_flow("cut_flow",";Cut;Events",cuts.size()+3,-0.5,cuts.size()+3-0.5);
  double WHbins[9] = {200,250,300,350,400,450,500,600,900};
  double Wbins[10] = {200,250,300,350,400,450,500,600,800,1200};
  double Hbins[10] = {200,250,300,350,400,450,500,600,800,1200};
  TH1F WH_MET("WH_MET",";MET;Events",8,WHbins);
  TH1F W_MET("W_MET",";MET;Events",9,Wbins);
  TH1F H_MET("H_MET",";MET;Events",9,Hbins);

  char f18[] = "~/Downloads/Signal_1000_100_Autumn18Fast_TChiWH.root";
  char f17[] = "~/Downloads/Signal_1000_100_Fall17Fast_TChiWH.root";
  char f16[] = "~/Downloads/Signal_1000_100_Summer16v3Fast_TChiWH.root";

  std::vector<char*> files = {f18,f17,f16};
  std::vector<double> lumis = {59.546381,41.486136,35.815165};
  std::vector<double> bbtag_cuts = {0.8365,0.8695,0.8945};
  std::vector<double> btag_cuts = {0.4184,0.4941,0.6321};
  std::vector<double> wtag_cuts = {0.918,0.925,0.918};

  // std::vector<char*> files = {f18};
  // std::vector<double> lumis = {137.};
  // std::vector<double> bbtag_cuts = {0.8365};
  // std::vector<double> wtag_cuts = {};

  for(int f = 0 ; f < files.size() ; f++){ // = = = = = = = = = = = =

    std::cout << "file: " << f << std::endl;
    
    TChain* chain = new TChain("tree");
    chain->Add(files[f]);
    RA2bNtuple* t = new RA2bNtuple(chain);
    std::cout << "tree: " << t << " chain: " << chain << std::endl;
    
    for( auto c : cuts ){
      c->tree = t;
    }
    cWH->tree = t;
    cH->tree = t;
    cW->tree = t;

    cWH->bbDiscThreshold=bbtag_cuts[f];
    cWH->bDiscThreshold=btag_cuts[f];
    cWH->WDiscThreshold=wtag_cuts[f];
    cH->bbDiscThreshold=bbtag_cuts[f];
    cH->bDiscThreshold=btag_cuts[f];
    cH->WDiscThreshold=wtag_cuts[f];
    cW->bbDiscThreshold=bbtag_cuts[f];
    cW->bDiscThreshold=btag_cuts[f];
    cW->WDiscThreshold=wtag_cuts[f];

    std::cout << "starting event loop..." << std::endl;
    
    for(int i = 0 ; i < t->fChain->GetEntriesFast() ; i++ ){ // - - - - - - - - 
      if( i % 5000 == 0 ) std::cout << "event: " << i << std::endl;
      t->GetEntry(i);

      bool cutProd = true;
      for(int c = 0 ; c < cuts.size() ; c++ ){ // ++++++
	cutProd = cutProd&&cuts[c]->ApplyCut();
	if(cuts[c]->ApplyCut())
	  cut_flow.Fill(c,t->Weight*lumis[f]*1000.);
	else
	  break;
      }// end loop over cuts +++++++++++++++++++++++++++

      if( cutProd ){
	if( cWH->ApplyCut() ){cut_flow.Fill(cuts.size(),t->Weight*lumis[f]*1000.);    WH_MET.Fill(t->MET,t->Weight*lumis[f]*1000.); }
	if( cH->ApplyCut() ) {cut_flow.Fill(cuts.size()+1,t->Weight*lumis[f]*1000.);  H_MET.Fill(t->MET, t->Weight*lumis[f]*1000.);  }
	if( cW->ApplyCut() ) {cut_flow.Fill(cuts.size()+2,t->Weight*lumis[f]*1000.);  W_MET.Fill(t->MET, t->Weight*lumis[f]*1000.);  }
      }
    
    }// end loop over events - - - - - - - - - - - - - - - - - - - - - - - - - - 

  }// end loop over years // = = = = = = = = = = = = = = = = = = = = = =
  
  //cut_flow.Print("all");
  for(int i = 0 ; i < cutNames.size() ; i++){
    std::cout << "cut " << i << "(" << cutNames[i] << ") Events passing: " << cut_flow.GetBinContent(i+1) << std::endl;
  }

  WH_MET.SetBinContent(8,WH_MET.GetBinContent(8) + WH_MET.GetBinContent(9) );
  H_MET.SetBinContent( 9,H_MET.GetBinContent(9 ) +  H_MET.GetBinContent(10));
  W_MET.SetBinContent( 9,W_MET.GetBinContent(9 ) +  W_MET.GetBinContent(10));
  
  TCanvas* can = new TCanvas("can","can",500,500);
  cut_flow.Draw();
  can->SaveAs("cut_flow.png");
  WH_MET.Draw();
  can->SaveAs("WH_MET.png");
  H_MET.Draw();
  can->SaveAs("H_MET.png");
  W_MET.Draw();
  can->SaveAs("W_MET.png");
  
}

