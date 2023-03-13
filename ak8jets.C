#include "NanoTree.C"
#include "RA2bNtupleV20.C"

bool debug = false;

vector<int> filterAK8Jets(Float_t* pt,
			  Float_t* eta,
			  int n,
			  double pt_threshold=170.,
			  double eta_threshold=3.5
			  ){
  vector<int> indices;
  for( int i = 0 ; i < n ; i++ ){
    if( pt[i] > pt_threshold && fabs(eta[i]) < eta_threshold ){
      cout << "i: " << i << " pt: " << pt[i] << " eta: " << eta[i] << endl;
      indices.push_back(i);
    }
  }

  return indices;
}

void ak8jets(){

  gROOT->ProcessLine(".L ~/tdrstyle.C");
  gROOT->ProcessLine("setTDRStyle()");

  TFile* nano_file = new TFile("~/Downloads/Nano_Summer20UL18_TTJets_Inclusive_585C021C-8088-434F-A0A2-3BE09C1E5FD2.root");
  NanoTree* nano_t = new NanoTree((TTree*)nano_file->Get("Events"));
  TFile* ra2b_file = new TFile("~/Downloads/Summer20UL18_TTJets_Inclusive_10_278_RA2AnalysisTree.root");
  RA2bNtupleV20* ra2b_t = new RA2bNtupleV20((TTree*)ra2b_file->Get("TreeMaker2/PreSelection"));

  char temp[100];
  
  vector<TH1F*> jetpt_ra2b;
  vector<TH1F*> jetpt_nano;
  for( int i = 0 ; i < 4 ; i++ ){
    sprintf(temp,"jetpt_ra2b%i",i);
    jetpt_ra2b.push_back(new TH1F(temp,";AK8 Jet p_T [GeV];Events",50,200,800));
    jetpt_ra2b.back()->SetLineWidth(2);
    jetpt_ra2b.back()->SetLineStyle(1);
    jetpt_ra2b.back()->SetLineColor(2);
    sprintf(temp,"jetpt_nano%i",i);
    jetpt_nano.push_back(new TH1F(temp,";AK8 Jet p_T [GeV];Events",50,200,800));
    jetpt_nano.back()->SetLineWidth(2);
    jetpt_nano.back()->SetLineStyle(2);
    jetpt_nano.back()->SetLineColor(4);
  }

  vector<TH1F*> jetptdiff;
  for( int i = 0 ; i < 4 ; i++ ){
    sprintf(temp,"jetptdiff%i",i);
    jetptdiff.push_back(new TH1F(temp,";AK8 Jet #Delta p_T [GeV];Events",50,-200,200));
    jetptdiff.back()->SetLineWidth(2);
    jetptdiff.back()->SetLineStyle(1);
    jetptdiff.back()->SetLineColor(2);
  }

  vector<TH1F*> jeteta_ra2b;
  vector<TH1F*> jeteta_nano;
  for( int i = 0 ; i < 4 ; i++ ){
    sprintf(temp,"jeteta_ra2b%i",i);
    jeteta_ra2b.push_back(new TH1F(temp,";AK8 Jet #eta [GeV];Events",20,-5,5));
    jeteta_ra2b.back()->SetLineWidth(2);
    jeteta_ra2b.back()->SetLineStyle(1);
    jeteta_ra2b.back()->SetLineColor(2);
    sprintf(temp,"jeteta_nano%i",i);
    jeteta_nano.push_back(new TH1F(temp,";AK8 Jet #eta [GeV];Events",20,-5,5));
    jeteta_nano.back()->SetLineWidth(2);
    jeteta_nano.back()->SetLineStyle(2);
    jeteta_nano.back()->SetLineColor(4);
  }

  int numEvents = ra2b_t->fChain->GetEntriesFast();
  for( int evt = 0 ; evt < numEvents ; evt++ ){
    if(debug) cout << "event: " << evt << endl;
    ra2b_t->GetEntry(evt);
    nano_t->GetEntry(numEvents-evt-1);

    cout << "ra2" << endl;
    vector<int> ra2b_indices = filterAK8Jets(ra2b_t->JetsAK8_fCoordinates_fPt,ra2b_t->JetsAK8_fCoordinates_fEta,ra2b_t->JetsAK8_);
    cout << "nano" << endl;
    vector<int> nano_indices = filterAK8Jets(nano_t->FatJet_pt,nano_t->FatJet_eta,nano_t->nFatJet);      

    cout << "num good jets :: ra2b " << ra2b_indices.size() << " nano " << nano_indices.size() << endl;
    
    for( int j= 0 ; j < 4 ; j++ ){
      if( j < ra2b_indices.size() ){
	jetpt_ra2b[j]->Fill(ra2b_t->JetsAK8_fCoordinates_fPt[ra2b_indices[j]]);
	jeteta_ra2b[j]->Fill(ra2b_t->JetsAK8_fCoordinates_fEta[ra2b_indices[j]]);
      }if( j < nano_indices.size() ){
	jetpt_nano[j]->Fill(nano_t->FatJet_pt[nano_indices[j]]);
	jeteta_nano[j]->Fill(nano_t->FatJet_eta[nano_indices[j]]);
      }if( j < nano_indices.size() && j < ra2b_indices.size() ){
	jetptdiff[j]->Fill( ra2b_t->JetsAK8_fCoordinates_fPt[ra2b_indices[j]] - nano_t->FatJet_pt[nano_indices[j]] );
      }
      
    }

  }

  TCanvas* can = new TCanvas("can","can",500,500);
  can->SetLogy();

  for( int j= 0 ; j < 4 ; j++ ){
    sprintf(temp,"filteredAK8Jet_pt%i.png",j);
    jetpt_ra2b[j]->Draw();
    jetpt_nano[j]->Draw("SAME");
    can->SaveAs(temp);

    sprintf(temp,"filteredAK8Jet_eta%i.png",j);
    jeteta_ra2b[j]->Draw();
    jeteta_nano[j]->Draw("SAME");
    can->SaveAs(temp);

    sprintf(temp,"filteredAK8Jet_ptdiff%i.png",j);
    jetptdiff[j]->Draw();
    can->SaveAs(temp);
  }
  
}
