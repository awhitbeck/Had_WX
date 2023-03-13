#include "NanoTree.C"
#include "RA2bNtupleV20.C"
#include "CompareVars.cc"

bool debug = false;


void compare_nano_ra2bv20(){

  TFile* nano_file = new TFile("~/Downloads/Nano_Summer20UL18_TTJets_Inclusive_585C021C-8088-434F-A0A2-3BE09C1E5FD2.root");
  NanoTree* nano_t = new NanoTree((TTree*)nano_file->Get("Events"));
  TFile* ra2b_file = new TFile("~/Downloads/Summer20UL18_TTJets_Inclusive_10_278_RA2AnalysisTree.root");
  RA2bNtupleV20* ra2b_t = new RA2bNtupleV20((TTree*)ra2b_file->Get("TreeMaker2/PreSelection"));

  //ra2b_t->fChain->SetBranchStatus("*",0);
  //nano_t->fChain->SetBranchStatus("*",0);			
  
  if( ra2b_t->fChain->GetEntriesFast() != nano_t->fChain->GetEntriesFast() ){
    cout << "these files have a different number of events!" << endl;
    return;
  }

  vector<CompareVars*> comps;
  
  comps.push_back(new CompareVars(ra2b_t,nano_t,"BadChargedCandidateFilter","Flag_BadChargedCandidateFilter",2,0.5,1.5));
  comps.push_back(new CompareVars(ra2b_t,nano_t,"BadPFMuonDzFilter","Flag_BadPFMuonDzFilter",2,0.5,1.5));
  comps.push_back(new CompareVars(ra2b_t,nano_t,"BadPFMuonFilter","Flag_BadPFMuonFilter",2,0.5,1.5));
  comps.push_back(new CompareVars(ra2b_t,nano_t,"CSCTightHaloFilter","Flag_CSCTightHaloFilter",2,-0.5,1.5));
  comps.push_back(new CompareVars(ra2b_t,nano_t,"ecalBadCalibFilter","Flag_ecalBadCalibFilter",2,-0.5,1.5));
  comps.push_back(new CompareVars(ra2b_t,nano_t,"EcalDeadCellBoundaryEnergyFilter","Flag_EcalDeadCellBoundaryEnergyFilter",2,-0.5,1.5));
  comps.push_back(new CompareVars(ra2b_t,nano_t,"EcalDeadCellTriggerPrimitiveFilter","Flag_EcalDeadCellTriggerPrimitiveFilter",2,-0.5,1.5));
  comps.push_back(new CompareVars(ra2b_t,nano_t,"eeBadScFilter","Flag_eeBadScFilter",2,-0.5,1.5));
  comps.push_back(new CompareVars(ra2b_t,nano_t,"globalSuperTightHalo2016Filter","Flag_globalSuperTightHalo2016Filter",2,-0.5,1.5));
  comps.push_back(new CompareVars(ra2b_t,nano_t,"globalTightHalo2016Filter","Flag_globalTightHalo2016Filter",2,-0.5,1.5));
  comps.push_back(new CompareVars(ra2b_t,nano_t,"HBHEIsoNoiseFilter","Flag_HBHENoiseIsoFilter",2,-0.5,1.5));
  comps.push_back(new CompareVars(ra2b_t,nano_t,"HBHENoiseFilter","Flag_HBHENoiseFilter",2,-0.5,1.5));
  comps.push_back(new CompareVars(ra2b_t,nano_t,"hfNoisyHitsFilter","Flag_hfNoisyHitsFilter",2,-0.5,1.5));
  
  comps.push_back(new CompareVars(ra2b_t,nano_t,"EvtNum","event",40,0,1000000));
  comps.push_back(new CompareVars(ra2b_t,nano_t,"fixedGridRhoFastjetAll","fixedGridRhoFastjetAll",40,0,1000000));

  comps.push_back(new CompareVars(ra2b_t,nano_t,"GenMET","GenMET_pt",40,0,1000));
  comps.push_back(new CompareVars(ra2b_t,nano_t,"GenMETPhi","GenMET_phi",40,-2*3.142,2*3.142));
  
  comps.push_back(new CompareVars(ra2b_t,nano_t,"CaloMET","CaloMET_pt",40,0,1000));
  comps.push_back(new CompareVars(ra2b_t,nano_t,"CaloMETPhi","CaloMET_phi",40,-2*3.142,2*3.142));

  for(int i = 0 ; i < 3 ; i++){
    comps.push_back(new CompareVars(ra2b_t,nano_t,"JetsAK8_fCoordinates_fPt","FatJet_pt",50,80,1080,i));
    comps.push_back(new CompareVars(ra2b_t,nano_t,"JetsAK8_fCoordinates_fEta","FatJet_eta",50,-5,5,i));

    comps.push_back(new CompareVars(ra2b_t,nano_t,"Jets_fCoordinates_fPt","Jet_pt",50,5,505,i));
    comps.push_back(new CompareVars(ra2b_t,nano_t,"Jets_fCoordinates_fEta","Jet_eta",50,-5,5,i));

    comps.push_back(new CompareVars(ra2b_t,nano_t,"Jets_bDiscriminatorCSV","Jet_btagCSVV2",20,-1,1));
    comps.push_back(new CompareVars(ra2b_t,nano_t,"Jets_chargedEmEnergyFraction","Jet_chEmEF",20,0,1));
    comps.push_back(new CompareVars(ra2b_t,nano_t,"Jets_chargedHadronEnergyFraction","Jet_chHEF",20,0,1));
    //comps.push_back(new CompareVars(ra2b_t,nano_t,"Jets_electronEnergyFraction","",20,0,1));
    comps.push_back(new CompareVars(ra2b_t,nano_t,"Jets_electronMultiplicity","Jet_nElectrons",20,0,20));
    //comps.push_back(new CompareVars(ra2b_t,nano_t,"Jets_hadronFlavor","",10,0.5,10.5));
    //comps.push_back(new CompareVars(ra2b_t,nano_t,"Jets_ID","Jet_jetId",10,0,10));
    comps.push_back(new CompareVars(ra2b_t,nano_t,"Jets_multiplicity","Jet_nConstituents",10,0,50));
    comps.push_back(new CompareVars(ra2b_t,nano_t,"Jets_muonEnergyFraction","Jet_muEF",20,0,1));
    comps.push_back(new CompareVars(ra2b_t,nano_t,"Jets_muonMultiplicity","Jet_nMuons",10,0,10));
    comps.push_back(new CompareVars(ra2b_t,nano_t,"Jets_neutralEmEnergyFraction","Jet_neEmEF",20,0,1));
    comps.push_back(new CompareVars(ra2b_t,nano_t,"Jets_neutralHadronEnergyFraction","Jet_neHEF",20,0,1));
    
    comps.push_back(new CompareVars(ra2b_t,nano_t,"Electrons_fCoordinates_fPt","Electron_pt",50,5,105,i));
    comps.push_back(new CompareVars(ra2b_t,nano_t,"Electrons_charge","Electron_charge",3,-1.5,1.5));

    comps.push_back(new CompareVars(ra2b_t,nano_t,"Muons_fCoordinates_fPt","Muon_pt",50,5,105,i));

    /*
    GenParticles
      GenParticles_Charge
      GenParticles_ParentIdx
      GenParticles_PdgId
      GenParticles_Status
    */
  }
  comps.push_back(new CompareVars(ra2b_t,nano_t,"JetsAK8_","nFatJet",10,-0.5,9.5));
  comps.push_back(new CompareVars(ra2b_t,nano_t,"Jets_","nJet",19,-0.5,19.5));
  comps.push_back(new CompareVars(ra2b_t,nano_t,"Electrons_","nElectron",10,-0.5,9.5));
  comps.push_back(new CompareVars(ra2b_t,nano_t,"Muons_","nMuon",10,-0.5,9.5));

  for( int evt = 0 ; evt < ra2b_t->fChain->GetEntriesFast() ; evt++ ){
    if(debug) cout << "event: " << evt << endl;
    ra2b_t->GetEntry(evt);
    nano_t->GetEntry(evt);

    for( auto comp : comps){
      comp->Fill();
    }
  }
  
  for( auto comp : comps){
    comp->Draw();
  }

}


