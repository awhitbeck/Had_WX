#include "TROOT.h"
#include "test.h"
#include "TH1F.h"
#include "TFile.h"
#include "TCanvas.h"

int main(int argc, char **argv){

  TFile* f = new TFile("~/Downloads/Signal_1000_100_Autumn18Fast_TChiWH.root");
  test t((TTree*) f->Get("tree"));

  TH1F* leadingJetPt = new TH1F("leadingJetPt",";Leading Jet p_{T} [GeV];Events",40,0,2000);
  
  for( int i = 0 ; i < t.fChain->GetEntriesFast() ; i++ ){
    t.GetEntry(i);
    if( t.Jets->size() )
      leadingJetPt->Fill(t.Jets->at(0).Pt());
      
  }
  leadingJetPt->Print("all");
  TCanvas* can = new TCanvas("can","can",500,500);
  leadingJetPt->Draw();
  can->SaveAs("test.png");
  return 0;
}
