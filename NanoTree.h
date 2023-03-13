//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri Jan 27 08:58:13 2023 by ROOT version 6.15/01
// from TTree Events/Events
// found on file: /Users/whitbeck/Downloads/Nano_Summer20UL18_TTJets_Inclusive_585C021C-8088-434F-A0A2-3BE09C1E5FD2.root
//////////////////////////////////////////////////////////

#ifndef NanoTree_h
#define NanoTree_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <string>
#include <map>

// Header file for the classes stored in the TTree if any.

class NanoTree {
public :
  TTree          *fChain;   //!pointer to the analyzed TTree or TChain
  Int_t           fCurrent; //!current Tree number in a TChain

  std::map<string,UInt_t*> branch_map_UInt_t;
  std::map<string,ULong64_t*> branch_map_ULong64_t;
  std::map<string,Float_t*> branch_map_Float_t;
  std::map<string,Int_t*> branch_map_Int_t;
  std::map<string,UChar_t*> branch_map_UChar_t;
  std::map<string,Bool_t*> branch_map_Bool_t;
  
  // Fixed size dimensions of array or collections stored in the TTree if any.

  // Declaration of leaf types
  UInt_t          run;                           
  UInt_t          luminosityBlock;               
  ULong64_t       event;                         
  Float_t         HTXS_Higgs_pt;                 
  Float_t         HTXS_Higgs_y;                  
  Int_t           HTXS_stage1_1_cat_pTjet25GeV;  
  Int_t           HTXS_stage1_1_cat_pTjet30GeV;
  Int_t           HTXS_stage1_1_fine_cat_pTjet25GeV;
  Int_t           HTXS_stage1_1_fine_cat_pTjet30GeV;
  Int_t           HTXS_stage1_2_cat_pTjet25GeV;
  Int_t           HTXS_stage1_2_cat_pTjet30GeV;
  Int_t           HTXS_stage1_2_fine_cat_pTjet25GeV;
  Int_t           HTXS_stage1_2_fine_cat_pTjet30GeV;
  Int_t           HTXS_stage_0;
  Int_t           HTXS_stage_1_pTjet25;
  Int_t           HTXS_stage_1_pTjet30;
  UChar_t         HTXS_njets25;
  UChar_t         HTXS_njets30;
  UInt_t          nboostedTau;
  Float_t         boostedTau_chargedIso[3];   //[nboostedTau]
  Float_t         boostedTau_eta[3];   //[nboostedTau]
  Float_t         boostedTau_leadTkDeltaEta[3];   //[nboostedTau]
  Float_t         boostedTau_leadTkDeltaPhi[3];   //[nboostedTau]
  Float_t         boostedTau_leadTkPtOverTauPt[3];   //[nboostedTau]
  Float_t         boostedTau_mass[3];   //[nboostedTau]
  Float_t         boostedTau_neutralIso[3];   //[nboostedTau]
  Float_t         boostedTau_phi[3];   //[nboostedTau]
  Float_t         boostedTau_photonsOutsideSignalCone[3];   //[nboostedTau]
  Float_t         boostedTau_pt[3];   //[nboostedTau]
  Float_t         boostedTau_puCorr[3];   //[nboostedTau]
  Float_t         boostedTau_rawAntiEle2018[3];   //[nboostedTau]
  Float_t         boostedTau_rawIso[3];   //[nboostedTau]
  Float_t         boostedTau_rawIsodR03[3];   //[nboostedTau]
  Float_t         boostedTau_rawMVAnewDM2017v2[3];   //[nboostedTau]
  Float_t         boostedTau_rawMVAoldDM2017v2[3];   //[nboostedTau]
  Float_t         boostedTau_rawMVAoldDMdR032017v2[3];   //[nboostedTau]
  Int_t           boostedTau_charge[3];   //[nboostedTau]
  Int_t           boostedTau_decayMode[3];   //[nboostedTau]
  Int_t           boostedTau_jetIdx[3];   //[nboostedTau]
  Int_t           boostedTau_rawAntiEleCat2018[3];   //[nboostedTau]
  UChar_t         boostedTau_idAntiEle2018[3];   //[nboostedTau]
  UChar_t         boostedTau_idAntiMu[3];   //[nboostedTau]
  UChar_t         boostedTau_idMVAnewDM2017v2[3];   //[nboostedTau]
  UChar_t         boostedTau_idMVAoldDM2017v2[3];   //[nboostedTau]
  UChar_t         boostedTau_idMVAoldDMdR032017v2[3];   //[nboostedTau]
  Float_t         btagWeight_CSVV2;
  Float_t         btagWeight_DeepCSVB;
  Float_t         CaloMET_phi;
  Float_t         CaloMET_pt;
  Float_t         CaloMET_sumEt;
  Float_t         ChsMET_phi;
  Float_t         ChsMET_pt;
  Float_t         ChsMET_sumEt;
  UInt_t          nCorrT1METJet;
  Float_t         CorrT1METJet_area[19];   //[nCorrT1METJet]
  Float_t         CorrT1METJet_eta[19];   //[nCorrT1METJet]
  Float_t         CorrT1METJet_muonSubtrFactor[19];   //[nCorrT1METJet]
  Float_t         CorrT1METJet_phi[19];   //[nCorrT1METJet]
  Float_t         CorrT1METJet_rawPt[19];   //[nCorrT1METJet]
  Float_t         DeepMETResolutionTune_phi;
  Float_t         DeepMETResolutionTune_pt;
  Float_t         DeepMETResponseTune_phi;
  Float_t         DeepMETResponseTune_pt;
  UInt_t          nElectron;
  Float_t         Electron_dEscaleDown[6];   //[nElectron]
  Float_t         Electron_dEscaleUp[6];   //[nElectron]
  Float_t         Electron_dEsigmaDown[6];   //[nElectron]
  Float_t         Electron_dEsigmaUp[6];   //[nElectron]
  Float_t         Electron_deltaEtaSC[6];   //[nElectron]
  Float_t         Electron_dr03EcalRecHitSumEt[6];   //[nElectron]
  Float_t         Electron_dr03HcalDepth1TowerSumEt[6];   //[nElectron]
  Float_t         Electron_dr03TkSumPt[6];   //[nElectron]
  Float_t         Electron_dr03TkSumPtHEEP[6];   //[nElectron]
  Float_t         Electron_dxy[6];   //[nElectron]
  Float_t         Electron_dxyErr[6];   //[nElectron]
  Float_t         Electron_dz[6];   //[nElectron]
  Float_t         Electron_dzErr[6];   //[nElectron]
  Float_t         Electron_eCorr[6];   //[nElectron]
  Float_t         Electron_eInvMinusPInv[6];   //[nElectron]
  Float_t         Electron_energyErr[6];   //[nElectron]
  Float_t         Electron_eta[6];   //[nElectron]
  Float_t         Electron_hoe[6];   //[nElectron]
  Float_t         Electron_ip3d[6];   //[nElectron]
  Float_t         Electron_jetPtRelv2[6];   //[nElectron]
  Float_t         Electron_jetRelIso[6];   //[nElectron]
  Float_t         Electron_mass[6];   //[nElectron]
  Float_t         Electron_miniPFRelIso_all[6];   //[nElectron]
  Float_t         Electron_miniPFRelIso_chg[6];   //[nElectron]
  Float_t         Electron_mvaFall17V2Iso[6];   //[nElectron]
  Float_t         Electron_mvaFall17V2noIso[6];   //[nElectron]
  Float_t         Electron_pfRelIso03_all[6];   //[nElectron]
  Float_t         Electron_pfRelIso03_chg[6];   //[nElectron]
  Float_t         Electron_phi[6];   //[nElectron]
  Float_t         Electron_pt[6];   //[nElectron]
  Float_t         Electron_r9[6];   //[nElectron]
  Float_t         Electron_scEtOverPt[6];   //[nElectron]
  Float_t         Electron_sieie[6];   //[nElectron]
  Float_t         Electron_sip3d[6];   //[nElectron]
  Float_t         Electron_mvaTTH[6];   //[nElectron]
  Int_t           Electron_charge[6];   //[nElectron]
  Int_t           Electron_cutBased[6];   //[nElectron]
  Int_t           Electron_jetIdx[6];   //[nElectron]
  Int_t           Electron_pdgId[6];   //[nElectron]
  Int_t           Electron_photonIdx[6];   //[nElectron]
  Int_t           Electron_tightCharge[6];   //[nElectron]
  Int_t           Electron_vidNestedWPBitmap[6];   //[nElectron]
  Int_t           Electron_vidNestedWPBitmapHEEP[6];   //[nElectron]
  Bool_t          Electron_convVeto[6];   //[nElectron]
  Bool_t          Electron_cutBased_HEEP[6];   //[nElectron]
  Bool_t          Electron_isPFcand[6];   //[nElectron]
  UChar_t         Electron_jetNDauCharged[6];   //[nElectron]
  UChar_t         Electron_lostHits[6];   //[nElectron]
  Bool_t          Electron_mvaFall17V2Iso_WP80[6];   //[nElectron]
  Bool_t          Electron_mvaFall17V2Iso_WP90[6];   //[nElectron]
  Bool_t          Electron_mvaFall17V2Iso_WPL[6];   //[nElectron]
  Bool_t          Electron_mvaFall17V2noIso_WP80[6];   //[nElectron]
  Bool_t          Electron_mvaFall17V2noIso_WP90[6];   //[nElectron]
  Bool_t          Electron_mvaFall17V2noIso_WPL[6];   //[nElectron]
  UChar_t         Electron_seedGain[6];   //[nElectron]
  UInt_t          nFatJet;
  Float_t         FatJet_area[4];   //[nFatJet]
  Float_t         FatJet_btagCSVV2[4];   //[nFatJet]
  Float_t         FatJet_btagDDBvLV2[4];   //[nFatJet]
  Float_t         FatJet_btagDDCvBV2[4];   //[nFatJet]
  Float_t         FatJet_btagDDCvLV2[4];   //[nFatJet]
  Float_t         FatJet_btagDeepB[4];   //[nFatJet]
  Float_t         FatJet_btagHbb[4];   //[nFatJet]
  Float_t         FatJet_deepTagMD_H4qvsQCD[4];   //[nFatJet]
  Float_t         FatJet_deepTagMD_HbbvsQCD[4];   //[nFatJet]
  Float_t         FatJet_deepTagMD_TvsQCD[4];   //[nFatJet]
  Float_t         FatJet_deepTagMD_WvsQCD[4];   //[nFatJet]
  Float_t         FatJet_deepTagMD_ZHbbvsQCD[4];   //[nFatJet]
  Float_t         FatJet_deepTagMD_ZHccvsQCD[4];   //[nFatJet]
  Float_t         FatJet_deepTagMD_ZbbvsQCD[4];   //[nFatJet]
  Float_t         FatJet_deepTagMD_ZvsQCD[4];   //[nFatJet]
  Float_t         FatJet_deepTagMD_bbvsLight[4];   //[nFatJet]
  Float_t         FatJet_deepTagMD_ccvsLight[4];   //[nFatJet]
  Float_t         FatJet_deepTag_H[4];   //[nFatJet]
  Float_t         FatJet_deepTag_QCD[4];   //[nFatJet]
  Float_t         FatJet_deepTag_QCDothers[4];   //[nFatJet]
  Float_t         FatJet_deepTag_TvsQCD[4];   //[nFatJet]
  Float_t         FatJet_deepTag_WvsQCD[4];   //[nFatJet]
  Float_t         FatJet_deepTag_ZvsQCD[4];   //[nFatJet]
  Float_t         FatJet_eta[4];   //[nFatJet]
  Float_t         FatJet_mass[4];   //[nFatJet]
  Float_t         FatJet_msoftdrop[4];   //[nFatJet]
  Float_t         FatJet_n2b1[4];   //[nFatJet]
  Float_t         FatJet_n3b1[4];   //[nFatJet]
  Float_t         FatJet_particleNetMD_QCD[4];   //[nFatJet]
  Float_t         FatJet_particleNetMD_Xbb[4];   //[nFatJet]
  Float_t         FatJet_particleNetMD_Xcc[4];   //[nFatJet]
  Float_t         FatJet_particleNetMD_Xqq[4];   //[nFatJet]
  Float_t         FatJet_particleNet_H4qvsQCD[4];   //[nFatJet]
  Float_t         FatJet_particleNet_HbbvsQCD[4];   //[nFatJet]
  Float_t         FatJet_particleNet_HccvsQCD[4];   //[nFatJet]
  Float_t         FatJet_particleNet_QCD[4];   //[nFatJet]
  Float_t         FatJet_particleNet_TvsQCD[4];   //[nFatJet]
  Float_t         FatJet_particleNet_WvsQCD[4];   //[nFatJet]
  Float_t         FatJet_particleNet_ZvsQCD[4];   //[nFatJet]
  Float_t         FatJet_particleNet_mass[4];   //[nFatJet]
  Float_t         FatJet_phi[4];   //[nFatJet]
  Float_t         FatJet_pt[4];   //[nFatJet]
  Float_t         FatJet_rawFactor[4];   //[nFatJet]
  Float_t         FatJet_tau1[4];   //[nFatJet]
  Float_t         FatJet_tau2[4];   //[nFatJet]
  Float_t         FatJet_tau3[4];   //[nFatJet]
  Float_t         FatJet_tau4[4];   //[nFatJet]
  Float_t         FatJet_lsf3[4];   //[nFatJet]
  Int_t           FatJet_jetId[4];   //[nFatJet]
  Int_t           FatJet_subJetIdx1[4];   //[nFatJet]
  Int_t           FatJet_subJetIdx2[4];   //[nFatJet]
  Int_t           FatJet_electronIdx3SJ[4];   //[nFatJet]
  Int_t           FatJet_muonIdx3SJ[4];   //[nFatJet]
  UChar_t         FatJet_nConstituents[4];   //[nFatJet]
  UInt_t          nFsrPhoton;
  Float_t         FsrPhoton_dROverEt2[2];   //[nFsrPhoton]
  Float_t         FsrPhoton_eta[2];   //[nFsrPhoton]
  Float_t         FsrPhoton_phi[2];   //[nFsrPhoton]
  Float_t         FsrPhoton_pt[2];   //[nFsrPhoton]
  Float_t         FsrPhoton_relIso03[2];   //[nFsrPhoton]
  Int_t           FsrPhoton_muonIdx[2];   //[nFsrPhoton]
  UInt_t          nGenJetAK8;
  Float_t         GenJetAK8_eta[7];   //[nGenJetAK8]
  Float_t         GenJetAK8_mass[7];   //[nGenJetAK8]
  Float_t         GenJetAK8_phi[7];   //[nGenJetAK8]
  Float_t         GenJetAK8_pt[7];   //[nGenJetAK8]
  UInt_t          nGenJet;
  Float_t         GenJet_eta[21];   //[nGenJet]
  Float_t         GenJet_mass[21];   //[nGenJet]
  Float_t         GenJet_phi[21];   //[nGenJet]
  Float_t         GenJet_pt[21];   //[nGenJet]
  UInt_t          nGenPart;
  Float_t         GenPart_eta[131];   //[nGenPart]
  Float_t         GenPart_mass[131];   //[nGenPart]
  Float_t         GenPart_phi[131];   //[nGenPart]
  Float_t         GenPart_pt[131];   //[nGenPart]
  Int_t           GenPart_genPartIdxMother[131];   //[nGenPart]
  Int_t           GenPart_pdgId[131];   //[nGenPart]
  Int_t           GenPart_status[131];   //[nGenPart]
  Int_t           GenPart_statusFlags[131];   //[nGenPart]
  UInt_t          nSubGenJetAK8;
  Float_t         SubGenJetAK8_eta[14];   //[nSubGenJetAK8]
  Float_t         SubGenJetAK8_mass[14];   //[nSubGenJetAK8]
  Float_t         SubGenJetAK8_phi[14];   //[nSubGenJetAK8]
  Float_t         SubGenJetAK8_pt[14];   //[nSubGenJetAK8]
  Float_t         Generator_binvar;
  Float_t         Generator_scalePDF;
  Float_t         Generator_weight;
  Float_t         Generator_x1;
  Float_t         Generator_x2;
  Float_t         Generator_xpdf1;
  Float_t         Generator_xpdf2;
  Int_t           Generator_id1;
  Int_t           Generator_id2;
  Float_t         GenVtx_x;
  Float_t         GenVtx_y;
  Float_t         GenVtx_z;
  UInt_t          nGenVisTau;
  Float_t         GenVisTau_eta[3];   //[nGenVisTau]
  Float_t         GenVisTau_mass[3];   //[nGenVisTau]
  Float_t         GenVisTau_phi[3];   //[nGenVisTau]
  Float_t         GenVisTau_pt[3];   //[nGenVisTau]
  Int_t           GenVisTau_charge[3];   //[nGenVisTau]
  Int_t           GenVisTau_genPartIdxMother[3];   //[nGenVisTau]
  Int_t           GenVisTau_status[3];   //[nGenVisTau]
  Float_t         genWeight;
  Float_t         LHEWeight_originalXWGTUP;
  UInt_t          nLHEPdfWeight;
  Float_t         LHEPdfWeight[103];   //[nLHEPdfWeight]
  UInt_t          nLHEReweightingWeight;
  Float_t         LHEReweightingWeight[1];   //[nLHEReweightingWeight]
  UInt_t          nLHEScaleWeight;
  Float_t         LHEScaleWeight[8];   //[nLHEScaleWeight]
  UInt_t          nPSWeight;
  Float_t         PSWeight[4];   //[nPSWeight]
  UInt_t          nIsoTrack;
  Float_t         IsoTrack_dxy[8];   //[nIsoTrack]
  Float_t         IsoTrack_dz[8];   //[nIsoTrack]
  Float_t         IsoTrack_eta[8];   //[nIsoTrack]
  Float_t         IsoTrack_pfRelIso03_all[8];   //[nIsoTrack]
  Float_t         IsoTrack_pfRelIso03_chg[8];   //[nIsoTrack]
  Float_t         IsoTrack_phi[8];   //[nIsoTrack]
  Float_t         IsoTrack_pt[8];   //[nIsoTrack]
  Float_t         IsoTrack_miniPFRelIso_all[8];   //[nIsoTrack]
  Float_t         IsoTrack_miniPFRelIso_chg[8];   //[nIsoTrack]
  Int_t           IsoTrack_charge[8];   //[nIsoTrack]
  Int_t           IsoTrack_fromPV[8];   //[nIsoTrack]
  Int_t           IsoTrack_pdgId[8];   //[nIsoTrack]
  Bool_t          IsoTrack_isHighPurityTrack[8];   //[nIsoTrack]
  Bool_t          IsoTrack_isPFcand[8];   //[nIsoTrack]
  Bool_t          IsoTrack_isFromLostTrack[8];   //[nIsoTrack]
  UInt_t          nJet;
  Float_t         Jet_area[22];   //[nJet]
  Float_t         Jet_btagCSVV2[22];   //[nJet]
  Float_t         Jet_btagDeepB[22];   //[nJet]
  Float_t         Jet_btagDeepCvB[22];   //[nJet]
  Float_t         Jet_btagDeepCvL[22];   //[nJet]
  Float_t         Jet_btagDeepFlavB[22];   //[nJet]
  Float_t         Jet_btagDeepFlavCvB[22];   //[nJet]
  Float_t         Jet_btagDeepFlavCvL[22];   //[nJet]
  Float_t         Jet_btagDeepFlavQG[22];   //[nJet]
  Float_t         Jet_chEmEF[22];   //[nJet]
  Float_t         Jet_chFPV0EF[22];   //[nJet]
  Float_t         Jet_chHEF[22];   //[nJet]
  Float_t         Jet_eta[22];   //[nJet]
  Float_t         Jet_hfsigmaEtaEta[22];   //[nJet]
  Float_t         Jet_hfsigmaPhiPhi[22];   //[nJet]
  Float_t         Jet_mass[22];   //[nJet]
  Float_t         Jet_muEF[22];   //[nJet]
  Float_t         Jet_muonSubtrFactor[22];   //[nJet]
  Float_t         Jet_neEmEF[22];   //[nJet]
  Float_t         Jet_neHEF[22];   //[nJet]
  Float_t         Jet_phi[22];   //[nJet]
  Float_t         Jet_pt[22];   //[nJet]
  Float_t         Jet_puIdDisc[22];   //[nJet]
  Float_t         Jet_qgl[22];   //[nJet]
  Float_t         Jet_rawFactor[22];   //[nJet]
  Float_t         Jet_bRegCorr[22];   //[nJet]
  Float_t         Jet_bRegRes[22];   //[nJet]
  Float_t         Jet_cRegCorr[22];   //[nJet]
  Float_t         Jet_cRegRes[22];   //[nJet]
  Int_t           Jet_electronIdx1[22];   //[nJet]
  Int_t           Jet_electronIdx2[22];   //[nJet]
  Int_t           Jet_hfadjacentEtaStripsSize[22];   //[nJet]
  Int_t           Jet_hfcentralEtaStripSize[22];   //[nJet]
  Int_t           Jet_jetId[22];   //[nJet]
  Int_t           Jet_muonIdx1[22];   //[nJet]
  Int_t           Jet_muonIdx2[22];   //[nJet]
  Int_t           Jet_nElectrons[22];   //[nJet]
  Int_t           Jet_nMuons[22];   //[nJet]
  Int_t           Jet_puId[22];   //[nJet]
  UChar_t         Jet_nConstituents[22];   //[nJet]
  Float_t         L1PreFiringWeight_Dn;
  Float_t         L1PreFiringWeight_ECAL_Dn;
  Float_t         L1PreFiringWeight_ECAL_Nom;
  Float_t         L1PreFiringWeight_ECAL_Up;
  Float_t         L1PreFiringWeight_Muon_Nom;
  Float_t         L1PreFiringWeight_Muon_StatDn;
  Float_t         L1PreFiringWeight_Muon_StatUp;
  Float_t         L1PreFiringWeight_Muon_SystDn;
  Float_t         L1PreFiringWeight_Muon_SystUp;
  Float_t         L1PreFiringWeight_Nom;
  Float_t         L1PreFiringWeight_Up;
  Float_t         LHE_HT;
  Float_t         LHE_HTIncoming;
  Float_t         LHE_Vpt;
  Float_t         LHE_AlphaS;
  UChar_t         LHE_Njets;
  UChar_t         LHE_Nb;
  UChar_t         LHE_Nc;
  UChar_t         LHE_Nuds;
  UChar_t         LHE_Nglu;
  UChar_t         LHE_NpNLO;
  UChar_t         LHE_NpLO;
  UInt_t          nLHEPart;
  Float_t         LHEPart_pt[7];   //[nLHEPart]
  Float_t         LHEPart_eta[7];   //[nLHEPart]
  Float_t         LHEPart_phi[7];   //[nLHEPart]
  Float_t         LHEPart_mass[7];   //[nLHEPart]
  Float_t         LHEPart_incomingpz[7];   //[nLHEPart]
  Int_t           LHEPart_pdgId[7];   //[nLHEPart]
  Int_t           LHEPart_status[7];   //[nLHEPart]
  Int_t           LHEPart_spin[7];   //[nLHEPart]
  UInt_t          nLowPtElectron;
  Float_t         LowPtElectron_ID[7];   //[nLowPtElectron]
  Float_t         LowPtElectron_convVtxRadius[7];   //[nLowPtElectron]
  Float_t         LowPtElectron_deltaEtaSC[7];   //[nLowPtElectron]
  Float_t         LowPtElectron_dxy[7];   //[nLowPtElectron]
  Float_t         LowPtElectron_dxyErr[7];   //[nLowPtElectron]
  Float_t         LowPtElectron_dz[7];   //[nLowPtElectron]
  Float_t         LowPtElectron_dzErr[7];   //[nLowPtElectron]
  Float_t         LowPtElectron_eInvMinusPInv[7];   //[nLowPtElectron]
  Float_t         LowPtElectron_embeddedID[7];   //[nLowPtElectron]
  Float_t         LowPtElectron_energyErr[7];   //[nLowPtElectron]
  Float_t         LowPtElectron_eta[7];   //[nLowPtElectron]
  Float_t         LowPtElectron_hoe[7];   //[nLowPtElectron]
  Float_t         LowPtElectron_mass[7];   //[nLowPtElectron]
  Float_t         LowPtElectron_miniPFRelIso_all[7];   //[nLowPtElectron]
  Float_t         LowPtElectron_miniPFRelIso_chg[7];   //[nLowPtElectron]
  Float_t         LowPtElectron_phi[7];   //[nLowPtElectron]
  Float_t         LowPtElectron_pt[7];   //[nLowPtElectron]
  Float_t         LowPtElectron_ptbiased[7];   //[nLowPtElectron]
  Float_t         LowPtElectron_r9[7];   //[nLowPtElectron]
  Float_t         LowPtElectron_scEtOverPt[7];   //[nLowPtElectron]
  Float_t         LowPtElectron_sieie[7];   //[nLowPtElectron]
  Float_t         LowPtElectron_unbiased[7];   //[nLowPtElectron]
  Int_t           LowPtElectron_charge[7];   //[nLowPtElectron]
  Int_t           LowPtElectron_convWP[7];   //[nLowPtElectron]
  Int_t           LowPtElectron_pdgId[7];   //[nLowPtElectron]
  Bool_t          LowPtElectron_convVeto[7];   //[nLowPtElectron]
  UChar_t         LowPtElectron_lostHits[7];   //[nLowPtElectron]
  Float_t         GenMET_phi;
  Float_t         GenMET_pt;
  Float_t         MET_MetUnclustEnUpDeltaX;
  Float_t         MET_MetUnclustEnUpDeltaY;
  Float_t         MET_covXX;
  Float_t         MET_covXY;
  Float_t         MET_covYY;
  Float_t         MET_phi;
  Float_t         MET_pt;
  Float_t         MET_significance;
  Float_t         MET_sumEt;
  Float_t         MET_sumPtUnclustered;
  UInt_t          nMuon;
  Float_t         Muon_dxy[11];   //[nMuon]
  Float_t         Muon_dxyErr[11];   //[nMuon]
  Float_t         Muon_dxybs[11];   //[nMuon]
  Float_t         Muon_dz[11];   //[nMuon]
  Float_t         Muon_dzErr[11];   //[nMuon]
  Float_t         Muon_eta[11];   //[nMuon]
  Float_t         Muon_ip3d[11];   //[nMuon]
  Float_t         Muon_jetPtRelv2[11];   //[nMuon]
  Float_t         Muon_jetRelIso[11];   //[nMuon]
  Float_t         Muon_mass[11];   //[nMuon]
  Float_t         Muon_miniPFRelIso_all[11];   //[nMuon]
  Float_t         Muon_miniPFRelIso_chg[11];   //[nMuon]
  Float_t         Muon_pfRelIso03_all[11];   //[nMuon]
  Float_t         Muon_pfRelIso03_chg[11];   //[nMuon]
  Float_t         Muon_pfRelIso04_all[11];   //[nMuon]
  Float_t         Muon_phi[11];   //[nMuon]
  Float_t         Muon_pt[11];   //[nMuon]
  Float_t         Muon_ptErr[11];   //[nMuon]
  Float_t         Muon_segmentComp[11];   //[nMuon]
  Float_t         Muon_sip3d[11];   //[nMuon]
  Float_t         Muon_softMva[11];   //[nMuon]
  Float_t         Muon_tkRelIso[11];   //[nMuon]
  Float_t         Muon_tunepRelPt[11];   //[nMuon]
  Float_t         Muon_mvaLowPt[11];   //[nMuon]
  Float_t         Muon_mvaTTH[11];   //[nMuon]
  Int_t           Muon_charge[11];   //[nMuon]
  Int_t           Muon_jetIdx[11];   //[nMuon]
  Int_t           Muon_nStations[11];   //[nMuon]
  Int_t           Muon_nTrackerLayers[11];   //[nMuon]
  Int_t           Muon_pdgId[11];   //[nMuon]
  Int_t           Muon_tightCharge[11];   //[nMuon]
  Int_t           Muon_fsrPhotonIdx[11];   //[nMuon]
  UChar_t         Muon_highPtId[11];   //[nMuon]
  Bool_t          Muon_highPurity[11];   //[nMuon]
  Bool_t          Muon_inTimeMuon[11];   //[nMuon]
  Bool_t          Muon_isGlobal[11];   //[nMuon]
  Bool_t          Muon_isPFcand[11];   //[nMuon]
  Bool_t          Muon_isStandalone[11];   //[nMuon]
  Bool_t          Muon_isTracker[11];   //[nMuon]
  UChar_t         Muon_jetNDauCharged[11];   //[nMuon]
  Bool_t          Muon_looseId[11];   //[nMuon]
  Bool_t          Muon_mediumId[11];   //[nMuon]
  Bool_t          Muon_mediumPromptId[11];   //[nMuon]
  UChar_t         Muon_miniIsoId[11];   //[nMuon]
  UChar_t         Muon_multiIsoId[11];   //[nMuon]
  UChar_t         Muon_mvaId[11];   //[nMuon]
  UChar_t         Muon_mvaLowPtId[11];   //[nMuon]
  UChar_t         Muon_pfIsoId[11];   //[nMuon]
  UChar_t         Muon_puppiIsoId[11];   //[nMuon]
  Bool_t          Muon_softId[11];   //[nMuon]
  Bool_t          Muon_softMvaId[11];   //[nMuon]
  Bool_t          Muon_tightId[11];   //[nMuon]
  UChar_t         Muon_tkIsoId[11];   //[nMuon]
  Bool_t          Muon_triggerIdLoose[11];   //[nMuon]
  UInt_t          nPhoton;
  Float_t         Photon_dEscaleDown[8];   //[nPhoton]
  Float_t         Photon_dEscaleUp[8];   //[nPhoton]
  Float_t         Photon_dEsigmaDown[8];   //[nPhoton]
  Float_t         Photon_dEsigmaUp[8];   //[nPhoton]
  Float_t         Photon_eCorr[8];   //[nPhoton]
  Float_t         Photon_energyErr[8];   //[nPhoton]
  Float_t         Photon_eta[8];   //[nPhoton]
  Float_t         Photon_hoe[8];   //[nPhoton]
  Float_t         Photon_mass[8];   //[nPhoton]
  Float_t         Photon_mvaID[8];   //[nPhoton]
  Float_t         Photon_mvaID_Fall17V1p1[8];   //[nPhoton]
  Float_t         Photon_pfRelIso03_all[8];   //[nPhoton]
  Float_t         Photon_pfRelIso03_chg[8];   //[nPhoton]
  Float_t         Photon_phi[8];   //[nPhoton]
  Float_t         Photon_pt[8];   //[nPhoton]
  Float_t         Photon_r9[8];   //[nPhoton]
  Float_t         Photon_sieie[8];   //[nPhoton]
  Int_t           Photon_charge[8];   //[nPhoton]
  Int_t           Photon_cutBased[8];   //[nPhoton]
  Int_t           Photon_cutBased_Fall17V1Bitmap[8];   //[nPhoton]
  Int_t           Photon_electronIdx[8];   //[nPhoton]
  Int_t           Photon_jetIdx[8];   //[nPhoton]
  Int_t           Photon_pdgId[8];   //[nPhoton]
  Int_t           Photon_vidNestedWPBitmap[8];   //[nPhoton]
  Bool_t          Photon_electronVeto[8];   //[nPhoton]
  Bool_t          Photon_isScEtaEB[8];   //[nPhoton]
  Bool_t          Photon_isScEtaEE[8];   //[nPhoton]
  Bool_t          Photon_mvaID_WP80[8];   //[nPhoton]
  Bool_t          Photon_mvaID_WP90[8];   //[nPhoton]
  Bool_t          Photon_pixelSeed[8];   //[nPhoton]
  UChar_t         Photon_seedGain[8];   //[nPhoton]
  Float_t         Pileup_nTrueInt;
  Float_t         Pileup_pudensity;
  Float_t         Pileup_gpudensity;
  Int_t           Pileup_nPU;
  Int_t           Pileup_sumEOOT;
  Int_t           Pileup_sumLOOT;
  Float_t         PuppiMET_phi;
  Float_t         PuppiMET_phiJERDown;
  Float_t         PuppiMET_phiJERUp;
  Float_t         PuppiMET_phiJESDown;
  Float_t         PuppiMET_phiJESUp;
  Float_t         PuppiMET_phiUnclusteredDown;
  Float_t         PuppiMET_phiUnclusteredUp;
  Float_t         PuppiMET_pt;
  Float_t         PuppiMET_ptJERDown;
  Float_t         PuppiMET_ptJERUp;
  Float_t         PuppiMET_ptJESDown;
  Float_t         PuppiMET_ptJESUp;
  Float_t         PuppiMET_ptUnclusteredDown;
  Float_t         PuppiMET_ptUnclusteredUp;
  Float_t         PuppiMET_sumEt;
  Float_t         RawMET_phi;
  Float_t         RawMET_pt;
  Float_t         RawMET_sumEt;
  Float_t         RawPuppiMET_phi;
  Float_t         RawPuppiMET_pt;
  Float_t         RawPuppiMET_sumEt;
  Float_t         fixedGridRhoFastjetAll;
  Float_t         fixedGridRhoFastjetCentral;
  Float_t         fixedGridRhoFastjetCentralCalo;
  Float_t         fixedGridRhoFastjetCentralChargedPileUp;
  Float_t         fixedGridRhoFastjetCentralNeutral;
  UInt_t          nGenDressedLepton;
  Float_t         GenDressedLepton_eta[2];   //[nGenDressedLepton]
  Float_t         GenDressedLepton_mass[2];   //[nGenDressedLepton]
  Float_t         GenDressedLepton_phi[2];   //[nGenDressedLepton]
  Float_t         GenDressedLepton_pt[2];   //[nGenDressedLepton]
  Int_t           GenDressedLepton_pdgId[2];   //[nGenDressedLepton]
  Bool_t          GenDressedLepton_hasTauAnc[2];   //[nGenDressedLepton]
  UInt_t          nGenIsolatedPhoton;
  Float_t         GenIsolatedPhoton_eta[2];   //[nGenIsolatedPhoton]
  Float_t         GenIsolatedPhoton_mass[2];   //[nGenIsolatedPhoton]
  Float_t         GenIsolatedPhoton_phi[2];   //[nGenIsolatedPhoton]
  Float_t         GenIsolatedPhoton_pt[2];   //[nGenIsolatedPhoton]
  UInt_t          nSoftActivityJet;
  Float_t         SoftActivityJet_eta[6];   //[nSoftActivityJet]
  Float_t         SoftActivityJet_phi[6];   //[nSoftActivityJet]
  Float_t         SoftActivityJet_pt[6];   //[nSoftActivityJet]
  Float_t         SoftActivityJetHT;
  Float_t         SoftActivityJetHT10;
  Float_t         SoftActivityJetHT2;
  Float_t         SoftActivityJetHT5;
  Int_t           SoftActivityJetNjets10;
  Int_t           SoftActivityJetNjets2;
  Int_t           SoftActivityJetNjets5;
  UInt_t          nSubJet;
  Float_t         SubJet_btagCSVV2[8];   //[nSubJet]
  Float_t         SubJet_btagDeepB[8];   //[nSubJet]
  Float_t         SubJet_eta[8];   //[nSubJet]
  Float_t         SubJet_mass[8];   //[nSubJet]
  Float_t         SubJet_n2b1[8];   //[nSubJet]
  Float_t         SubJet_n3b1[8];   //[nSubJet]
  Float_t         SubJet_phi[8];   //[nSubJet]
  Float_t         SubJet_pt[8];   //[nSubJet]
  Float_t         SubJet_rawFactor[8];   //[nSubJet]
  Float_t         SubJet_tau1[8];   //[nSubJet]
  Float_t         SubJet_tau2[8];   //[nSubJet]
  Float_t         SubJet_tau3[8];   //[nSubJet]
  Float_t         SubJet_tau4[8];   //[nSubJet]
  UInt_t          nTau;
  Float_t         Tau_chargedIso[5];   //[nTau]
  Float_t         Tau_dxy[5];   //[nTau]
  Float_t         Tau_dz[5];   //[nTau]
  Float_t         Tau_eta[5];   //[nTau]
  Float_t         Tau_leadTkDeltaEta[5];   //[nTau]
  Float_t         Tau_leadTkDeltaPhi[5];   //[nTau]
  Float_t         Tau_leadTkPtOverTauPt[5];   //[nTau]
  Float_t         Tau_mass[5];   //[nTau]
  Float_t         Tau_neutralIso[5];   //[nTau]
  Float_t         Tau_phi[5];   //[nTau]
  Float_t         Tau_photonsOutsideSignalCone[5];   //[nTau]
  Float_t         Tau_pt[5];   //[nTau]
  Float_t         Tau_puCorr[5];   //[nTau]
  Float_t         Tau_rawDeepTau2017v2p1VSe[5];   //[nTau]
  Float_t         Tau_rawDeepTau2017v2p1VSjet[5];   //[nTau]
  Float_t         Tau_rawDeepTau2017v2p1VSmu[5];   //[nTau]
  Float_t         Tau_rawIso[5];   //[nTau]
  Float_t         Tau_rawIsodR03[5];   //[nTau]
  Int_t           Tau_charge[5];   //[nTau]
  Int_t           Tau_decayMode[5];   //[nTau]
  Int_t           Tau_jetIdx[5];   //[nTau]
  Bool_t          Tau_idAntiEleDeadECal[5];   //[nTau]
  UChar_t         Tau_idAntiMu[5];   //[nTau]
  Bool_t          Tau_idDecayModeOldDMs[5];   //[nTau]
  UChar_t         Tau_idDeepTau2017v2p1VSe[5];   //[nTau]
  UChar_t         Tau_idDeepTau2017v2p1VSjet[5];   //[nTau]
  UChar_t         Tau_idDeepTau2017v2p1VSmu[5];   //[nTau]
  Float_t         TkMET_phi;
  Float_t         TkMET_pt;
  Float_t         TkMET_sumEt;
  UInt_t          nTrigObj;
  Float_t         TrigObj_pt[37];   //[nTrigObj]
  Float_t         TrigObj_eta[37];   //[nTrigObj]
  Float_t         TrigObj_phi[37];   //[nTrigObj]
  Float_t         TrigObj_l1pt[37];   //[nTrigObj]
  Float_t         TrigObj_l1pt_2[37];   //[nTrigObj]
  Float_t         TrigObj_l2pt[37];   //[nTrigObj]
  Int_t           TrigObj_id[37];   //[nTrigObj]
  Int_t           TrigObj_l1iso[37];   //[nTrigObj]
  Int_t           TrigObj_l1charge[37];   //[nTrigObj]
  Int_t           TrigObj_filterBits[37];   //[nTrigObj]
  Int_t           genTtbarId;
  UInt_t          nOtherPV;
  Float_t         OtherPV_z[3];   //[nOtherPV]
  Float_t         PV_ndof;
  Float_t         PV_x;
  Float_t         PV_y;
  Float_t         PV_z;
  Float_t         PV_chi2;
  Float_t         PV_score;
  Int_t           PV_npvs;
  Int_t           PV_npvsGood;
  UInt_t          nSV;
  Float_t         SV_dlen[13];   //[nSV]
  Float_t         SV_dlenSig[13];   //[nSV]
  Float_t         SV_dxy[13];   //[nSV]
  Float_t         SV_dxySig[13];   //[nSV]
  Float_t         SV_pAngle[13];   //[nSV]
  Int_t           SV_charge[13];   //[nSV]
  Int_t           boostedTau_genPartIdx[3];   //[nboostedTau]
  UChar_t         boostedTau_genPartFlav[3];   //[nboostedTau]
  Int_t           Electron_genPartIdx[6];   //[nElectron]
  UChar_t         Electron_genPartFlav[6];   //[nElectron]
  Int_t           FatJet_genJetAK8Idx[4];   //[nFatJet]
  Int_t           FatJet_hadronFlavour[4];   //[nFatJet]
  UChar_t         FatJet_nBHadrons[4];   //[nFatJet]
  UChar_t         FatJet_nCHadrons[4];   //[nFatJet]
  Int_t           GenJetAK8_partonFlavour[7];   //[nGenJetAK8]
  UChar_t         GenJetAK8_hadronFlavour[7];   //[nGenJetAK8]
  Int_t           GenJet_partonFlavour[21];   //[nGenJet]
  UChar_t         GenJet_hadronFlavour[21];   //[nGenJet]
  Float_t         GenVtx_t0;
  Int_t           Jet_genJetIdx[22];   //[nJet]
  Int_t           Jet_hadronFlavour[22];   //[nJet]
  Int_t           Jet_partonFlavour[22];   //[nJet]
  Int_t           LowPtElectron_genPartIdx[7];   //[nLowPtElectron]
  UChar_t         LowPtElectron_genPartFlav[7];   //[nLowPtElectron]
  Int_t           Muon_genPartIdx[11];   //[nMuon]
  UChar_t         Muon_genPartFlav[11];   //[nMuon]
  Int_t           Photon_genPartIdx[8];   //[nPhoton]
  UChar_t         Photon_genPartFlav[8];   //[nPhoton]
  Float_t         MET_fiducialGenPhi;
  Float_t         MET_fiducialGenPt;
  UChar_t         Electron_cleanmask[6];   //[nElectron]
  UChar_t         Jet_cleanmask[22];   //[nJet]
  UChar_t         Muon_cleanmask[11];   //[nMuon]
  UChar_t         Photon_cleanmask[8];   //[nPhoton]
  UChar_t         Tau_cleanmask[5];   //[nTau]
  Int_t           SubJet_hadronFlavour[8];   //[nSubJet]
  UChar_t         SubJet_nBHadrons[8];   //[nSubJet]
  UChar_t         SubJet_nCHadrons[8];   //[nSubJet]
  Float_t         SV_chi2[13];   //[nSV]
  Float_t         SV_eta[13];   //[nSV]
  Float_t         SV_mass[13];   //[nSV]
  Float_t         SV_ndof[13];   //[nSV]
  Float_t         SV_phi[13];   //[nSV]
  Float_t         SV_pt[13];   //[nSV]
  Float_t         SV_x[13];   //[nSV]
  Float_t         SV_y[13];   //[nSV]
  Float_t         SV_z[13];   //[nSV]
  UChar_t         SV_ntracks[13];   //[nSV]
  Int_t           Tau_genPartIdx[5];   //[nTau]
  UChar_t         Tau_genPartFlav[5];   //[nTau]
  Bool_t          Flag_HBHENoiseFilter;
  Bool_t          Flag_HBHENoiseIsoFilter;
  Bool_t          Flag_CSCTightHaloFilter;
  Bool_t          Flag_CSCTightHaloTrkMuUnvetoFilter;
  Bool_t          Flag_CSCTightHalo2015Filter;
  Bool_t          Flag_globalTightHalo2016Filter;
  Bool_t          Flag_globalSuperTightHalo2016Filter;
  Bool_t          Flag_HcalStripHaloFilter;
  Bool_t          Flag_hcalLaserEventFilter;
  Bool_t          Flag_EcalDeadCellTriggerPrimitiveFilter;
  Bool_t          Flag_EcalDeadCellBoundaryEnergyFilter;
  Bool_t          Flag_ecalBadCalibFilter;
  Bool_t          Flag_goodVertices;
  Bool_t          Flag_eeBadScFilter;
  Bool_t          Flag_ecalLaserCorrFilter;
  Bool_t          Flag_trkPOGFilters;
  Bool_t          Flag_chargedHadronTrackResolutionFilter;
  Bool_t          Flag_muonBadTrackFilter;
  Bool_t          Flag_BadChargedCandidateFilter;
  Bool_t          Flag_BadPFMuonFilter;
  Bool_t          Flag_BadPFMuonDzFilter;
  Bool_t          Flag_hfNoisyHitsFilter;
  Bool_t          Flag_BadChargedCandidateSummer16Filter;
  Bool_t          Flag_BadPFMuonSummer16Filter;
  Bool_t          Flag_trkPOG_manystripclus53X;
  Bool_t          Flag_trkPOG_toomanystripclus53X;
  Bool_t          Flag_trkPOG_logErrorTooManyClusters;
  Bool_t          Flag_METFilters;
  Bool_t          L1Reco_step;
  Bool_t          L1simulation_step;

  // List of branches
  TBranch        *b_run;   //!
  TBranch        *b_luminosityBlock;   //!
  TBranch        *b_event;   //!
  TBranch        *b_HTXS_Higgs_pt;   //!
  TBranch        *b_HTXS_Higgs_y;   //!
  TBranch        *b_HTXS_stage1_1_cat_pTjet25GeV;   //!
  TBranch        *b_HTXS_stage1_1_cat_pTjet30GeV;   //!
  TBranch        *b_HTXS_stage1_1_fine_cat_pTjet25GeV;   //!
  TBranch        *b_HTXS_stage1_1_fine_cat_pTjet30GeV;   //!
  TBranch        *b_HTXS_stage1_2_cat_pTjet25GeV;   //!
  TBranch        *b_HTXS_stage1_2_cat_pTjet30GeV;   //!
  TBranch        *b_HTXS_stage1_2_fine_cat_pTjet25GeV;   //!
  TBranch        *b_HTXS_stage1_2_fine_cat_pTjet30GeV;   //!
  TBranch        *b_HTXS_stage_0;   //!
  TBranch        *b_HTXS_stage_1_pTjet25;   //!
  TBranch        *b_HTXS_stage_1_pTjet30;   //!
  TBranch        *b_HTXS_njets25;   //!
  TBranch        *b_HTXS_njets30;   //!
  TBranch        *b_nboostedTau;   //!
  TBranch        *b_boostedTau_chargedIso;   //!
  TBranch        *b_boostedTau_eta;   //!
  TBranch        *b_boostedTau_leadTkDeltaEta;   //!
  TBranch        *b_boostedTau_leadTkDeltaPhi;   //!
  TBranch        *b_boostedTau_leadTkPtOverTauPt;   //!
  TBranch        *b_boostedTau_mass;   //!
  TBranch        *b_boostedTau_neutralIso;   //!
  TBranch        *b_boostedTau_phi;   //!
  TBranch        *b_boostedTau_photonsOutsideSignalCone;   //!
  TBranch        *b_boostedTau_pt;   //!
  TBranch        *b_boostedTau_puCorr;   //!
  TBranch        *b_boostedTau_rawAntiEle2018;   //!
  TBranch        *b_boostedTau_rawIso;   //!
  TBranch        *b_boostedTau_rawIsodR03;   //!
  TBranch        *b_boostedTau_rawMVAnewDM2017v2;   //!
  TBranch        *b_boostedTau_rawMVAoldDM2017v2;   //!
  TBranch        *b_boostedTau_rawMVAoldDMdR032017v2;   //!
  TBranch        *b_boostedTau_charge;   //!
  TBranch        *b_boostedTau_decayMode;   //!
  TBranch        *b_boostedTau_jetIdx;   //!
  TBranch        *b_boostedTau_rawAntiEleCat2018;   //!
  TBranch        *b_boostedTau_idAntiEle2018;   //!
  TBranch        *b_boostedTau_idAntiMu;   //!
  TBranch        *b_boostedTau_idMVAnewDM2017v2;   //!
  TBranch        *b_boostedTau_idMVAoldDM2017v2;   //!
  TBranch        *b_boostedTau_idMVAoldDMdR032017v2;   //!
  TBranch        *b_btagWeight_CSVV2;   //!
  TBranch        *b_btagWeight_DeepCSVB;   //!
  TBranch        *b_CaloMET_phi;   //!
  TBranch        *b_CaloMET_pt;   //!
  TBranch        *b_CaloMET_sumEt;   //!
  TBranch        *b_ChsMET_phi;   //!
  TBranch        *b_ChsMET_pt;   //!
  TBranch        *b_ChsMET_sumEt;   //!
  TBranch        *b_nCorrT1METJet;   //!
  TBranch        *b_CorrT1METJet_area;   //!
  TBranch        *b_CorrT1METJet_eta;   //!
  TBranch        *b_CorrT1METJet_muonSubtrFactor;   //!
  TBranch        *b_CorrT1METJet_phi;   //!
  TBranch        *b_CorrT1METJet_rawPt;   //!
  TBranch        *b_DeepMETResolutionTune_phi;   //!
  TBranch        *b_DeepMETResolutionTune_pt;   //!
  TBranch        *b_DeepMETResponseTune_phi;   //!
  TBranch        *b_DeepMETResponseTune_pt;   //!
  TBranch        *b_nElectron;   //!
  TBranch        *b_Electron_dEscaleDown;   //!
  TBranch        *b_Electron_dEscaleUp;   //!
  TBranch        *b_Electron_dEsigmaDown;   //!
  TBranch        *b_Electron_dEsigmaUp;   //!
  TBranch        *b_Electron_deltaEtaSC;   //!
  TBranch        *b_Electron_dr03EcalRecHitSumEt;   //!
  TBranch        *b_Electron_dr03HcalDepth1TowerSumEt;   //!
  TBranch        *b_Electron_dr03TkSumPt;   //!
  TBranch        *b_Electron_dr03TkSumPtHEEP;   //!
  TBranch        *b_Electron_dxy;   //!
  TBranch        *b_Electron_dxyErr;   //!
  TBranch        *b_Electron_dz;   //!
  TBranch        *b_Electron_dzErr;   //!
  TBranch        *b_Electron_eCorr;   //!
  TBranch        *b_Electron_eInvMinusPInv;   //!
  TBranch        *b_Electron_energyErr;   //!
  TBranch        *b_Electron_eta;   //!
  TBranch        *b_Electron_hoe;   //!
  TBranch        *b_Electron_ip3d;   //!
  TBranch        *b_Electron_jetPtRelv2;   //!
  TBranch        *b_Electron_jetRelIso;   //!
  TBranch        *b_Electron_mass;   //!
  TBranch        *b_Electron_miniPFRelIso_all;   //!
  TBranch        *b_Electron_miniPFRelIso_chg;   //!
  TBranch        *b_Electron_mvaFall17V2Iso;   //!
  TBranch        *b_Electron_mvaFall17V2noIso;   //!
  TBranch        *b_Electron_pfRelIso03_all;   //!
  TBranch        *b_Electron_pfRelIso03_chg;   //!
  TBranch        *b_Electron_phi;   //!
  TBranch        *b_Electron_pt;   //!
  TBranch        *b_Electron_r9;   //!
  TBranch        *b_Electron_scEtOverPt;   //!
  TBranch        *b_Electron_sieie;   //!
  TBranch        *b_Electron_sip3d;   //!
  TBranch        *b_Electron_mvaTTH;   //!
  TBranch        *b_Electron_charge;   //!
  TBranch        *b_Electron_cutBased;   //!
  TBranch        *b_Electron_jetIdx;   //!
  TBranch        *b_Electron_pdgId;   //!
  TBranch        *b_Electron_photonIdx;   //!
  TBranch        *b_Electron_tightCharge;   //!
  TBranch        *b_Electron_vidNestedWPBitmap;   //!
  TBranch        *b_Electron_vidNestedWPBitmapHEEP;   //!
  TBranch        *b_Electron_convVeto;   //!
  TBranch        *b_Electron_cutBased_HEEP;   //!
  TBranch        *b_Electron_isPFcand;   //!
  TBranch        *b_Electron_jetNDauCharged;   //!
  TBranch        *b_Electron_lostHits;   //!
  TBranch        *b_Electron_mvaFall17V2Iso_WP80;   //!
  TBranch        *b_Electron_mvaFall17V2Iso_WP90;   //!
  TBranch        *b_Electron_mvaFall17V2Iso_WPL;   //!
  TBranch        *b_Electron_mvaFall17V2noIso_WP80;   //!
  TBranch        *b_Electron_mvaFall17V2noIso_WP90;   //!
  TBranch        *b_Electron_mvaFall17V2noIso_WPL;   //!
  TBranch        *b_Electron_seedGain;   //!
  TBranch        *b_nFatJet;   //!
  TBranch        *b_FatJet_area;   //!
  TBranch        *b_FatJet_btagCSVV2;   //!
  TBranch        *b_FatJet_btagDDBvLV2;   //!
  TBranch        *b_FatJet_btagDDCvBV2;   //!
  TBranch        *b_FatJet_btagDDCvLV2;   //!
  TBranch        *b_FatJet_btagDeepB;   //!
  TBranch        *b_FatJet_btagHbb;   //!
  TBranch        *b_FatJet_deepTagMD_H4qvsQCD;   //!
  TBranch        *b_FatJet_deepTagMD_HbbvsQCD;   //!
  TBranch        *b_FatJet_deepTagMD_TvsQCD;   //!
  TBranch        *b_FatJet_deepTagMD_WvsQCD;   //!
  TBranch        *b_FatJet_deepTagMD_ZHbbvsQCD;   //!
  TBranch        *b_FatJet_deepTagMD_ZHccvsQCD;   //!
  TBranch        *b_FatJet_deepTagMD_ZbbvsQCD;   //!
  TBranch        *b_FatJet_deepTagMD_ZvsQCD;   //!
  TBranch        *b_FatJet_deepTagMD_bbvsLight;   //!
  TBranch        *b_FatJet_deepTagMD_ccvsLight;   //!
  TBranch        *b_FatJet_deepTag_H;   //!
  TBranch        *b_FatJet_deepTag_QCD;   //!
  TBranch        *b_FatJet_deepTag_QCDothers;   //!
  TBranch        *b_FatJet_deepTag_TvsQCD;   //!
  TBranch        *b_FatJet_deepTag_WvsQCD;   //!
  TBranch        *b_FatJet_deepTag_ZvsQCD;   //!
  TBranch        *b_FatJet_eta;   //!
  TBranch        *b_FatJet_mass;   //!
  TBranch        *b_FatJet_msoftdrop;   //!
  TBranch        *b_FatJet_n2b1;   //!
  TBranch        *b_FatJet_n3b1;   //!
  TBranch        *b_FatJet_particleNetMD_QCD;   //!
  TBranch        *b_FatJet_particleNetMD_Xbb;   //!
  TBranch        *b_FatJet_particleNetMD_Xcc;   //!
  TBranch        *b_FatJet_particleNetMD_Xqq;   //!
  TBranch        *b_FatJet_particleNet_H4qvsQCD;   //!
  TBranch        *b_FatJet_particleNet_HbbvsQCD;   //!
  TBranch        *b_FatJet_particleNet_HccvsQCD;   //!
  TBranch        *b_FatJet_particleNet_QCD;   //!
  TBranch        *b_FatJet_particleNet_TvsQCD;   //!
  TBranch        *b_FatJet_particleNet_WvsQCD;   //!
  TBranch        *b_FatJet_particleNet_ZvsQCD;   //!
  TBranch        *b_FatJet_particleNet_mass;   //!
  TBranch        *b_FatJet_phi;   //!
  TBranch        *b_FatJet_pt;   //!
  TBranch        *b_FatJet_rawFactor;   //!
  TBranch        *b_FatJet_tau1;   //!
  TBranch        *b_FatJet_tau2;   //!
  TBranch        *b_FatJet_tau3;   //!
  TBranch        *b_FatJet_tau4;   //!
  TBranch        *b_FatJet_lsf3;   //!
  TBranch        *b_FatJet_jetId;   //!
  TBranch        *b_FatJet_subJetIdx1;   //!
  TBranch        *b_FatJet_subJetIdx2;   //!
  TBranch        *b_FatJet_electronIdx3SJ;   //!
  TBranch        *b_FatJet_muonIdx3SJ;   //!
  TBranch        *b_FatJet_nConstituents;   //!
  TBranch        *b_nFsrPhoton;   //!
  TBranch        *b_FsrPhoton_dROverEt2;   //!
  TBranch        *b_FsrPhoton_eta;   //!
  TBranch        *b_FsrPhoton_phi;   //!
  TBranch        *b_FsrPhoton_pt;   //!
  TBranch        *b_FsrPhoton_relIso03;   //!
  TBranch        *b_FsrPhoton_muonIdx;   //!
  TBranch        *b_nGenJetAK8;   //!
  TBranch        *b_GenJetAK8_eta;   //!
  TBranch        *b_GenJetAK8_mass;   //!
  TBranch        *b_GenJetAK8_phi;   //!
  TBranch        *b_GenJetAK8_pt;   //!
  TBranch        *b_nGenJet;   //!
  TBranch        *b_GenJet_eta;   //!
  TBranch        *b_GenJet_mass;   //!
  TBranch        *b_GenJet_phi;   //!
  TBranch        *b_GenJet_pt;   //!
  TBranch        *b_nGenPart;   //!
  TBranch        *b_GenPart_eta;   //!
  TBranch        *b_GenPart_mass;   //!
  TBranch        *b_GenPart_phi;   //!
  TBranch        *b_GenPart_pt;   //!
  TBranch        *b_GenPart_genPartIdxMother;   //!
  TBranch        *b_GenPart_pdgId;   //!
  TBranch        *b_GenPart_status;   //!
  TBranch        *b_GenPart_statusFlags;   //!
  TBranch        *b_nSubGenJetAK8;   //!
  TBranch        *b_SubGenJetAK8_eta;   //!
  TBranch        *b_SubGenJetAK8_mass;   //!
  TBranch        *b_SubGenJetAK8_phi;   //!
  TBranch        *b_SubGenJetAK8_pt;   //!
  TBranch        *b_Generator_binvar;   //!
  TBranch        *b_Generator_scalePDF;   //!
  TBranch        *b_Generator_weight;   //!
  TBranch        *b_Generator_x1;   //!
  TBranch        *b_Generator_x2;   //!
  TBranch        *b_Generator_xpdf1;   //!
  TBranch        *b_Generator_xpdf2;   //!
  TBranch        *b_Generator_id1;   //!
  TBranch        *b_Generator_id2;   //!
  TBranch        *b_GenVtx_x;   //!
  TBranch        *b_GenVtx_y;   //!
  TBranch        *b_GenVtx_z;   //!
  TBranch        *b_nGenVisTau;   //!
  TBranch        *b_GenVisTau_eta;   //!
  TBranch        *b_GenVisTau_mass;   //!
  TBranch        *b_GenVisTau_phi;   //!
  TBranch        *b_GenVisTau_pt;   //!
  TBranch        *b_GenVisTau_charge;   //!
  TBranch        *b_GenVisTau_genPartIdxMother;   //!
  TBranch        *b_GenVisTau_status;   //!
  TBranch        *b_genWeight;   //!
  TBranch        *b_LHEWeight_originalXWGTUP;   //!
  TBranch        *b_nLHEPdfWeight;   //!
  TBranch        *b_LHEPdfWeight;   //!
  TBranch        *b_nLHEReweightingWeight;   //!
  TBranch        *b_LHEReweightingWeight;   //!
  TBranch        *b_nLHEScaleWeight;   //!
  TBranch        *b_LHEScaleWeight;   //!
  TBranch        *b_nPSWeight;   //!
  TBranch        *b_PSWeight;   //!
  TBranch        *b_nIsoTrack;   //!
  TBranch        *b_IsoTrack_dxy;   //!
  TBranch        *b_IsoTrack_dz;   //!
  TBranch        *b_IsoTrack_eta;   //!
  TBranch        *b_IsoTrack_pfRelIso03_all;   //!
  TBranch        *b_IsoTrack_pfRelIso03_chg;   //!
  TBranch        *b_IsoTrack_phi;   //!
  TBranch        *b_IsoTrack_pt;   //!
  TBranch        *b_IsoTrack_miniPFRelIso_all;   //!
  TBranch        *b_IsoTrack_miniPFRelIso_chg;   //!
  TBranch        *b_IsoTrack_charge;   //!
  TBranch        *b_IsoTrack_fromPV;   //!
  TBranch        *b_IsoTrack_pdgId;   //!
  TBranch        *b_IsoTrack_isHighPurityTrack;   //!
  TBranch        *b_IsoTrack_isPFcand;   //!
  TBranch        *b_IsoTrack_isFromLostTrack;   //!
  TBranch        *b_nJet;   //!
  TBranch        *b_Jet_area;   //!
  TBranch        *b_Jet_btagCSVV2;   //!
  TBranch        *b_Jet_btagDeepB;   //!
  TBranch        *b_Jet_btagDeepCvB;   //!
  TBranch        *b_Jet_btagDeepCvL;   //!
  TBranch        *b_Jet_btagDeepFlavB;   //!
  TBranch        *b_Jet_btagDeepFlavCvB;   //!
  TBranch        *b_Jet_btagDeepFlavCvL;   //!
  TBranch        *b_Jet_btagDeepFlavQG;   //!
  TBranch        *b_Jet_chEmEF;   //!
  TBranch        *b_Jet_chFPV0EF;   //!
  TBranch        *b_Jet_chHEF;   //!
  TBranch        *b_Jet_eta;   //!
  TBranch        *b_Jet_hfsigmaEtaEta;   //!
  TBranch        *b_Jet_hfsigmaPhiPhi;   //!
  TBranch        *b_Jet_mass;   //!
  TBranch        *b_Jet_muEF;   //!
  TBranch        *b_Jet_muonSubtrFactor;   //!
  TBranch        *b_Jet_neEmEF;   //!
  TBranch        *b_Jet_neHEF;   //!
  TBranch        *b_Jet_phi;   //!
  TBranch        *b_Jet_pt;   //!
  TBranch        *b_Jet_puIdDisc;   //!
  TBranch        *b_Jet_qgl;   //!
  TBranch        *b_Jet_rawFactor;   //!
  TBranch        *b_Jet_bRegCorr;   //!
  TBranch        *b_Jet_bRegRes;   //!
  TBranch        *b_Jet_cRegCorr;   //!
  TBranch        *b_Jet_cRegRes;   //!
  TBranch        *b_Jet_electronIdx1;   //!
  TBranch        *b_Jet_electronIdx2;   //!
  TBranch        *b_Jet_hfadjacentEtaStripsSize;   //!
  TBranch        *b_Jet_hfcentralEtaStripSize;   //!
  TBranch        *b_Jet_jetId;   //!
  TBranch        *b_Jet_muonIdx1;   //!
  TBranch        *b_Jet_muonIdx2;   //!
  TBranch        *b_Jet_nElectrons;   //!
  TBranch        *b_Jet_nMuons;   //!
  TBranch        *b_Jet_puId;   //!
  TBranch        *b_Jet_nConstituents;   //!
  TBranch        *b_L1PreFiringWeight_Dn;   //!
  TBranch        *b_L1PreFiringWeight_ECAL_Dn;   //!
  TBranch        *b_L1PreFiringWeight_ECAL_Nom;   //!
  TBranch        *b_L1PreFiringWeight_ECAL_Up;   //!
  TBranch        *b_L1PreFiringWeight_Muon_Nom;   //!
  TBranch        *b_L1PreFiringWeight_Muon_StatDn;   //!
  TBranch        *b_L1PreFiringWeight_Muon_StatUp;   //!
  TBranch        *b_L1PreFiringWeight_Muon_SystDn;   //!
  TBranch        *b_L1PreFiringWeight_Muon_SystUp;   //!
  TBranch        *b_L1PreFiringWeight_Nom;   //!
  TBranch        *b_L1PreFiringWeight_Up;   //!
  TBranch        *b_LHE_HT;   //!
  TBranch        *b_LHE_HTIncoming;   //!
  TBranch        *b_LHE_Vpt;   //!
  TBranch        *b_LHE_AlphaS;   //!
  TBranch        *b_LHE_Njets;   //!
  TBranch        *b_LHE_Nb;   //!
  TBranch        *b_LHE_Nc;   //!
  TBranch        *b_LHE_Nuds;   //!
  TBranch        *b_LHE_Nglu;   //!
  TBranch        *b_LHE_NpNLO;   //!
  TBranch        *b_LHE_NpLO;   //!
  TBranch        *b_nLHEPart;   //!
  TBranch        *b_LHEPart_pt;   //!
  TBranch        *b_LHEPart_eta;   //!
  TBranch        *b_LHEPart_phi;   //!
  TBranch        *b_LHEPart_mass;   //!
  TBranch        *b_LHEPart_incomingpz;   //!
  TBranch        *b_LHEPart_pdgId;   //!
  TBranch        *b_LHEPart_status;   //!
  TBranch        *b_LHEPart_spin;   //!
  TBranch        *b_nLowPtElectron;   //!
  TBranch        *b_LowPtElectron_ID;   //!
  TBranch        *b_LowPtElectron_convVtxRadius;   //!
  TBranch        *b_LowPtElectron_deltaEtaSC;   //!
  TBranch        *b_LowPtElectron_dxy;   //!
  TBranch        *b_LowPtElectron_dxyErr;   //!
  TBranch        *b_LowPtElectron_dz;   //!
  TBranch        *b_LowPtElectron_dzErr;   //!
  TBranch        *b_LowPtElectron_eInvMinusPInv;   //!
  TBranch        *b_LowPtElectron_embeddedID;   //!
  TBranch        *b_LowPtElectron_energyErr;   //!
  TBranch        *b_LowPtElectron_eta;   //!
  TBranch        *b_LowPtElectron_hoe;   //!
  TBranch        *b_LowPtElectron_mass;   //!
  TBranch        *b_LowPtElectron_miniPFRelIso_all;   //!
  TBranch        *b_LowPtElectron_miniPFRelIso_chg;   //!
  TBranch        *b_LowPtElectron_phi;   //!
  TBranch        *b_LowPtElectron_pt;   //!
  TBranch        *b_LowPtElectron_ptbiased;   //!
  TBranch        *b_LowPtElectron_r9;   //!
  TBranch        *b_LowPtElectron_scEtOverPt;   //!
  TBranch        *b_LowPtElectron_sieie;   //!
  TBranch        *b_LowPtElectron_unbiased;   //!
  TBranch        *b_LowPtElectron_charge;   //!
  TBranch        *b_LowPtElectron_convWP;   //!
  TBranch        *b_LowPtElectron_pdgId;   //!
  TBranch        *b_LowPtElectron_convVeto;   //!
  TBranch        *b_LowPtElectron_lostHits;   //!
  TBranch        *b_GenMET_phi;   //!
  TBranch        *b_GenMET_pt;   //!
  TBranch        *b_MET_MetUnclustEnUpDeltaX;   //!
  TBranch        *b_MET_MetUnclustEnUpDeltaY;   //!
  TBranch        *b_MET_covXX;   //!
  TBranch        *b_MET_covXY;   //!
  TBranch        *b_MET_covYY;   //!
  TBranch        *b_MET_phi;   //!
  TBranch        *b_MET_pt;   //!
  TBranch        *b_MET_significance;   //!
  TBranch        *b_MET_sumEt;   //!
  TBranch        *b_MET_sumPtUnclustered;   //!
  TBranch        *b_nMuon;   //!
  TBranch        *b_Muon_dxy;   //!
  TBranch        *b_Muon_dxyErr;   //!
  TBranch        *b_Muon_dxybs;   //!
  TBranch        *b_Muon_dz;   //!
  TBranch        *b_Muon_dzErr;   //!
  TBranch        *b_Muon_eta;   //!
  TBranch        *b_Muon_ip3d;   //!
  TBranch        *b_Muon_jetPtRelv2;   //!
  TBranch        *b_Muon_jetRelIso;   //!
  TBranch        *b_Muon_mass;   //!
  TBranch        *b_Muon_miniPFRelIso_all;   //!
  TBranch        *b_Muon_miniPFRelIso_chg;   //!
  TBranch        *b_Muon_pfRelIso03_all;   //!
  TBranch        *b_Muon_pfRelIso03_chg;   //!
  TBranch        *b_Muon_pfRelIso04_all;   //!
  TBranch        *b_Muon_phi;   //!
  TBranch        *b_Muon_pt;   //!
  TBranch        *b_Muon_ptErr;   //!
  TBranch        *b_Muon_segmentComp;   //!
  TBranch        *b_Muon_sip3d;   //!
  TBranch        *b_Muon_softMva;   //!
  TBranch        *b_Muon_tkRelIso;   //!
  TBranch        *b_Muon_tunepRelPt;   //!
  TBranch        *b_Muon_mvaLowPt;   //!
  TBranch        *b_Muon_mvaTTH;   //!
  TBranch        *b_Muon_charge;   //!
  TBranch        *b_Muon_jetIdx;   //!
  TBranch        *b_Muon_nStations;   //!
  TBranch        *b_Muon_nTrackerLayers;   //!
  TBranch        *b_Muon_pdgId;   //!
  TBranch        *b_Muon_tightCharge;   //!
  TBranch        *b_Muon_fsrPhotonIdx;   //!
  TBranch        *b_Muon_highPtId;   //!
  TBranch        *b_Muon_highPurity;   //!
  TBranch        *b_Muon_inTimeMuon;   //!
  TBranch        *b_Muon_isGlobal;   //!
  TBranch        *b_Muon_isPFcand;   //!
  TBranch        *b_Muon_isStandalone;   //!
  TBranch        *b_Muon_isTracker;   //!
  TBranch        *b_Muon_jetNDauCharged;   //!
  TBranch        *b_Muon_looseId;   //!
  TBranch        *b_Muon_mediumId;   //!
  TBranch        *b_Muon_mediumPromptId;   //!
  TBranch        *b_Muon_miniIsoId;   //!
  TBranch        *b_Muon_multiIsoId;   //!
  TBranch        *b_Muon_mvaId;   //!
  TBranch        *b_Muon_mvaLowPtId;   //!
  TBranch        *b_Muon_pfIsoId;   //!
  TBranch        *b_Muon_puppiIsoId;   //!
  TBranch        *b_Muon_softId;   //!
  TBranch        *b_Muon_softMvaId;   //!
  TBranch        *b_Muon_tightId;   //!
  TBranch        *b_Muon_tkIsoId;   //!
  TBranch        *b_Muon_triggerIdLoose;   //!
  TBranch        *b_nPhoton;   //!
  TBranch        *b_Photon_dEscaleDown;   //!
  TBranch        *b_Photon_dEscaleUp;   //!
  TBranch        *b_Photon_dEsigmaDown;   //!
  TBranch        *b_Photon_dEsigmaUp;   //!
  TBranch        *b_Photon_eCorr;   //!
  TBranch        *b_Photon_energyErr;   //!
  TBranch        *b_Photon_eta;   //!
  TBranch        *b_Photon_hoe;   //!
  TBranch        *b_Photon_mass;   //!
  TBranch        *b_Photon_mvaID;   //!
  TBranch        *b_Photon_mvaID_Fall17V1p1;   //!
  TBranch        *b_Photon_pfRelIso03_all;   //!
  TBranch        *b_Photon_pfRelIso03_chg;   //!
  TBranch        *b_Photon_phi;   //!
  TBranch        *b_Photon_pt;   //!
  TBranch        *b_Photon_r9;   //!
  TBranch        *b_Photon_sieie;   //!
  TBranch        *b_Photon_charge;   //!
  TBranch        *b_Photon_cutBased;   //!
  TBranch        *b_Photon_cutBased_Fall17V1Bitmap;   //!
  TBranch        *b_Photon_electronIdx;   //!
  TBranch        *b_Photon_jetIdx;   //!
  TBranch        *b_Photon_pdgId;   //!
  TBranch        *b_Photon_vidNestedWPBitmap;   //!
  TBranch        *b_Photon_electronVeto;   //!
  TBranch        *b_Photon_isScEtaEB;   //!
  TBranch        *b_Photon_isScEtaEE;   //!
  TBranch        *b_Photon_mvaID_WP80;   //!
  TBranch        *b_Photon_mvaID_WP90;   //!
  TBranch        *b_Photon_pixelSeed;   //!
  TBranch        *b_Photon_seedGain;   //!
  TBranch        *b_Pileup_nTrueInt;   //!
  TBranch        *b_Pileup_pudensity;   //!
  TBranch        *b_Pileup_gpudensity;   //!
  TBranch        *b_Pileup_nPU;   //!
  TBranch        *b_Pileup_sumEOOT;   //!
  TBranch        *b_Pileup_sumLOOT;   //!
  TBranch        *b_PuppiMET_phi;   //!
  TBranch        *b_PuppiMET_phiJERDown;   //!
  TBranch        *b_PuppiMET_phiJERUp;   //!
  TBranch        *b_PuppiMET_phiJESDown;   //!
  TBranch        *b_PuppiMET_phiJESUp;   //!
  TBranch        *b_PuppiMET_phiUnclusteredDown;   //!
  TBranch        *b_PuppiMET_phiUnclusteredUp;   //!
  TBranch        *b_PuppiMET_pt;   //!
  TBranch        *b_PuppiMET_ptJERDown;   //!
  TBranch        *b_PuppiMET_ptJERUp;   //!
  TBranch        *b_PuppiMET_ptJESDown;   //!
  TBranch        *b_PuppiMET_ptJESUp;   //!
  TBranch        *b_PuppiMET_ptUnclusteredDown;   //!
  TBranch        *b_PuppiMET_ptUnclusteredUp;   //!
  TBranch        *b_PuppiMET_sumEt;   //!
  TBranch        *b_RawMET_phi;   //!
  TBranch        *b_RawMET_pt;   //!
  TBranch        *b_RawMET_sumEt;   //!
  TBranch        *b_RawPuppiMET_phi;   //!
  TBranch        *b_RawPuppiMET_pt;   //!
  TBranch        *b_RawPuppiMET_sumEt;   //!
  TBranch        *b_fixedGridRhoFastjetAll;   //!
  TBranch        *b_fixedGridRhoFastjetCentral;   //!
  TBranch        *b_fixedGridRhoFastjetCentralCalo;   //!
  TBranch        *b_fixedGridRhoFastjetCentralChargedPileUp;   //!
  TBranch        *b_fixedGridRhoFastjetCentralNeutral;   //!
  TBranch        *b_nGenDressedLepton;   //!
  TBranch        *b_GenDressedLepton_eta;   //!
  TBranch        *b_GenDressedLepton_mass;   //!
  TBranch        *b_GenDressedLepton_phi;   //!
  TBranch        *b_GenDressedLepton_pt;   //!
  TBranch        *b_GenDressedLepton_pdgId;   //!
  TBranch        *b_GenDressedLepton_hasTauAnc;   //!
  TBranch        *b_nGenIsolatedPhoton;   //!
  TBranch        *b_GenIsolatedPhoton_eta;   //!
  TBranch        *b_GenIsolatedPhoton_mass;   //!
  TBranch        *b_GenIsolatedPhoton_phi;   //!
  TBranch        *b_GenIsolatedPhoton_pt;   //!
  TBranch        *b_nSoftActivityJet;   //!
  TBranch        *b_SoftActivityJet_eta;   //!
  TBranch        *b_SoftActivityJet_phi;   //!
  TBranch        *b_SoftActivityJet_pt;   //!
  TBranch        *b_SoftActivityJetHT;   //!
  TBranch        *b_SoftActivityJetHT10;   //!
  TBranch        *b_SoftActivityJetHT2;   //!
  TBranch        *b_SoftActivityJetHT5;   //!
  TBranch        *b_SoftActivityJetNjets10;   //!
  TBranch        *b_SoftActivityJetNjets2;   //!
  TBranch        *b_SoftActivityJetNjets5;   //!
  TBranch        *b_nSubJet;   //!
  TBranch        *b_SubJet_btagCSVV2;   //!
  TBranch        *b_SubJet_btagDeepB;   //!
  TBranch        *b_SubJet_eta;   //!
  TBranch        *b_SubJet_mass;   //!
  TBranch        *b_SubJet_n2b1;   //!
  TBranch        *b_SubJet_n3b1;   //!
  TBranch        *b_SubJet_phi;   //!
  TBranch        *b_SubJet_pt;   //!
  TBranch        *b_SubJet_rawFactor;   //!
  TBranch        *b_SubJet_tau1;   //!
  TBranch        *b_SubJet_tau2;   //!
  TBranch        *b_SubJet_tau3;   //!
  TBranch        *b_SubJet_tau4;   //!
  TBranch        *b_nTau;   //!
  TBranch        *b_Tau_chargedIso;   //!
  TBranch        *b_Tau_dxy;   //!
  TBranch        *b_Tau_dz;   //!
  TBranch        *b_Tau_eta;   //!
  TBranch        *b_Tau_leadTkDeltaEta;   //!
  TBranch        *b_Tau_leadTkDeltaPhi;   //!
  TBranch        *b_Tau_leadTkPtOverTauPt;   //!
  TBranch        *b_Tau_mass;   //!
  TBranch        *b_Tau_neutralIso;   //!
  TBranch        *b_Tau_phi;   //!
  TBranch        *b_Tau_photonsOutsideSignalCone;   //!
  TBranch        *b_Tau_pt;   //!
  TBranch        *b_Tau_puCorr;   //!
  TBranch        *b_Tau_rawDeepTau2017v2p1VSe;   //!
  TBranch        *b_Tau_rawDeepTau2017v2p1VSjet;   //!
  TBranch        *b_Tau_rawDeepTau2017v2p1VSmu;   //!
  TBranch        *b_Tau_rawIso;   //!
  TBranch        *b_Tau_rawIsodR03;   //!
  TBranch        *b_Tau_charge;   //!
  TBranch        *b_Tau_decayMode;   //!
  TBranch        *b_Tau_jetIdx;   //!
  TBranch        *b_Tau_idAntiEleDeadECal;   //!
  TBranch        *b_Tau_idAntiMu;   //!
  TBranch        *b_Tau_idDecayModeOldDMs;   //!
  TBranch        *b_Tau_idDeepTau2017v2p1VSe;   //!
  TBranch        *b_Tau_idDeepTau2017v2p1VSjet;   //!
  TBranch        *b_Tau_idDeepTau2017v2p1VSmu;   //!
  TBranch        *b_TkMET_phi;   //!
  TBranch        *b_TkMET_pt;   //!
  TBranch        *b_TkMET_sumEt;   //!
  TBranch        *b_nTrigObj;   //!
  TBranch        *b_TrigObj_pt;   //!
  TBranch        *b_TrigObj_eta;   //!
  TBranch        *b_TrigObj_phi;   //!
  TBranch        *b_TrigObj_l1pt;   //!
  TBranch        *b_TrigObj_l1pt_2;   //!
  TBranch        *b_TrigObj_l2pt;   //!
  TBranch        *b_TrigObj_id;   //!
  TBranch        *b_TrigObj_l1iso;   //!
  TBranch        *b_TrigObj_l1charge;   //!
  TBranch        *b_TrigObj_filterBits;   //!
  TBranch        *b_genTtbarId;   //!
  TBranch        *b_nOtherPV;   //!
  TBranch        *b_OtherPV_z;   //!
  TBranch        *b_PV_ndof;   //!
  TBranch        *b_PV_x;   //!
  TBranch        *b_PV_y;   //!
  TBranch        *b_PV_z;   //!
  TBranch        *b_PV_chi2;   //!
  TBranch        *b_PV_score;   //!
  TBranch        *b_PV_npvs;   //!
  TBranch        *b_PV_npvsGood;   //!
  TBranch        *b_nSV;   //!
  TBranch        *b_SV_dlen;   //!
  TBranch        *b_SV_dlenSig;   //!
  TBranch        *b_SV_dxy;   //!
  TBranch        *b_SV_dxySig;   //!
  TBranch        *b_SV_pAngle;   //!
  TBranch        *b_SV_charge;   //!
  TBranch        *b_boostedTau_genPartIdx;   //!
  TBranch        *b_boostedTau_genPartFlav;   //!
  TBranch        *b_Electron_genPartIdx;   //!
  TBranch        *b_Electron_genPartFlav;   //!
  TBranch        *b_FatJet_genJetAK8Idx;   //!
  TBranch        *b_FatJet_hadronFlavour;   //!
  TBranch        *b_FatJet_nBHadrons;   //!
  TBranch        *b_FatJet_nCHadrons;   //!
  TBranch        *b_GenJetAK8_partonFlavour;   //!
  TBranch        *b_GenJetAK8_hadronFlavour;   //!
  TBranch        *b_GenJet_partonFlavour;   //!
  TBranch        *b_GenJet_hadronFlavour;   //!
  TBranch        *b_GenVtx_t0;   //!
  TBranch        *b_Jet_genJetIdx;   //!
  TBranch        *b_Jet_hadronFlavour;   //!
  TBranch        *b_Jet_partonFlavour;   //!
  TBranch        *b_LowPtElectron_genPartIdx;   //!
  TBranch        *b_LowPtElectron_genPartFlav;   //!
  TBranch        *b_Muon_genPartIdx;   //!
  TBranch        *b_Muon_genPartFlav;   //!
  TBranch        *b_Photon_genPartIdx;   //!
  TBranch        *b_Photon_genPartFlav;   //!
  TBranch        *b_MET_fiducialGenPhi;   //!
  TBranch        *b_MET_fiducialGenPt;   //!
  TBranch        *b_Electron_cleanmask;   //!
  TBranch        *b_Jet_cleanmask;   //!
  TBranch        *b_Muon_cleanmask;   //!
  TBranch        *b_Photon_cleanmask;   //!
  TBranch        *b_Tau_cleanmask;   //!
  TBranch        *b_SubJet_hadronFlavour;   //!
  TBranch        *b_SubJet_nBHadrons;   //!
  TBranch        *b_SubJet_nCHadrons;   //!
  TBranch        *b_SV_chi2;   //!
  TBranch        *b_SV_eta;   //!
  TBranch        *b_SV_mass;   //!
  TBranch        *b_SV_ndof;   //!
  TBranch        *b_SV_phi;   //!
  TBranch        *b_SV_pt;   //!
  TBranch        *b_SV_x;   //!
  TBranch        *b_SV_y;   //!
  TBranch        *b_SV_z;   //!
  TBranch        *b_SV_ntracks;   //!
  TBranch        *b_Tau_genPartIdx;   //!
  TBranch        *b_Tau_genPartFlav;   //!
  TBranch        *b_Flag_HBHENoiseFilter;   //!
  TBranch        *b_Flag_HBHENoiseIsoFilter;   //!
  TBranch        *b_Flag_CSCTightHaloFilter;   //!
  TBranch        *b_Flag_CSCTightHaloTrkMuUnvetoFilter;   //!
  TBranch        *b_Flag_CSCTightHalo2015Filter;   //!
  TBranch        *b_Flag_globalTightHalo2016Filter;   //!
  TBranch        *b_Flag_globalSuperTightHalo2016Filter;   //!
  TBranch        *b_Flag_HcalStripHaloFilter;   //!
  TBranch        *b_Flag_hcalLaserEventFilter;   //!
  TBranch        *b_Flag_EcalDeadCellTriggerPrimitiveFilter;   //!
  TBranch        *b_Flag_EcalDeadCellBoundaryEnergyFilter;   //!
  TBranch        *b_Flag_ecalBadCalibFilter;   //!
  TBranch        *b_Flag_goodVertices;   //!
  TBranch        *b_Flag_eeBadScFilter;   //!
  TBranch        *b_Flag_ecalLaserCorrFilter;   //!
  TBranch        *b_Flag_trkPOGFilters;   //!
  TBranch        *b_Flag_chargedHadronTrackResolutionFilter;   //!
  TBranch        *b_Flag_muonBadTrackFilter;   //!
  TBranch        *b_Flag_BadChargedCandidateFilter;   //!
  TBranch        *b_Flag_BadPFMuonFilter;   //!
  TBranch        *b_Flag_BadPFMuonDzFilter;   //!
  TBranch        *b_Flag_hfNoisyHitsFilter;   //!
  TBranch        *b_Flag_BadChargedCandidateSummer16Filter;   //!
  TBranch        *b_Flag_BadPFMuonSummer16Filter;   //!
  TBranch        *b_Flag_trkPOG_manystripclus53X;   //!
  TBranch        *b_Flag_trkPOG_toomanystripclus53X;   //!
  TBranch        *b_Flag_trkPOG_logErrorTooManyClusters;   //!
  TBranch        *b_Flag_METFilters;   //!
  TBranch        *b_L1Reco_step;   //!
  TBranch        *b_L1simulation_step;   //!

  NanoTree(TTree *tree=0);
  virtual ~NanoTree();
  virtual Int_t    Cut(Long64_t entry);
  virtual Int_t    GetEntry(Long64_t entry);
  virtual Long64_t LoadTree(Long64_t entry);
  virtual void     Init(TTree *tree);
  virtual void     Loop();
  virtual Bool_t   Notify();
  virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef NanoTree_cxx
NanoTree::NanoTree(TTree *tree) : fChain(0) 
{
  // if parameter tree is not specified (or zero), connect the file
  // used to generate this class and read the Tree.
  if (tree == 0) {
    TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/Users/whitbeck/Downloads/Nano_Summer20UL18_TTJets_Inclusive_585C021C-8088-434F-A0A2-3BE09C1E5FD2.root");
    if (!f || !f->IsOpen()) {
      f = new TFile("/Users/whitbeck/Downloads/Nano_Summer20UL18_TTJets_Inclusive_585C021C-8088-434F-A0A2-3BE09C1E5FD2.root");
    }
    f->GetObject("Events",tree);

  }
  Init(tree);

  branch_map_UInt_t.insert( std::pair<string,UInt_t*>( "run" , &run ) ) ;
  branch_map_UInt_t.insert( std::pair<string,UInt_t*>( "luminosityBlock" , &luminosityBlock ) ) ;
  branch_map_ULong64_t.insert( std::pair<string,ULong64_t*>( "event" , &event ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "HTXS_Higgs_pt" , &HTXS_Higgs_pt ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "HTXS_Higgs_y" , &HTXS_Higgs_y ) ) ;
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "HTXS_stage1_1_cat_pTjet25GeV" , &HTXS_stage1_1_cat_pTjet25GeV ) ) ;
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "HTXS_stage1_1_cat_pTjet30GeV" , &HTXS_stage1_1_cat_pTjet30GeV ) ) ;
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "HTXS_stage1_1_fine_cat_pTjet25GeV" , &HTXS_stage1_1_fine_cat_pTjet25GeV ) ) ;
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "HTXS_stage1_1_fine_cat_pTjet30GeV" , &HTXS_stage1_1_fine_cat_pTjet30GeV ) ) ;
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "HTXS_stage1_2_cat_pTjet25GeV" , &HTXS_stage1_2_cat_pTjet25GeV ) ) ;
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "HTXS_stage1_2_cat_pTjet30GeV" , &HTXS_stage1_2_cat_pTjet30GeV ) ) ;
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "HTXS_stage1_2_fine_cat_pTjet25GeV" , &HTXS_stage1_2_fine_cat_pTjet25GeV ) ) ;
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "HTXS_stage1_2_fine_cat_pTjet30GeV" , &HTXS_stage1_2_fine_cat_pTjet30GeV ) ) ;
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "HTXS_stage_0" , &HTXS_stage_0 ) ) ;
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "HTXS_stage_1_pTjet25" , &HTXS_stage_1_pTjet25 ) ) ;
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "HTXS_stage_1_pTjet30" , &HTXS_stage_1_pTjet30 ) ) ;
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "HTXS_njets25" , &HTXS_njets25 ) ) ;
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "HTXS_njets30" , &HTXS_njets30 ) ) ;
  branch_map_UInt_t.insert( std::pair<string,UInt_t*>( "nboostedTau" , &nboostedTau ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "boostedTau_chargedIso" , boostedTau_chargedIso ) ) ; //nboostedTau
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "boostedTau_eta" , boostedTau_eta ) ) ; //nboostedTau
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "boostedTau_leadTkDeltaEta" , boostedTau_leadTkDeltaEta ) ) ; //nboostedTau
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "boostedTau_leadTkDeltaPhi" , boostedTau_leadTkDeltaPhi ) ) ; //nboostedTau
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "boostedTau_leadTkPtOverTauPt" , boostedTau_leadTkPtOverTauPt ) ) ; //nboostedTau
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "boostedTau_mass" , boostedTau_mass ) ) ; //nboostedTau
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "boostedTau_neutralIso" , boostedTau_neutralIso ) ) ; //nboostedTau
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "boostedTau_phi" , boostedTau_phi ) ) ; //nboostedTau
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "boostedTau_photonsOutsideSignalCone" , boostedTau_photonsOutsideSignalCone ) ) ; //nboostedTau
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "boostedTau_pt" , boostedTau_pt ) ) ; //nboostedTau
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "boostedTau_puCorr" , boostedTau_puCorr ) ) ; //nboostedTau
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "boostedTau_rawAntiEle2018" , boostedTau_rawAntiEle2018 ) ) ; //nboostedTau
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "boostedTau_rawIso" , boostedTau_rawIso ) ) ; //nboostedTau
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "boostedTau_rawIsodR03" , boostedTau_rawIsodR03 ) ) ; //nboostedTau
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "boostedTau_rawMVAnewDM2017v2" , boostedTau_rawMVAnewDM2017v2 ) ) ; //nboostedTau
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "boostedTau_rawMVAoldDM2017v2" , boostedTau_rawMVAoldDM2017v2 ) ) ; //nboostedTau
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "boostedTau_rawMVAoldDMdR032017v2" , boostedTau_rawMVAoldDMdR032017v2 ) ) ; //nboostedTau
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "boostedTau_charge" , boostedTau_charge ) ) ; //nboostedTau
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "boostedTau_decayMode" , boostedTau_decayMode ) ) ; //nboostedTau
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "boostedTau_jetIdx" , boostedTau_jetIdx ) ) ; //nboostedTau
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "boostedTau_rawAntiEleCat2018" , boostedTau_rawAntiEleCat2018 ) ) ; //nboostedTau
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "boostedTau_idAntiEle2018" , boostedTau_idAntiEle2018 ) ) ; //nboostedTau
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "boostedTau_idAntiMu" , boostedTau_idAntiMu ) ) ; //nboostedTau
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "boostedTau_idMVAnewDM2017v2" , boostedTau_idMVAnewDM2017v2 ) ) ; //nboostedTau
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "boostedTau_idMVAoldDM2017v2" , boostedTau_idMVAoldDM2017v2 ) ) ; //nboostedTau
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "boostedTau_idMVAoldDMdR032017v2" , boostedTau_idMVAoldDMdR032017v2 ) ) ; //nboostedTau
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "btagWeight_CSVV2" , &btagWeight_CSVV2 ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "btagWeight_DeepCSVB" , &btagWeight_DeepCSVB ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "CaloMET_phi" , &CaloMET_phi ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "CaloMET_pt" , &CaloMET_pt ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "CaloMET_sumEt" , &CaloMET_sumEt ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "ChsMET_phi" , &ChsMET_phi ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "ChsMET_pt" , &ChsMET_pt ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "ChsMET_sumEt" , &ChsMET_sumEt ) ) ;
  branch_map_UInt_t.insert( std::pair<string,UInt_t*>( "nCorrT1METJet" , &nCorrT1METJet ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "CorrT1METJet_area" , CorrT1METJet_area ) ) ; //nCorrT1METJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "CorrT1METJet_eta" , CorrT1METJet_eta ) ) ; //nCorrT1METJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "CorrT1METJet_muonSubtrFactor" , CorrT1METJet_muonSubtrFactor ) ) ; //nCorrT1METJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "CorrT1METJet_phi" , CorrT1METJet_phi ) ) ; //nCorrT1METJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "CorrT1METJet_rawPt" , CorrT1METJet_rawPt ) ) ; //nCorrT1METJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "DeepMETResolutionTune_phi" , &DeepMETResolutionTune_phi ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "DeepMETResolutionTune_pt" , &DeepMETResolutionTune_pt ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "DeepMETResponseTune_phi" , &DeepMETResponseTune_phi ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "DeepMETResponseTune_pt" , &DeepMETResponseTune_pt ) ) ;
  branch_map_UInt_t.insert( std::pair<string,UInt_t*>( "nElectron" , &nElectron ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Electron_dEscaleDown" , Electron_dEscaleDown ) ) ; //nElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Electron_dEscaleUp" , Electron_dEscaleUp ) ) ; //nElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Electron_dEsigmaDown" , Electron_dEsigmaDown ) ) ; //nElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Electron_dEsigmaUp" , Electron_dEsigmaUp ) ) ; //nElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Electron_deltaEtaSC" , Electron_deltaEtaSC ) ) ; //nElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Electron_dr03EcalRecHitSumEt" , Electron_dr03EcalRecHitSumEt ) ) ; //nElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Electron_dr03HcalDepth1TowerSumEt" , Electron_dr03HcalDepth1TowerSumEt ) ) ; //nElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Electron_dr03TkSumPt" , Electron_dr03TkSumPt ) ) ; //nElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Electron_dr03TkSumPtHEEP" , Electron_dr03TkSumPtHEEP ) ) ; //nElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Electron_dxy" , Electron_dxy ) ) ; //nElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Electron_dxyErr" , Electron_dxyErr ) ) ; //nElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Electron_dz" , Electron_dz ) ) ; //nElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Electron_dzErr" , Electron_dzErr ) ) ; //nElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Electron_eCorr" , Electron_eCorr ) ) ; //nElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Electron_eInvMinusPInv" , Electron_eInvMinusPInv ) ) ; //nElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Electron_energyErr" , Electron_energyErr ) ) ; //nElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Electron_eta" , Electron_eta ) ) ; //nElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Electron_hoe" , Electron_hoe ) ) ; //nElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Electron_ip3d" , Electron_ip3d ) ) ; //nElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Electron_jetPtRelv2" , Electron_jetPtRelv2 ) ) ; //nElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Electron_jetRelIso" , Electron_jetRelIso ) ) ; //nElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Electron_mass" , Electron_mass ) ) ; //nElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Electron_miniPFRelIso_all" , Electron_miniPFRelIso_all ) ) ; //nElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Electron_miniPFRelIso_chg" , Electron_miniPFRelIso_chg ) ) ; //nElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Electron_mvaFall17V2Iso" , Electron_mvaFall17V2Iso ) ) ; //nElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Electron_mvaFall17V2noIso" , Electron_mvaFall17V2noIso ) ) ; //nElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Electron_pfRelIso03_all" , Electron_pfRelIso03_all ) ) ; //nElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Electron_pfRelIso03_chg" , Electron_pfRelIso03_chg ) ) ; //nElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Electron_phi" , Electron_phi ) ) ; //nElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Electron_pt" , Electron_pt ) ) ; //nElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Electron_r9" , Electron_r9 ) ) ; //nElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Electron_scEtOverPt" , Electron_scEtOverPt ) ) ; //nElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Electron_sieie" , Electron_sieie ) ) ; //nElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Electron_sip3d" , Electron_sip3d ) ) ; //nElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Electron_mvaTTH" , Electron_mvaTTH ) ) ; //nElectron
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "Electron_charge" , Electron_charge ) ) ; //nElectron
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "Electron_cutBased" , Electron_cutBased ) ) ; //nElectron
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "Electron_jetIdx" , Electron_jetIdx ) ) ; //nElectron
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "Electron_pdgId" , Electron_pdgId ) ) ; //nElectron
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "Electron_photonIdx" , Electron_photonIdx ) ) ; //nElectron
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "Electron_tightCharge" , Electron_tightCharge ) ) ; //nElectron
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "Electron_vidNestedWPBitmap" , Electron_vidNestedWPBitmap ) ) ; //nElectron
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "Electron_vidNestedWPBitmapHEEP" , Electron_vidNestedWPBitmapHEEP ) ) ; //nElectron
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Electron_convVeto" , Electron_convVeto ) ) ; //nElectron
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Electron_cutBased_HEEP" , Electron_cutBased_HEEP ) ) ; //nElectron
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Electron_isPFcand" , Electron_isPFcand ) ) ; //nElectron
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "Electron_jetNDauCharged" , Electron_jetNDauCharged ) ) ; //nElectron
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "Electron_lostHits" , Electron_lostHits ) ) ; //nElectron
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Electron_mvaFall17V2Iso_WP80" , Electron_mvaFall17V2Iso_WP80 ) ) ; //nElectron
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Electron_mvaFall17V2Iso_WP90" , Electron_mvaFall17V2Iso_WP90 ) ) ; //nElectron
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Electron_mvaFall17V2Iso_WPL" , Electron_mvaFall17V2Iso_WPL ) ) ; //nElectron
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Electron_mvaFall17V2noIso_WP80" , Electron_mvaFall17V2noIso_WP80 ) ) ; //nElectron
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Electron_mvaFall17V2noIso_WP90" , Electron_mvaFall17V2noIso_WP90 ) ) ; //nElectron
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Electron_mvaFall17V2noIso_WPL" , Electron_mvaFall17V2noIso_WPL ) ) ; //nElectron
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "Electron_seedGain" , Electron_seedGain ) ) ; //nElectron
  branch_map_UInt_t.insert( std::pair<string,UInt_t*>( "nFatJet" , &nFatJet ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FatJet_area" , FatJet_area ) ) ; //nFatJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FatJet_btagCSVV2" , FatJet_btagCSVV2 ) ) ; //nFatJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FatJet_btagDDBvLV2" , FatJet_btagDDBvLV2 ) ) ; //nFatJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FatJet_btagDDCvBV2" , FatJet_btagDDCvBV2 ) ) ; //nFatJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FatJet_btagDDCvLV2" , FatJet_btagDDCvLV2 ) ) ; //nFatJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FatJet_btagDeepB" , FatJet_btagDeepB ) ) ; //nFatJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FatJet_btagHbb" , FatJet_btagHbb ) ) ; //nFatJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FatJet_deepTagMD_H4qvsQCD" , FatJet_deepTagMD_H4qvsQCD ) ) ; //nFatJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FatJet_deepTagMD_HbbvsQCD" , FatJet_deepTagMD_HbbvsQCD ) ) ; //nFatJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FatJet_deepTagMD_TvsQCD" , FatJet_deepTagMD_TvsQCD ) ) ; //nFatJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FatJet_deepTagMD_WvsQCD" , FatJet_deepTagMD_WvsQCD ) ) ; //nFatJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FatJet_deepTagMD_ZHbbvsQCD" , FatJet_deepTagMD_ZHbbvsQCD ) ) ; //nFatJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FatJet_deepTagMD_ZHccvsQCD" , FatJet_deepTagMD_ZHccvsQCD ) ) ; //nFatJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FatJet_deepTagMD_ZbbvsQCD" , FatJet_deepTagMD_ZbbvsQCD ) ) ; //nFatJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FatJet_deepTagMD_ZvsQCD" , FatJet_deepTagMD_ZvsQCD ) ) ; //nFatJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FatJet_deepTagMD_bbvsLight" , FatJet_deepTagMD_bbvsLight ) ) ; //nFatJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FatJet_deepTagMD_ccvsLight" , FatJet_deepTagMD_ccvsLight ) ) ; //nFatJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FatJet_deepTag_H" , FatJet_deepTag_H ) ) ; //nFatJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FatJet_deepTag_QCD" , FatJet_deepTag_QCD ) ) ; //nFatJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FatJet_deepTag_QCDothers" , FatJet_deepTag_QCDothers ) ) ; //nFatJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FatJet_deepTag_TvsQCD" , FatJet_deepTag_TvsQCD ) ) ; //nFatJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FatJet_deepTag_WvsQCD" , FatJet_deepTag_WvsQCD ) ) ; //nFatJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FatJet_deepTag_ZvsQCD" , FatJet_deepTag_ZvsQCD ) ) ; //nFatJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FatJet_eta" , FatJet_eta ) ) ; //nFatJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FatJet_mass" , FatJet_mass ) ) ; //nFatJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FatJet_msoftdrop" , FatJet_msoftdrop ) ) ; //nFatJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FatJet_n2b1" , FatJet_n2b1 ) ) ; //nFatJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FatJet_n3b1" , FatJet_n3b1 ) ) ; //nFatJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FatJet_particleNetMD_QCD" , FatJet_particleNetMD_QCD ) ) ; //nFatJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FatJet_particleNetMD_Xbb" , FatJet_particleNetMD_Xbb ) ) ; //nFatJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FatJet_particleNetMD_Xcc" , FatJet_particleNetMD_Xcc ) ) ; //nFatJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FatJet_particleNetMD_Xqq" , FatJet_particleNetMD_Xqq ) ) ; //nFatJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FatJet_particleNet_H4qvsQCD" , FatJet_particleNet_H4qvsQCD ) ) ; //nFatJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FatJet_particleNet_HbbvsQCD" , FatJet_particleNet_HbbvsQCD ) ) ; //nFatJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FatJet_particleNet_HccvsQCD" , FatJet_particleNet_HccvsQCD ) ) ; //nFatJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FatJet_particleNet_QCD" , FatJet_particleNet_QCD ) ) ; //nFatJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FatJet_particleNet_TvsQCD" , FatJet_particleNet_TvsQCD ) ) ; //nFatJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FatJet_particleNet_WvsQCD" , FatJet_particleNet_WvsQCD ) ) ; //nFatJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FatJet_particleNet_ZvsQCD" , FatJet_particleNet_ZvsQCD ) ) ; //nFatJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FatJet_particleNet_mass" , FatJet_particleNet_mass ) ) ; //nFatJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FatJet_phi" , FatJet_phi ) ) ; //nFatJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FatJet_pt" , FatJet_pt ) ) ; //nFatJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FatJet_rawFactor" , FatJet_rawFactor ) ) ; //nFatJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FatJet_tau1" , FatJet_tau1 ) ) ; //nFatJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FatJet_tau2" , FatJet_tau2 ) ) ; //nFatJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FatJet_tau3" , FatJet_tau3 ) ) ; //nFatJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FatJet_tau4" , FatJet_tau4 ) ) ; //nFatJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FatJet_lsf3" , FatJet_lsf3 ) ) ; //nFatJet
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "FatJet_jetId" , FatJet_jetId ) ) ; //nFatJet
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "FatJet_subJetIdx1" , FatJet_subJetIdx1 ) ) ; //nFatJet
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "FatJet_subJetIdx2" , FatJet_subJetIdx2 ) ) ; //nFatJet
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "FatJet_electronIdx3SJ" , FatJet_electronIdx3SJ ) ) ; //nFatJet
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "FatJet_muonIdx3SJ" , FatJet_muonIdx3SJ ) ) ; //nFatJet
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "FatJet_nConstituents" , FatJet_nConstituents ) ) ; //nFatJet
  branch_map_UInt_t.insert( std::pair<string,UInt_t*>( "nFsrPhoton" , &nFsrPhoton ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FsrPhoton_dROverEt2" , FsrPhoton_dROverEt2 ) ) ; //nFsrPhoton
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FsrPhoton_eta" , FsrPhoton_eta ) ) ; //nFsrPhoton
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FsrPhoton_phi" , FsrPhoton_phi ) ) ; //nFsrPhoton
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FsrPhoton_pt" , FsrPhoton_pt ) ) ; //nFsrPhoton
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "FsrPhoton_relIso03" , FsrPhoton_relIso03 ) ) ; //nFsrPhoton
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "FsrPhoton_muonIdx" , FsrPhoton_muonIdx ) ) ; //nFsrPhoton
  branch_map_UInt_t.insert( std::pair<string,UInt_t*>( "nGenJetAK8" , &nGenJetAK8 ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "GenJetAK8_eta" , GenJetAK8_eta ) ) ; //nGenJetAK8
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "GenJetAK8_mass" , GenJetAK8_mass ) ) ; //nGenJetAK8
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "GenJetAK8_phi" , GenJetAK8_phi ) ) ; //nGenJetAK8
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "GenJetAK8_pt" , GenJetAK8_pt ) ) ; //nGenJetAK8
  branch_map_UInt_t.insert( std::pair<string,UInt_t*>( "nGenJet" , &nGenJet ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "GenJet_eta" , GenJet_eta ) ) ; //nGenJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "GenJet_mass" , GenJet_mass ) ) ; //nGenJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "GenJet_phi" , GenJet_phi ) ) ; //nGenJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "GenJet_pt" , GenJet_pt ) ) ; //nGenJet
  branch_map_UInt_t.insert( std::pair<string,UInt_t*>( "nGenPart" , &nGenPart ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "GenPart_eta" , GenPart_eta ) ) ; //nGenPart
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "GenPart_mass" , GenPart_mass ) ) ; //nGenPart
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "GenPart_phi" , GenPart_phi ) ) ; //nGenPart
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "GenPart_pt" , GenPart_pt ) ) ; //nGenPart
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "GenPart_genPartIdxMother" , GenPart_genPartIdxMother ) ) ; //nGenPart
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "GenPart_pdgId" , GenPart_pdgId ) ) ; //nGenPart
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "GenPart_status" , GenPart_status ) ) ; //nGenPart
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "GenPart_statusFlags" , GenPart_statusFlags ) ) ; //nGenPart
  branch_map_UInt_t.insert( std::pair<string,UInt_t*>( "nSubGenJetAK8" , &nSubGenJetAK8 ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "SubGenJetAK8_eta" , SubGenJetAK8_eta ) ) ; //nSubGenJetAK8
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "SubGenJetAK8_mass" , SubGenJetAK8_mass ) ) ; //nSubGenJetAK8
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "SubGenJetAK8_phi" , SubGenJetAK8_phi ) ) ; //nSubGenJetAK8
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "SubGenJetAK8_pt" , SubGenJetAK8_pt ) ) ; //nSubGenJetAK8
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Generator_binvar" , &Generator_binvar ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Generator_scalePDF" , &Generator_scalePDF ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Generator_weight" , &Generator_weight ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Generator_x1" , &Generator_x1 ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Generator_x2" , &Generator_x2 ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Generator_xpdf1" , &Generator_xpdf1 ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Generator_xpdf2" , &Generator_xpdf2 ) ) ;
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "Generator_id1" , &Generator_id1 ) ) ;
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "Generator_id2" , &Generator_id2 ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "GenVtx_x" , &GenVtx_x ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "GenVtx_y" , &GenVtx_y ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "GenVtx_z" , &GenVtx_z ) ) ;
  branch_map_UInt_t.insert( std::pair<string,UInt_t*>( "nGenVisTau" , &nGenVisTau ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "GenVisTau_eta" , GenVisTau_eta ) ) ; //nGenVisTau
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "GenVisTau_mass" , GenVisTau_mass ) ) ; //nGenVisTau
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "GenVisTau_phi" , GenVisTau_phi ) ) ; //nGenVisTau
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "GenVisTau_pt" , GenVisTau_pt ) ) ; //nGenVisTau
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "GenVisTau_charge" , GenVisTau_charge ) ) ; //nGenVisTau
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "GenVisTau_genPartIdxMother" , GenVisTau_genPartIdxMother ) ) ; //nGenVisTau
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "GenVisTau_status" , GenVisTau_status ) ) ; //nGenVisTau
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "genWeight" , &genWeight ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "LHEWeight_originalXWGTUP" , &LHEWeight_originalXWGTUP ) ) ;
  branch_map_UInt_t.insert( std::pair<string,UInt_t*>( "nLHEPdfWeight" , &nLHEPdfWeight ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "LHEPdfWeight" , LHEPdfWeight ) ) ; //nLHEPdfWeight
  branch_map_UInt_t.insert( std::pair<string,UInt_t*>( "nLHEReweightingWeight" , &nLHEReweightingWeight ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "LHEReweightingWeight" , LHEReweightingWeight ) ) ; //nLHEReweightingWeight
  branch_map_UInt_t.insert( std::pair<string,UInt_t*>( "nLHEScaleWeight" , &nLHEScaleWeight ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "LHEScaleWeight" , LHEScaleWeight ) ) ; //nLHEScaleWeight
  branch_map_UInt_t.insert( std::pair<string,UInt_t*>( "nPSWeight" , &nPSWeight ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "PSWeight" , PSWeight ) ) ; //nPSWeight
  branch_map_UInt_t.insert( std::pair<string,UInt_t*>( "nIsoTrack" , &nIsoTrack ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "IsoTrack_dxy" , IsoTrack_dxy ) ) ; //nIsoTrack
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "IsoTrack_dz" , IsoTrack_dz ) ) ; //nIsoTrack
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "IsoTrack_eta" , IsoTrack_eta ) ) ; //nIsoTrack
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "IsoTrack_pfRelIso03_all" , IsoTrack_pfRelIso03_all ) ) ; //nIsoTrack
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "IsoTrack_pfRelIso03_chg" , IsoTrack_pfRelIso03_chg ) ) ; //nIsoTrack
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "IsoTrack_phi" , IsoTrack_phi ) ) ; //nIsoTrack
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "IsoTrack_pt" , IsoTrack_pt ) ) ; //nIsoTrack
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "IsoTrack_miniPFRelIso_all" , IsoTrack_miniPFRelIso_all ) ) ; //nIsoTrack
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "IsoTrack_miniPFRelIso_chg" , IsoTrack_miniPFRelIso_chg ) ) ; //nIsoTrack
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "IsoTrack_charge" , IsoTrack_charge ) ) ; //nIsoTrack
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "IsoTrack_fromPV" , IsoTrack_fromPV ) ) ; //nIsoTrack
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "IsoTrack_pdgId" , IsoTrack_pdgId ) ) ; //nIsoTrack
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "IsoTrack_isHighPurityTrack" , IsoTrack_isHighPurityTrack ) ) ; //nIsoTrack
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "IsoTrack_isPFcand" , IsoTrack_isPFcand ) ) ; //nIsoTrack
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "IsoTrack_isFromLostTrack" , IsoTrack_isFromLostTrack ) ) ; //nIsoTrack
  branch_map_UInt_t.insert( std::pair<string,UInt_t*>( "nJet" , &nJet ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Jet_area" , Jet_area ) ) ; //nJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Jet_btagCSVV2" , Jet_btagCSVV2 ) ) ; //nJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Jet_btagDeepB" , Jet_btagDeepB ) ) ; //nJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Jet_btagDeepCvB" , Jet_btagDeepCvB ) ) ; //nJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Jet_btagDeepCvL" , Jet_btagDeepCvL ) ) ; //nJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Jet_btagDeepFlavB" , Jet_btagDeepFlavB ) ) ; //nJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Jet_btagDeepFlavCvB" , Jet_btagDeepFlavCvB ) ) ; //nJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Jet_btagDeepFlavCvL" , Jet_btagDeepFlavCvL ) ) ; //nJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Jet_btagDeepFlavQG" , Jet_btagDeepFlavQG ) ) ; //nJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Jet_chEmEF" , Jet_chEmEF ) ) ; //nJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Jet_chFPV0EF" , Jet_chFPV0EF ) ) ; //nJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Jet_chHEF" , Jet_chHEF ) ) ; //nJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Jet_eta" , Jet_eta ) ) ; //nJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Jet_hfsigmaEtaEta" , Jet_hfsigmaEtaEta ) ) ; //nJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Jet_hfsigmaPhiPhi" , Jet_hfsigmaPhiPhi ) ) ; //nJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Jet_mass" , Jet_mass ) ) ; //nJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Jet_muEF" , Jet_muEF ) ) ; //nJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Jet_muonSubtrFactor" , Jet_muonSubtrFactor ) ) ; //nJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Jet_neEmEF" , Jet_neEmEF ) ) ; //nJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Jet_neHEF" , Jet_neHEF ) ) ; //nJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Jet_phi" , Jet_phi ) ) ; //nJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Jet_pt" , Jet_pt ) ) ; //nJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Jet_puIdDisc" , Jet_puIdDisc ) ) ; //nJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Jet_qgl" , Jet_qgl ) ) ; //nJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Jet_rawFactor" , Jet_rawFactor ) ) ; //nJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Jet_bRegCorr" , Jet_bRegCorr ) ) ; //nJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Jet_bRegRes" , Jet_bRegRes ) ) ; //nJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Jet_cRegCorr" , Jet_cRegCorr ) ) ; //nJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Jet_cRegRes" , Jet_cRegRes ) ) ; //nJet
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "Jet_electronIdx1" , Jet_electronIdx1 ) ) ; //nJet
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "Jet_electronIdx2" , Jet_electronIdx2 ) ) ; //nJet
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "Jet_hfadjacentEtaStripsSize" , Jet_hfadjacentEtaStripsSize ) ) ; //nJet
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "Jet_hfcentralEtaStripSize" , Jet_hfcentralEtaStripSize ) ) ; //nJet
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "Jet_jetId" , Jet_jetId ) ) ; //nJet
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "Jet_muonIdx1" , Jet_muonIdx1 ) ) ; //nJet
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "Jet_muonIdx2" , Jet_muonIdx2 ) ) ; //nJet
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "Jet_nElectrons" , Jet_nElectrons ) ) ; //nJet
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "Jet_nMuons" , Jet_nMuons ) ) ; //nJet
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "Jet_puId" , Jet_puId ) ) ; //nJet
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "Jet_nConstituents" , Jet_nConstituents ) ) ; //nJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "L1PreFiringWeight_Dn" , &L1PreFiringWeight_Dn ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "L1PreFiringWeight_ECAL_Dn" , &L1PreFiringWeight_ECAL_Dn ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "L1PreFiringWeight_ECAL_Nom" , &L1PreFiringWeight_ECAL_Nom ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "L1PreFiringWeight_ECAL_Up" , &L1PreFiringWeight_ECAL_Up ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "L1PreFiringWeight_Muon_Nom" , &L1PreFiringWeight_Muon_Nom ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "L1PreFiringWeight_Muon_StatDn" , &L1PreFiringWeight_Muon_StatDn ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "L1PreFiringWeight_Muon_StatUp" , &L1PreFiringWeight_Muon_StatUp ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "L1PreFiringWeight_Muon_SystDn" , &L1PreFiringWeight_Muon_SystDn ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "L1PreFiringWeight_Muon_SystUp" , &L1PreFiringWeight_Muon_SystUp ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "L1PreFiringWeight_Nom" , &L1PreFiringWeight_Nom ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "L1PreFiringWeight_Up" , &L1PreFiringWeight_Up ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "LHE_HT" , &LHE_HT ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "LHE_HTIncoming" , &LHE_HTIncoming ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "LHE_Vpt" , &LHE_Vpt ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "LHE_AlphaS" , &LHE_AlphaS ) ) ;
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "LHE_Njets" , &LHE_Njets ) ) ;
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "LHE_Nb" , &LHE_Nb ) ) ;
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "LHE_Nc" , &LHE_Nc ) ) ;
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "LHE_Nuds" , &LHE_Nuds ) ) ;
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "LHE_Nglu" , &LHE_Nglu ) ) ;
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "LHE_NpNLO" , &LHE_NpNLO ) ) ;
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "LHE_NpLO" , &LHE_NpLO ) ) ;
  branch_map_UInt_t.insert( std::pair<string,UInt_t*>( "nLHEPart" , &nLHEPart ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "LHEPart_pt" , LHEPart_pt ) ) ; //nLHEPart
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "LHEPart_eta" , LHEPart_eta ) ) ; //nLHEPart
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "LHEPart_phi" , LHEPart_phi ) ) ; //nLHEPart
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "LHEPart_mass" , LHEPart_mass ) ) ; //nLHEPart
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "LHEPart_incomingpz" , LHEPart_incomingpz ) ) ; //nLHEPart
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "LHEPart_pdgId" , LHEPart_pdgId ) ) ; //nLHEPart
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "LHEPart_status" , LHEPart_status ) ) ; //nLHEPart
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "LHEPart_spin" , LHEPart_spin ) ) ; //nLHEPart
  branch_map_UInt_t.insert( std::pair<string,UInt_t*>( "nLowPtElectron" , &nLowPtElectron ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "LowPtElectron_ID" , LowPtElectron_ID ) ) ; //nLowPtElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "LowPtElectron_convVtxRadius" , LowPtElectron_convVtxRadius ) ) ; //nLowPtElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "LowPtElectron_deltaEtaSC" , LowPtElectron_deltaEtaSC ) ) ; //nLowPtElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "LowPtElectron_dxy" , LowPtElectron_dxy ) ) ; //nLowPtElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "LowPtElectron_dxyErr" , LowPtElectron_dxyErr ) ) ; //nLowPtElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "LowPtElectron_dz" , LowPtElectron_dz ) ) ; //nLowPtElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "LowPtElectron_dzErr" , LowPtElectron_dzErr ) ) ; //nLowPtElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "LowPtElectron_eInvMinusPInv" , LowPtElectron_eInvMinusPInv ) ) ; //nLowPtElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "LowPtElectron_embeddedID" , LowPtElectron_embeddedID ) ) ; //nLowPtElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "LowPtElectron_energyErr" , LowPtElectron_energyErr ) ) ; //nLowPtElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "LowPtElectron_eta" , LowPtElectron_eta ) ) ; //nLowPtElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "LowPtElectron_hoe" , LowPtElectron_hoe ) ) ; //nLowPtElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "LowPtElectron_mass" , LowPtElectron_mass ) ) ; //nLowPtElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "LowPtElectron_miniPFRelIso_all" , LowPtElectron_miniPFRelIso_all ) ) ; //nLowPtElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "LowPtElectron_miniPFRelIso_chg" , LowPtElectron_miniPFRelIso_chg ) ) ; //nLowPtElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "LowPtElectron_phi" , LowPtElectron_phi ) ) ; //nLowPtElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "LowPtElectron_pt" , LowPtElectron_pt ) ) ; //nLowPtElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "LowPtElectron_ptbiased" , LowPtElectron_ptbiased ) ) ; //nLowPtElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "LowPtElectron_r9" , LowPtElectron_r9 ) ) ; //nLowPtElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "LowPtElectron_scEtOverPt" , LowPtElectron_scEtOverPt ) ) ; //nLowPtElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "LowPtElectron_sieie" , LowPtElectron_sieie ) ) ; //nLowPtElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "LowPtElectron_unbiased" , LowPtElectron_unbiased ) ) ; //nLowPtElectron
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "LowPtElectron_charge" , LowPtElectron_charge ) ) ; //nLowPtElectron
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "LowPtElectron_convWP" , LowPtElectron_convWP ) ) ; //nLowPtElectron
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "LowPtElectron_pdgId" , LowPtElectron_pdgId ) ) ; //nLowPtElectron
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "LowPtElectron_convVeto" , LowPtElectron_convVeto ) ) ; //nLowPtElectron
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "LowPtElectron_lostHits" , LowPtElectron_lostHits ) ) ; //nLowPtElectron
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "GenMET_phi" , &GenMET_phi ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "GenMET_pt" , &GenMET_pt ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "MET_MetUnclustEnUpDeltaX" , &MET_MetUnclustEnUpDeltaX ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "MET_MetUnclustEnUpDeltaY" , &MET_MetUnclustEnUpDeltaY ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "MET_covXX" , &MET_covXX ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "MET_covXY" , &MET_covXY ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "MET_covYY" , &MET_covYY ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "MET_phi" , &MET_phi ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "MET_pt" , &MET_pt ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "MET_significance" , &MET_significance ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "MET_sumEt" , &MET_sumEt ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "MET_sumPtUnclustered" , &MET_sumPtUnclustered ) ) ;
  branch_map_UInt_t.insert( std::pair<string,UInt_t*>( "nMuon" , &nMuon ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Muon_dxy" , Muon_dxy ) ) ; //nMuon
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Muon_dxyErr" , Muon_dxyErr ) ) ; //nMuon
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Muon_dxybs" , Muon_dxybs ) ) ; //nMuon
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Muon_dz" , Muon_dz ) ) ; //nMuon
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Muon_dzErr" , Muon_dzErr ) ) ; //nMuon
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Muon_eta" , Muon_eta ) ) ; //nMuon
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Muon_ip3d" , Muon_ip3d ) ) ; //nMuon
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Muon_jetPtRelv2" , Muon_jetPtRelv2 ) ) ; //nMuon
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Muon_jetRelIso" , Muon_jetRelIso ) ) ; //nMuon
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Muon_mass" , Muon_mass ) ) ; //nMuon
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Muon_miniPFRelIso_all" , Muon_miniPFRelIso_all ) ) ; //nMuon
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Muon_miniPFRelIso_chg" , Muon_miniPFRelIso_chg ) ) ; //nMuon
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Muon_pfRelIso03_all" , Muon_pfRelIso03_all ) ) ; //nMuon
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Muon_pfRelIso03_chg" , Muon_pfRelIso03_chg ) ) ; //nMuon
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Muon_pfRelIso04_all" , Muon_pfRelIso04_all ) ) ; //nMuon
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Muon_phi" , Muon_phi ) ) ; //nMuon
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Muon_pt" , Muon_pt ) ) ; //nMuon
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Muon_ptErr" , Muon_ptErr ) ) ; //nMuon
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Muon_segmentComp" , Muon_segmentComp ) ) ; //nMuon
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Muon_sip3d" , Muon_sip3d ) ) ; //nMuon
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Muon_softMva" , Muon_softMva ) ) ; //nMuon
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Muon_tkRelIso" , Muon_tkRelIso ) ) ; //nMuon
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Muon_tunepRelPt" , Muon_tunepRelPt ) ) ; //nMuon
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Muon_mvaLowPt" , Muon_mvaLowPt ) ) ; //nMuon
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Muon_mvaTTH" , Muon_mvaTTH ) ) ; //nMuon
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "Muon_charge" , Muon_charge ) ) ; //nMuon
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "Muon_jetIdx" , Muon_jetIdx ) ) ; //nMuon
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "Muon_nStations" , Muon_nStations ) ) ; //nMuon
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "Muon_nTrackerLayers" , Muon_nTrackerLayers ) ) ; //nMuon
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "Muon_pdgId" , Muon_pdgId ) ) ; //nMuon
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "Muon_tightCharge" , Muon_tightCharge ) ) ; //nMuon
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "Muon_fsrPhotonIdx" , Muon_fsrPhotonIdx ) ) ; //nMuon
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "Muon_highPtId" , Muon_highPtId ) ) ; //nMuon
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Muon_highPurity" , Muon_highPurity ) ) ; //nMuon
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Muon_inTimeMuon" , Muon_inTimeMuon ) ) ; //nMuon
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Muon_isGlobal" , Muon_isGlobal ) ) ; //nMuon
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Muon_isPFcand" , Muon_isPFcand ) ) ; //nMuon
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Muon_isStandalone" , Muon_isStandalone ) ) ; //nMuon
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Muon_isTracker" , Muon_isTracker ) ) ; //nMuon
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "Muon_jetNDauCharged" , Muon_jetNDauCharged ) ) ; //nMuon
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Muon_looseId" , Muon_looseId ) ) ; //nMuon
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Muon_mediumId" , Muon_mediumId ) ) ; //nMuon
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Muon_mediumPromptId" , Muon_mediumPromptId ) ) ; //nMuon
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "Muon_miniIsoId" , Muon_miniIsoId ) ) ; //nMuon
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "Muon_multiIsoId" , Muon_multiIsoId ) ) ; //nMuon
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "Muon_mvaId" , Muon_mvaId ) ) ; //nMuon
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "Muon_mvaLowPtId" , Muon_mvaLowPtId ) ) ; //nMuon
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "Muon_pfIsoId" , Muon_pfIsoId ) ) ; //nMuon
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "Muon_puppiIsoId" , Muon_puppiIsoId ) ) ; //nMuon
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Muon_softId" , Muon_softId ) ) ; //nMuon
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Muon_softMvaId" , Muon_softMvaId ) ) ; //nMuon
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Muon_tightId" , Muon_tightId ) ) ; //nMuon
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "Muon_tkIsoId" , Muon_tkIsoId ) ) ; //nMuon
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Muon_triggerIdLoose" , Muon_triggerIdLoose ) ) ; //nMuon
  branch_map_UInt_t.insert( std::pair<string,UInt_t*>( "nPhoton" , &nPhoton ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Photon_dEscaleDown" , Photon_dEscaleDown ) ) ; //nPhoton
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Photon_dEscaleUp" , Photon_dEscaleUp ) ) ; //nPhoton
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Photon_dEsigmaDown" , Photon_dEsigmaDown ) ) ; //nPhoton
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Photon_dEsigmaUp" , Photon_dEsigmaUp ) ) ; //nPhoton
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Photon_eCorr" , Photon_eCorr ) ) ; //nPhoton
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Photon_energyErr" , Photon_energyErr ) ) ; //nPhoton
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Photon_eta" , Photon_eta ) ) ; //nPhoton
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Photon_hoe" , Photon_hoe ) ) ; //nPhoton
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Photon_mass" , Photon_mass ) ) ; //nPhoton
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Photon_mvaID" , Photon_mvaID ) ) ; //nPhoton
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Photon_mvaID_Fall17V1p1" , Photon_mvaID_Fall17V1p1 ) ) ; //nPhoton
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Photon_pfRelIso03_all" , Photon_pfRelIso03_all ) ) ; //nPhoton
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Photon_pfRelIso03_chg" , Photon_pfRelIso03_chg ) ) ; //nPhoton
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Photon_phi" , Photon_phi ) ) ; //nPhoton
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Photon_pt" , Photon_pt ) ) ; //nPhoton
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Photon_r9" , Photon_r9 ) ) ; //nPhoton
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Photon_sieie" , Photon_sieie ) ) ; //nPhoton
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "Photon_charge" , Photon_charge ) ) ; //nPhoton
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "Photon_cutBased" , Photon_cutBased ) ) ; //nPhoton
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "Photon_cutBased_Fall17V1Bitmap" , Photon_cutBased_Fall17V1Bitmap ) ) ; //nPhoton
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "Photon_electronIdx" , Photon_electronIdx ) ) ; //nPhoton
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "Photon_jetIdx" , Photon_jetIdx ) ) ; //nPhoton
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "Photon_pdgId" , Photon_pdgId ) ) ; //nPhoton
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "Photon_vidNestedWPBitmap" , Photon_vidNestedWPBitmap ) ) ; //nPhoton
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Photon_electronVeto" , Photon_electronVeto ) ) ; //nPhoton
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Photon_isScEtaEB" , Photon_isScEtaEB ) ) ; //nPhoton
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Photon_isScEtaEE" , Photon_isScEtaEE ) ) ; //nPhoton
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Photon_mvaID_WP80" , Photon_mvaID_WP80 ) ) ; //nPhoton
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Photon_mvaID_WP90" , Photon_mvaID_WP90 ) ) ; //nPhoton
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Photon_pixelSeed" , Photon_pixelSeed ) ) ; //nPhoton
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "Photon_seedGain" , Photon_seedGain ) ) ; //nPhoton
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Pileup_nTrueInt" , &Pileup_nTrueInt ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Pileup_pudensity" , &Pileup_pudensity ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Pileup_gpudensity" , &Pileup_gpudensity ) ) ;
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "Pileup_nPU" , &Pileup_nPU ) ) ;
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "Pileup_sumEOOT" , &Pileup_sumEOOT ) ) ;
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "Pileup_sumLOOT" , &Pileup_sumLOOT ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "PuppiMET_phi" , &PuppiMET_phi ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "PuppiMET_phiJERDown" , &PuppiMET_phiJERDown ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "PuppiMET_phiJERUp" , &PuppiMET_phiJERUp ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "PuppiMET_phiJESDown" , &PuppiMET_phiJESDown ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "PuppiMET_phiJESUp" , &PuppiMET_phiJESUp ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "PuppiMET_phiUnclusteredDown" , &PuppiMET_phiUnclusteredDown ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "PuppiMET_phiUnclusteredUp" , &PuppiMET_phiUnclusteredUp ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "PuppiMET_pt" , &PuppiMET_pt ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "PuppiMET_ptJERDown" , &PuppiMET_ptJERDown ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "PuppiMET_ptJERUp" , &PuppiMET_ptJERUp ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "PuppiMET_ptJESDown" , &PuppiMET_ptJESDown ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "PuppiMET_ptJESUp" , &PuppiMET_ptJESUp ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "PuppiMET_ptUnclusteredDown" , &PuppiMET_ptUnclusteredDown ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "PuppiMET_ptUnclusteredUp" , &PuppiMET_ptUnclusteredUp ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "PuppiMET_sumEt" , &PuppiMET_sumEt ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "RawMET_phi" , &RawMET_phi ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "RawMET_pt" , &RawMET_pt ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "RawMET_sumEt" , &RawMET_sumEt ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "RawPuppiMET_phi" , &RawPuppiMET_phi ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "RawPuppiMET_pt" , &RawPuppiMET_pt ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "RawPuppiMET_sumEt" , &RawPuppiMET_sumEt ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "fixedGridRhoFastjetAll" , &fixedGridRhoFastjetAll ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "fixedGridRhoFastjetCentral" , &fixedGridRhoFastjetCentral ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "fixedGridRhoFastjetCentralCalo" , &fixedGridRhoFastjetCentralCalo ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "fixedGridRhoFastjetCentralChargedPileUp" , &fixedGridRhoFastjetCentralChargedPileUp ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "fixedGridRhoFastjetCentralNeutral" , &fixedGridRhoFastjetCentralNeutral ) ) ;
  branch_map_UInt_t.insert( std::pair<string,UInt_t*>( "nGenDressedLepton" , &nGenDressedLepton ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "GenDressedLepton_eta" , GenDressedLepton_eta ) ) ; //nGenDressedLepton
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "GenDressedLepton_mass" , GenDressedLepton_mass ) ) ; //nGenDressedLepton
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "GenDressedLepton_phi" , GenDressedLepton_phi ) ) ; //nGenDressedLepton
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "GenDressedLepton_pt" , GenDressedLepton_pt ) ) ; //nGenDressedLepton
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "GenDressedLepton_pdgId" , GenDressedLepton_pdgId ) ) ; //nGenDressedLepton
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "GenDressedLepton_hasTauAnc" , GenDressedLepton_hasTauAnc ) ) ; //nGenDressedLepton
  branch_map_UInt_t.insert( std::pair<string,UInt_t*>( "nGenIsolatedPhoton" , &nGenIsolatedPhoton ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "GenIsolatedPhoton_eta" , GenIsolatedPhoton_eta ) ) ; //nGenIsolatedPhoton
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "GenIsolatedPhoton_mass" , GenIsolatedPhoton_mass ) ) ; //nGenIsolatedPhoton
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "GenIsolatedPhoton_phi" , GenIsolatedPhoton_phi ) ) ; //nGenIsolatedPhoton
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "GenIsolatedPhoton_pt" , GenIsolatedPhoton_pt ) ) ; //nGenIsolatedPhoton
  branch_map_UInt_t.insert( std::pair<string,UInt_t*>( "nSoftActivityJet" , &nSoftActivityJet ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "SoftActivityJet_eta" , SoftActivityJet_eta ) ) ; //nSoftActivityJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "SoftActivityJet_phi" , SoftActivityJet_phi ) ) ; //nSoftActivityJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "SoftActivityJet_pt" , SoftActivityJet_pt ) ) ; //nSoftActivityJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "SoftActivityJetHT" , &SoftActivityJetHT ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "SoftActivityJetHT10" , &SoftActivityJetHT10 ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "SoftActivityJetHT2" , &SoftActivityJetHT2 ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "SoftActivityJetHT5" , &SoftActivityJetHT5 ) ) ;
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "SoftActivityJetNjets10" , &SoftActivityJetNjets10 ) ) ;
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "SoftActivityJetNjets2" , &SoftActivityJetNjets2 ) ) ;
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "SoftActivityJetNjets5" , &SoftActivityJetNjets5 ) ) ;
  branch_map_UInt_t.insert( std::pair<string,UInt_t*>( "nSubJet" , &nSubJet ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "SubJet_btagCSVV2" , SubJet_btagCSVV2 ) ) ; //nSubJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "SubJet_btagDeepB" , SubJet_btagDeepB ) ) ; //nSubJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "SubJet_eta" , SubJet_eta ) ) ; //nSubJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "SubJet_mass" , SubJet_mass ) ) ; //nSubJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "SubJet_n2b1" , SubJet_n2b1 ) ) ; //nSubJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "SubJet_n3b1" , SubJet_n3b1 ) ) ; //nSubJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "SubJet_phi" , SubJet_phi ) ) ; //nSubJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "SubJet_pt" , SubJet_pt ) ) ; //nSubJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "SubJet_rawFactor" , SubJet_rawFactor ) ) ; //nSubJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "SubJet_tau1" , SubJet_tau1 ) ) ; //nSubJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "SubJet_tau2" , SubJet_tau2 ) ) ; //nSubJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "SubJet_tau3" , SubJet_tau3 ) ) ; //nSubJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "SubJet_tau4" , SubJet_tau4 ) ) ; //nSubJet
  branch_map_UInt_t.insert( std::pair<string,UInt_t*>( "nTau" , &nTau ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Tau_chargedIso" , Tau_chargedIso ) ) ; //nTau
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Tau_dxy" , Tau_dxy ) ) ; //nTau
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Tau_dz" , Tau_dz ) ) ; //nTau
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Tau_eta" , Tau_eta ) ) ; //nTau
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Tau_leadTkDeltaEta" , Tau_leadTkDeltaEta ) ) ; //nTau
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Tau_leadTkDeltaPhi" , Tau_leadTkDeltaPhi ) ) ; //nTau
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Tau_leadTkPtOverTauPt" , Tau_leadTkPtOverTauPt ) ) ; //nTau
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Tau_mass" , Tau_mass ) ) ; //nTau
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Tau_neutralIso" , Tau_neutralIso ) ) ; //nTau
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Tau_phi" , Tau_phi ) ) ; //nTau
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Tau_photonsOutsideSignalCone" , Tau_photonsOutsideSignalCone ) ) ; //nTau
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Tau_pt" , Tau_pt ) ) ; //nTau
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Tau_puCorr" , Tau_puCorr ) ) ; //nTau
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Tau_rawDeepTau2017v2p1VSe" , Tau_rawDeepTau2017v2p1VSe ) ) ; //nTau
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Tau_rawDeepTau2017v2p1VSjet" , Tau_rawDeepTau2017v2p1VSjet ) ) ; //nTau
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Tau_rawDeepTau2017v2p1VSmu" , Tau_rawDeepTau2017v2p1VSmu ) ) ; //nTau
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Tau_rawIso" , Tau_rawIso ) ) ; //nTau
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "Tau_rawIsodR03" , Tau_rawIsodR03 ) ) ; //nTau
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "Tau_charge" , Tau_charge ) ) ; //nTau
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "Tau_decayMode" , Tau_decayMode ) ) ; //nTau
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "Tau_jetIdx" , Tau_jetIdx ) ) ; //nTau
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Tau_idAntiEleDeadECal" , Tau_idAntiEleDeadECal ) ) ; //nTau
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "Tau_idAntiMu" , Tau_idAntiMu ) ) ; //nTau
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Tau_idDecayModeOldDMs" , Tau_idDecayModeOldDMs ) ) ; //nTau
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "Tau_idDeepTau2017v2p1VSe" , Tau_idDeepTau2017v2p1VSe ) ) ; //nTau
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "Tau_idDeepTau2017v2p1VSjet" , Tau_idDeepTau2017v2p1VSjet ) ) ; //nTau
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "Tau_idDeepTau2017v2p1VSmu" , Tau_idDeepTau2017v2p1VSmu ) ) ; //nTau
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "TkMET_phi" , &TkMET_phi ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "TkMET_pt" , &TkMET_pt ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "TkMET_sumEt" , &TkMET_sumEt ) ) ;
  branch_map_UInt_t.insert( std::pair<string,UInt_t*>( "nTrigObj" , &nTrigObj ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "TrigObj_pt" , TrigObj_pt ) ) ; //nTrigObj
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "TrigObj_eta" , TrigObj_eta ) ) ; //nTrigObj
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "TrigObj_phi" , TrigObj_phi ) ) ; //nTrigObj
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "TrigObj_l1pt" , TrigObj_l1pt ) ) ; //nTrigObj
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "TrigObj_l1pt_2" , TrigObj_l1pt_2 ) ) ; //nTrigObj
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "TrigObj_l2pt" , TrigObj_l2pt ) ) ; //nTrigObj
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "TrigObj_id" , TrigObj_id ) ) ; //nTrigObj
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "TrigObj_l1iso" , TrigObj_l1iso ) ) ; //nTrigObj
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "TrigObj_l1charge" , TrigObj_l1charge ) ) ; //nTrigObj
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "TrigObj_filterBits" , TrigObj_filterBits ) ) ; //nTrigObj
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "genTtbarId" , &genTtbarId ) ) ;
  branch_map_UInt_t.insert( std::pair<string,UInt_t*>( "nOtherPV" , &nOtherPV ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "OtherPV_z" , OtherPV_z ) ) ; //nOtherPV
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "PV_ndof" , &PV_ndof ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "PV_x" , &PV_x ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "PV_y" , &PV_y ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "PV_z" , &PV_z ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "PV_chi2" , &PV_chi2 ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "PV_score" , &PV_score ) ) ;
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "PV_npvs" , &PV_npvs ) ) ;
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "PV_npvsGood" , &PV_npvsGood ) ) ;
  branch_map_UInt_t.insert( std::pair<string,UInt_t*>( "nSV" , &nSV ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "SV_dlen" , SV_dlen ) ) ; //nSV
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "SV_dlenSig" , SV_dlenSig ) ) ; //nSV
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "SV_dxy" , SV_dxy ) ) ; //nSV
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "SV_dxySig" , SV_dxySig ) ) ; //nSV
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "SV_pAngle" , SV_pAngle ) ) ; //nSV
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "SV_charge" , SV_charge ) ) ; //nSV
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "boostedTau_genPartIdx" , boostedTau_genPartIdx ) ) ; //nboostedTau
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "boostedTau_genPartFlav" , boostedTau_genPartFlav ) ) ; //nboostedTau
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "Electron_genPartIdx" , Electron_genPartIdx ) ) ; //nElectron
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "Electron_genPartFlav" , Electron_genPartFlav ) ) ; //nElectron
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "FatJet_genJetAK8Idx" , FatJet_genJetAK8Idx ) ) ; //nFatJet
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "FatJet_hadronFlavour" , FatJet_hadronFlavour ) ) ; //nFatJet
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "FatJet_nBHadrons" , FatJet_nBHadrons ) ) ; //nFatJet
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "FatJet_nCHadrons" , FatJet_nCHadrons ) ) ; //nFatJet
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "GenJetAK8_partonFlavour" , GenJetAK8_partonFlavour ) ) ; //nGenJetAK8
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "GenJetAK8_hadronFlavour" , GenJetAK8_hadronFlavour ) ) ; //nGenJetAK8
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "GenJet_partonFlavour" , GenJet_partonFlavour ) ) ; //nGenJet
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "GenJet_hadronFlavour" , GenJet_hadronFlavour ) ) ; //nGenJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "GenVtx_t0" , &GenVtx_t0 ) ) ;
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "Jet_genJetIdx" , Jet_genJetIdx ) ) ; //nJet
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "Jet_hadronFlavour" , Jet_hadronFlavour ) ) ; //nJet
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "Jet_partonFlavour" , Jet_partonFlavour ) ) ; //nJet
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "LowPtElectron_genPartIdx" , LowPtElectron_genPartIdx ) ) ; //nLowPtElectron
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "LowPtElectron_genPartFlav" , LowPtElectron_genPartFlav ) ) ; //nLowPtElectron
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "Muon_genPartIdx" , Muon_genPartIdx ) ) ; //nMuon
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "Muon_genPartFlav" , Muon_genPartFlav ) ) ; //nMuon
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "Photon_genPartIdx" , Photon_genPartIdx ) ) ; //nPhoton
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "Photon_genPartFlav" , Photon_genPartFlav ) ) ; //nPhoton
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "MET_fiducialGenPhi" , &MET_fiducialGenPhi ) ) ;
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "MET_fiducialGenPt" , &MET_fiducialGenPt ) ) ;
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "Electron_cleanmask" , Electron_cleanmask ) ) ; //nElectron
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "Jet_cleanmask" , Jet_cleanmask ) ) ; //nJet
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "Muon_cleanmask" , Muon_cleanmask ) ) ; //nMuon
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "Photon_cleanmask" , Photon_cleanmask ) ) ; //nPhoton
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "Tau_cleanmask" , Tau_cleanmask ) ) ; //nTau
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "SubJet_hadronFlavour" , SubJet_hadronFlavour ) ) ; //nSubJet
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "SubJet_nBHadrons" , SubJet_nBHadrons ) ) ; //nSubJet
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "SubJet_nCHadrons" , SubJet_nCHadrons ) ) ; //nSubJet
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "SV_chi2" , SV_chi2 ) ) ; //nSV
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "SV_eta" , SV_eta ) ) ; //nSV
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "SV_mass" , SV_mass ) ) ; //nSV
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "SV_ndof" , SV_ndof ) ) ; //nSV
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "SV_phi" , SV_phi ) ) ; //nSV
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "SV_pt" , SV_pt ) ) ; //nSV
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "SV_x" , SV_x ) ) ; //nSV
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "SV_y" , SV_y ) ) ; //nSV
  branch_map_Float_t.insert( std::pair<string,Float_t*>( "SV_z" , SV_z ) ) ; //nSV
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "SV_ntracks" , SV_ntracks ) ) ; //nSV
  branch_map_Int_t.insert( std::pair<string,Int_t*>( "Tau_genPartIdx" , Tau_genPartIdx ) ) ; //nTau
  branch_map_UChar_t.insert( std::pair<string,UChar_t*>( "Tau_genPartFlav" , Tau_genPartFlav ) ) ; //nTau
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Flag_HBHENoiseFilter" , &Flag_HBHENoiseFilter ) ) ;
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Flag_HBHENoiseIsoFilter" , &Flag_HBHENoiseIsoFilter ) ) ;
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Flag_CSCTightHaloFilter" , &Flag_CSCTightHaloFilter ) ) ;
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Flag_CSCTightHaloTrkMuUnvetoFilter" , &Flag_CSCTightHaloTrkMuUnvetoFilter ) ) ;
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Flag_CSCTightHalo2015Filter" , &Flag_CSCTightHalo2015Filter ) ) ;
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Flag_globalTightHalo2016Filter" , &Flag_globalTightHalo2016Filter ) ) ;
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Flag_globalSuperTightHalo2016Filter" , &Flag_globalSuperTightHalo2016Filter ) ) ;
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Flag_HcalStripHaloFilter" , &Flag_HcalStripHaloFilter ) ) ;
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Flag_hcalLaserEventFilter" , &Flag_hcalLaserEventFilter ) ) ;
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Flag_EcalDeadCellTriggerPrimitiveFilter" , &Flag_EcalDeadCellTriggerPrimitiveFilter ) ) ;
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Flag_EcalDeadCellBoundaryEnergyFilter" , &Flag_EcalDeadCellBoundaryEnergyFilter ) ) ;
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Flag_ecalBadCalibFilter" , &Flag_ecalBadCalibFilter ) ) ;
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Flag_goodVertices" , &Flag_goodVertices ) ) ;
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Flag_eeBadScFilter" , &Flag_eeBadScFilter ) ) ;
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Flag_ecalLaserCorrFilter" , &Flag_ecalLaserCorrFilter ) ) ;
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Flag_trkPOGFilters" , &Flag_trkPOGFilters ) ) ;
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Flag_chargedHadronTrackResolutionFilter" , &Flag_chargedHadronTrackResolutionFilter ) ) ;
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Flag_muonBadTrackFilter" , &Flag_muonBadTrackFilter ) ) ;
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Flag_BadChargedCandidateFilter" , &Flag_BadChargedCandidateFilter ) ) ;
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Flag_BadPFMuonFilter" , &Flag_BadPFMuonFilter ) ) ;
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Flag_BadPFMuonDzFilter" , &Flag_BadPFMuonDzFilter ) ) ;
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Flag_hfNoisyHitsFilter" , &Flag_hfNoisyHitsFilter ) ) ;
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Flag_BadChargedCandidateSummer16Filter" , &Flag_BadChargedCandidateSummer16Filter ) ) ;
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Flag_BadPFMuonSummer16Filter" , &Flag_BadPFMuonSummer16Filter ) ) ;
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Flag_trkPOG_manystripclus53X" , &Flag_trkPOG_manystripclus53X ) ) ;
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Flag_trkPOG_toomanystripclus53X" , &Flag_trkPOG_toomanystripclus53X ) ) ;
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Flag_trkPOG_logErrorTooManyClusters" , &Flag_trkPOG_logErrorTooManyClusters ) ) ;
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "Flag_METFilters" , &Flag_METFilters ) ) ;
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "L1Reco_step" , &L1Reco_step ) ) ;
  branch_map_Bool_t.insert( std::pair<string,Bool_t*>( "L1simulation_step" , &L1simulation_step ) ) ;

}

NanoTree::~NanoTree()
{
  if (!fChain) return;
  delete fChain->GetCurrentFile();
}

Int_t NanoTree::GetEntry(Long64_t entry)
{
  // Read contents of entry.
  if (!fChain) return 0;
  return fChain->GetEntry(entry);
}
Long64_t NanoTree::LoadTree(Long64_t entry)
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

void NanoTree::Init(TTree *tree)
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

  fChain->SetBranchAddress("run", &run, &b_run);
  fChain->SetBranchAddress("luminosityBlock", &luminosityBlock, &b_luminosityBlock);
  fChain->SetBranchAddress("event", &event, &b_event);
  fChain->SetBranchAddress("HTXS_Higgs_pt", &HTXS_Higgs_pt, &b_HTXS_Higgs_pt);
  fChain->SetBranchAddress("HTXS_Higgs_y", &HTXS_Higgs_y, &b_HTXS_Higgs_y);
  fChain->SetBranchAddress("HTXS_stage1_1_cat_pTjet25GeV", &HTXS_stage1_1_cat_pTjet25GeV, &b_HTXS_stage1_1_cat_pTjet25GeV);
  fChain->SetBranchAddress("HTXS_stage1_1_cat_pTjet30GeV", &HTXS_stage1_1_cat_pTjet30GeV, &b_HTXS_stage1_1_cat_pTjet30GeV);
  fChain->SetBranchAddress("HTXS_stage1_1_fine_cat_pTjet25GeV", &HTXS_stage1_1_fine_cat_pTjet25GeV, &b_HTXS_stage1_1_fine_cat_pTjet25GeV);
  fChain->SetBranchAddress("HTXS_stage1_1_fine_cat_pTjet30GeV", &HTXS_stage1_1_fine_cat_pTjet30GeV, &b_HTXS_stage1_1_fine_cat_pTjet30GeV);
  fChain->SetBranchAddress("HTXS_stage1_2_cat_pTjet25GeV", &HTXS_stage1_2_cat_pTjet25GeV, &b_HTXS_stage1_2_cat_pTjet25GeV);
  fChain->SetBranchAddress("HTXS_stage1_2_cat_pTjet30GeV", &HTXS_stage1_2_cat_pTjet30GeV, &b_HTXS_stage1_2_cat_pTjet30GeV);
  fChain->SetBranchAddress("HTXS_stage1_2_fine_cat_pTjet25GeV", &HTXS_stage1_2_fine_cat_pTjet25GeV, &b_HTXS_stage1_2_fine_cat_pTjet25GeV);
  fChain->SetBranchAddress("HTXS_stage1_2_fine_cat_pTjet30GeV", &HTXS_stage1_2_fine_cat_pTjet30GeV, &b_HTXS_stage1_2_fine_cat_pTjet30GeV);
  fChain->SetBranchAddress("HTXS_stage_0", &HTXS_stage_0, &b_HTXS_stage_0);
  fChain->SetBranchAddress("HTXS_stage_1_pTjet25", &HTXS_stage_1_pTjet25, &b_HTXS_stage_1_pTjet25);
  fChain->SetBranchAddress("HTXS_stage_1_pTjet30", &HTXS_stage_1_pTjet30, &b_HTXS_stage_1_pTjet30);
  fChain->SetBranchAddress("HTXS_njets25", &HTXS_njets25, &b_HTXS_njets25);
  fChain->SetBranchAddress("HTXS_njets30", &HTXS_njets30, &b_HTXS_njets30);
  fChain->SetBranchAddress("nboostedTau", &nboostedTau, &b_nboostedTau);
  fChain->SetBranchAddress("boostedTau_chargedIso", boostedTau_chargedIso, &b_boostedTau_chargedIso);
  fChain->SetBranchAddress("boostedTau_eta", boostedTau_eta, &b_boostedTau_eta);
  fChain->SetBranchAddress("boostedTau_leadTkDeltaEta", boostedTau_leadTkDeltaEta, &b_boostedTau_leadTkDeltaEta);
  fChain->SetBranchAddress("boostedTau_leadTkDeltaPhi", boostedTau_leadTkDeltaPhi, &b_boostedTau_leadTkDeltaPhi);
  fChain->SetBranchAddress("boostedTau_leadTkPtOverTauPt", boostedTau_leadTkPtOverTauPt, &b_boostedTau_leadTkPtOverTauPt);
  fChain->SetBranchAddress("boostedTau_mass", boostedTau_mass, &b_boostedTau_mass);
  fChain->SetBranchAddress("boostedTau_neutralIso", boostedTau_neutralIso, &b_boostedTau_neutralIso);
  fChain->SetBranchAddress("boostedTau_phi", boostedTau_phi, &b_boostedTau_phi);
  fChain->SetBranchAddress("boostedTau_photonsOutsideSignalCone", boostedTau_photonsOutsideSignalCone, &b_boostedTau_photonsOutsideSignalCone);
  fChain->SetBranchAddress("boostedTau_pt", boostedTau_pt, &b_boostedTau_pt);
  fChain->SetBranchAddress("boostedTau_puCorr", boostedTau_puCorr, &b_boostedTau_puCorr);
  fChain->SetBranchAddress("boostedTau_rawAntiEle2018", boostedTau_rawAntiEle2018, &b_boostedTau_rawAntiEle2018);
  fChain->SetBranchAddress("boostedTau_rawIso", boostedTau_rawIso, &b_boostedTau_rawIso);
  fChain->SetBranchAddress("boostedTau_rawIsodR03", boostedTau_rawIsodR03, &b_boostedTau_rawIsodR03);
  fChain->SetBranchAddress("boostedTau_rawMVAnewDM2017v2", boostedTau_rawMVAnewDM2017v2, &b_boostedTau_rawMVAnewDM2017v2);
  fChain->SetBranchAddress("boostedTau_rawMVAoldDM2017v2", boostedTau_rawMVAoldDM2017v2, &b_boostedTau_rawMVAoldDM2017v2);
  fChain->SetBranchAddress("boostedTau_rawMVAoldDMdR032017v2", boostedTau_rawMVAoldDMdR032017v2, &b_boostedTau_rawMVAoldDMdR032017v2);
  fChain->SetBranchAddress("boostedTau_charge", boostedTau_charge, &b_boostedTau_charge);
  fChain->SetBranchAddress("boostedTau_decayMode", boostedTau_decayMode, &b_boostedTau_decayMode);
  fChain->SetBranchAddress("boostedTau_jetIdx", boostedTau_jetIdx, &b_boostedTau_jetIdx);
  fChain->SetBranchAddress("boostedTau_rawAntiEleCat2018", boostedTau_rawAntiEleCat2018, &b_boostedTau_rawAntiEleCat2018);
  fChain->SetBranchAddress("boostedTau_idAntiEle2018", boostedTau_idAntiEle2018, &b_boostedTau_idAntiEle2018);
  fChain->SetBranchAddress("boostedTau_idAntiMu", boostedTau_idAntiMu, &b_boostedTau_idAntiMu);
  fChain->SetBranchAddress("boostedTau_idMVAnewDM2017v2", boostedTau_idMVAnewDM2017v2, &b_boostedTau_idMVAnewDM2017v2);
  fChain->SetBranchAddress("boostedTau_idMVAoldDM2017v2", boostedTau_idMVAoldDM2017v2, &b_boostedTau_idMVAoldDM2017v2);
  fChain->SetBranchAddress("boostedTau_idMVAoldDMdR032017v2", boostedTau_idMVAoldDMdR032017v2, &b_boostedTau_idMVAoldDMdR032017v2);
  fChain->SetBranchAddress("btagWeight_CSVV2", &btagWeight_CSVV2, &b_btagWeight_CSVV2);
  fChain->SetBranchAddress("btagWeight_DeepCSVB", &btagWeight_DeepCSVB, &b_btagWeight_DeepCSVB);
  fChain->SetBranchAddress("CaloMET_phi", &CaloMET_phi, &b_CaloMET_phi);
  fChain->SetBranchAddress("CaloMET_pt", &CaloMET_pt, &b_CaloMET_pt);
  fChain->SetBranchAddress("CaloMET_sumEt", &CaloMET_sumEt, &b_CaloMET_sumEt);
  fChain->SetBranchAddress("ChsMET_phi", &ChsMET_phi, &b_ChsMET_phi);
  fChain->SetBranchAddress("ChsMET_pt", &ChsMET_pt, &b_ChsMET_pt);
  fChain->SetBranchAddress("ChsMET_sumEt", &ChsMET_sumEt, &b_ChsMET_sumEt);
  fChain->SetBranchAddress("nCorrT1METJet", &nCorrT1METJet, &b_nCorrT1METJet);
  fChain->SetBranchAddress("CorrT1METJet_area", CorrT1METJet_area, &b_CorrT1METJet_area);
  fChain->SetBranchAddress("CorrT1METJet_eta", CorrT1METJet_eta, &b_CorrT1METJet_eta);
  fChain->SetBranchAddress("CorrT1METJet_muonSubtrFactor", CorrT1METJet_muonSubtrFactor, &b_CorrT1METJet_muonSubtrFactor);
  fChain->SetBranchAddress("CorrT1METJet_phi", CorrT1METJet_phi, &b_CorrT1METJet_phi);
  fChain->SetBranchAddress("CorrT1METJet_rawPt", CorrT1METJet_rawPt, &b_CorrT1METJet_rawPt);
  fChain->SetBranchAddress("DeepMETResolutionTune_phi", &DeepMETResolutionTune_phi, &b_DeepMETResolutionTune_phi);
  fChain->SetBranchAddress("DeepMETResolutionTune_pt", &DeepMETResolutionTune_pt, &b_DeepMETResolutionTune_pt);
  fChain->SetBranchAddress("DeepMETResponseTune_phi", &DeepMETResponseTune_phi, &b_DeepMETResponseTune_phi);
  fChain->SetBranchAddress("DeepMETResponseTune_pt", &DeepMETResponseTune_pt, &b_DeepMETResponseTune_pt);
  fChain->SetBranchAddress("nElectron", &nElectron, &b_nElectron);
  fChain->SetBranchAddress("Electron_dEscaleDown", Electron_dEscaleDown, &b_Electron_dEscaleDown);
  fChain->SetBranchAddress("Electron_dEscaleUp", Electron_dEscaleUp, &b_Electron_dEscaleUp);
  fChain->SetBranchAddress("Electron_dEsigmaDown", Electron_dEsigmaDown, &b_Electron_dEsigmaDown);
  fChain->SetBranchAddress("Electron_dEsigmaUp", Electron_dEsigmaUp, &b_Electron_dEsigmaUp);
  fChain->SetBranchAddress("Electron_deltaEtaSC", Electron_deltaEtaSC, &b_Electron_deltaEtaSC);
  fChain->SetBranchAddress("Electron_dr03EcalRecHitSumEt", Electron_dr03EcalRecHitSumEt, &b_Electron_dr03EcalRecHitSumEt);
  fChain->SetBranchAddress("Electron_dr03HcalDepth1TowerSumEt", Electron_dr03HcalDepth1TowerSumEt, &b_Electron_dr03HcalDepth1TowerSumEt);
  fChain->SetBranchAddress("Electron_dr03TkSumPt", Electron_dr03TkSumPt, &b_Electron_dr03TkSumPt);
  fChain->SetBranchAddress("Electron_dr03TkSumPtHEEP", Electron_dr03TkSumPtHEEP, &b_Electron_dr03TkSumPtHEEP);
  fChain->SetBranchAddress("Electron_dxy", Electron_dxy, &b_Electron_dxy);
  fChain->SetBranchAddress("Electron_dxyErr", Electron_dxyErr, &b_Electron_dxyErr);
  fChain->SetBranchAddress("Electron_dz", Electron_dz, &b_Electron_dz);
  fChain->SetBranchAddress("Electron_dzErr", Electron_dzErr, &b_Electron_dzErr);
  fChain->SetBranchAddress("Electron_eCorr", Electron_eCorr, &b_Electron_eCorr);
  fChain->SetBranchAddress("Electron_eInvMinusPInv", Electron_eInvMinusPInv, &b_Electron_eInvMinusPInv);
  fChain->SetBranchAddress("Electron_energyErr", Electron_energyErr, &b_Electron_energyErr);
  fChain->SetBranchAddress("Electron_eta", Electron_eta, &b_Electron_eta);
  fChain->SetBranchAddress("Electron_hoe", Electron_hoe, &b_Electron_hoe);
  fChain->SetBranchAddress("Electron_ip3d", Electron_ip3d, &b_Electron_ip3d);
  fChain->SetBranchAddress("Electron_jetPtRelv2", Electron_jetPtRelv2, &b_Electron_jetPtRelv2);
  fChain->SetBranchAddress("Electron_jetRelIso", Electron_jetRelIso, &b_Electron_jetRelIso);
  fChain->SetBranchAddress("Electron_mass", Electron_mass, &b_Electron_mass);
  fChain->SetBranchAddress("Electron_miniPFRelIso_all", Electron_miniPFRelIso_all, &b_Electron_miniPFRelIso_all);
  fChain->SetBranchAddress("Electron_miniPFRelIso_chg", Electron_miniPFRelIso_chg, &b_Electron_miniPFRelIso_chg);
  fChain->SetBranchAddress("Electron_mvaFall17V2Iso", Electron_mvaFall17V2Iso, &b_Electron_mvaFall17V2Iso);
  fChain->SetBranchAddress("Electron_mvaFall17V2noIso", Electron_mvaFall17V2noIso, &b_Electron_mvaFall17V2noIso);
  fChain->SetBranchAddress("Electron_pfRelIso03_all", Electron_pfRelIso03_all, &b_Electron_pfRelIso03_all);
  fChain->SetBranchAddress("Electron_pfRelIso03_chg", Electron_pfRelIso03_chg, &b_Electron_pfRelIso03_chg);
  fChain->SetBranchAddress("Electron_phi", Electron_phi, &b_Electron_phi);
  fChain->SetBranchAddress("Electron_pt", Electron_pt, &b_Electron_pt);
  fChain->SetBranchAddress("Electron_r9", Electron_r9, &b_Electron_r9);
  fChain->SetBranchAddress("Electron_scEtOverPt", Electron_scEtOverPt, &b_Electron_scEtOverPt);
  fChain->SetBranchAddress("Electron_sieie", Electron_sieie, &b_Electron_sieie);
  fChain->SetBranchAddress("Electron_sip3d", Electron_sip3d, &b_Electron_sip3d);
  fChain->SetBranchAddress("Electron_mvaTTH", Electron_mvaTTH, &b_Electron_mvaTTH);
  fChain->SetBranchAddress("Electron_charge", Electron_charge, &b_Electron_charge);
  fChain->SetBranchAddress("Electron_cutBased", Electron_cutBased, &b_Electron_cutBased);
  fChain->SetBranchAddress("Electron_jetIdx", Electron_jetIdx, &b_Electron_jetIdx);
  fChain->SetBranchAddress("Electron_pdgId", Electron_pdgId, &b_Electron_pdgId);
  fChain->SetBranchAddress("Electron_photonIdx", Electron_photonIdx, &b_Electron_photonIdx);
  fChain->SetBranchAddress("Electron_tightCharge", Electron_tightCharge, &b_Electron_tightCharge);
  fChain->SetBranchAddress("Electron_vidNestedWPBitmap", Electron_vidNestedWPBitmap, &b_Electron_vidNestedWPBitmap);
  fChain->SetBranchAddress("Electron_vidNestedWPBitmapHEEP", Electron_vidNestedWPBitmapHEEP, &b_Electron_vidNestedWPBitmapHEEP);
  fChain->SetBranchAddress("Electron_convVeto", Electron_convVeto, &b_Electron_convVeto);
  fChain->SetBranchAddress("Electron_cutBased_HEEP", Electron_cutBased_HEEP, &b_Electron_cutBased_HEEP);
  fChain->SetBranchAddress("Electron_isPFcand", Electron_isPFcand, &b_Electron_isPFcand);
  fChain->SetBranchAddress("Electron_jetNDauCharged", Electron_jetNDauCharged, &b_Electron_jetNDauCharged);
  fChain->SetBranchAddress("Electron_lostHits", Electron_lostHits, &b_Electron_lostHits);
  fChain->SetBranchAddress("Electron_mvaFall17V2Iso_WP80", Electron_mvaFall17V2Iso_WP80, &b_Electron_mvaFall17V2Iso_WP80);
  fChain->SetBranchAddress("Electron_mvaFall17V2Iso_WP90", Electron_mvaFall17V2Iso_WP90, &b_Electron_mvaFall17V2Iso_WP90);
  fChain->SetBranchAddress("Electron_mvaFall17V2Iso_WPL", Electron_mvaFall17V2Iso_WPL, &b_Electron_mvaFall17V2Iso_WPL);
  fChain->SetBranchAddress("Electron_mvaFall17V2noIso_WP80", Electron_mvaFall17V2noIso_WP80, &b_Electron_mvaFall17V2noIso_WP80);
  fChain->SetBranchAddress("Electron_mvaFall17V2noIso_WP90", Electron_mvaFall17V2noIso_WP90, &b_Electron_mvaFall17V2noIso_WP90);
  fChain->SetBranchAddress("Electron_mvaFall17V2noIso_WPL", Electron_mvaFall17V2noIso_WPL, &b_Electron_mvaFall17V2noIso_WPL);
  fChain->SetBranchAddress("Electron_seedGain", Electron_seedGain, &b_Electron_seedGain);
  fChain->SetBranchAddress("nFatJet", &nFatJet, &b_nFatJet);
  fChain->SetBranchAddress("FatJet_area", FatJet_area, &b_FatJet_area);
  fChain->SetBranchAddress("FatJet_btagCSVV2", FatJet_btagCSVV2, &b_FatJet_btagCSVV2);
  fChain->SetBranchAddress("FatJet_btagDDBvLV2", FatJet_btagDDBvLV2, &b_FatJet_btagDDBvLV2);
  fChain->SetBranchAddress("FatJet_btagDDCvBV2", FatJet_btagDDCvBV2, &b_FatJet_btagDDCvBV2);
  fChain->SetBranchAddress("FatJet_btagDDCvLV2", FatJet_btagDDCvLV2, &b_FatJet_btagDDCvLV2);
  fChain->SetBranchAddress("FatJet_btagDeepB", FatJet_btagDeepB, &b_FatJet_btagDeepB);
  fChain->SetBranchAddress("FatJet_btagHbb", FatJet_btagHbb, &b_FatJet_btagHbb);
  fChain->SetBranchAddress("FatJet_deepTagMD_H4qvsQCD", FatJet_deepTagMD_H4qvsQCD, &b_FatJet_deepTagMD_H4qvsQCD);
  fChain->SetBranchAddress("FatJet_deepTagMD_HbbvsQCD", FatJet_deepTagMD_HbbvsQCD, &b_FatJet_deepTagMD_HbbvsQCD);
  fChain->SetBranchAddress("FatJet_deepTagMD_TvsQCD", FatJet_deepTagMD_TvsQCD, &b_FatJet_deepTagMD_TvsQCD);
  fChain->SetBranchAddress("FatJet_deepTagMD_WvsQCD", FatJet_deepTagMD_WvsQCD, &b_FatJet_deepTagMD_WvsQCD);
  fChain->SetBranchAddress("FatJet_deepTagMD_ZHbbvsQCD", FatJet_deepTagMD_ZHbbvsQCD, &b_FatJet_deepTagMD_ZHbbvsQCD);
  fChain->SetBranchAddress("FatJet_deepTagMD_ZHccvsQCD", FatJet_deepTagMD_ZHccvsQCD, &b_FatJet_deepTagMD_ZHccvsQCD);
  fChain->SetBranchAddress("FatJet_deepTagMD_ZbbvsQCD", FatJet_deepTagMD_ZbbvsQCD, &b_FatJet_deepTagMD_ZbbvsQCD);
  fChain->SetBranchAddress("FatJet_deepTagMD_ZvsQCD", FatJet_deepTagMD_ZvsQCD, &b_FatJet_deepTagMD_ZvsQCD);
  fChain->SetBranchAddress("FatJet_deepTagMD_bbvsLight", FatJet_deepTagMD_bbvsLight, &b_FatJet_deepTagMD_bbvsLight);
  fChain->SetBranchAddress("FatJet_deepTagMD_ccvsLight", FatJet_deepTagMD_ccvsLight, &b_FatJet_deepTagMD_ccvsLight);
  fChain->SetBranchAddress("FatJet_deepTag_H", FatJet_deepTag_H, &b_FatJet_deepTag_H);
  fChain->SetBranchAddress("FatJet_deepTag_QCD", FatJet_deepTag_QCD, &b_FatJet_deepTag_QCD);
  fChain->SetBranchAddress("FatJet_deepTag_QCDothers", FatJet_deepTag_QCDothers, &b_FatJet_deepTag_QCDothers);
  fChain->SetBranchAddress("FatJet_deepTag_TvsQCD", FatJet_deepTag_TvsQCD, &b_FatJet_deepTag_TvsQCD);
  fChain->SetBranchAddress("FatJet_deepTag_WvsQCD", FatJet_deepTag_WvsQCD, &b_FatJet_deepTag_WvsQCD);
  fChain->SetBranchAddress("FatJet_deepTag_ZvsQCD", FatJet_deepTag_ZvsQCD, &b_FatJet_deepTag_ZvsQCD);
  fChain->SetBranchAddress("FatJet_eta", FatJet_eta, &b_FatJet_eta);
  fChain->SetBranchAddress("FatJet_mass", FatJet_mass, &b_FatJet_mass);
  fChain->SetBranchAddress("FatJet_msoftdrop", FatJet_msoftdrop, &b_FatJet_msoftdrop);
  fChain->SetBranchAddress("FatJet_n2b1", FatJet_n2b1, &b_FatJet_n2b1);
  fChain->SetBranchAddress("FatJet_n3b1", FatJet_n3b1, &b_FatJet_n3b1);
  fChain->SetBranchAddress("FatJet_particleNetMD_QCD", FatJet_particleNetMD_QCD, &b_FatJet_particleNetMD_QCD);
  fChain->SetBranchAddress("FatJet_particleNetMD_Xbb", FatJet_particleNetMD_Xbb, &b_FatJet_particleNetMD_Xbb);
  fChain->SetBranchAddress("FatJet_particleNetMD_Xcc", FatJet_particleNetMD_Xcc, &b_FatJet_particleNetMD_Xcc);
  fChain->SetBranchAddress("FatJet_particleNetMD_Xqq", FatJet_particleNetMD_Xqq, &b_FatJet_particleNetMD_Xqq);
  fChain->SetBranchAddress("FatJet_particleNet_H4qvsQCD", FatJet_particleNet_H4qvsQCD, &b_FatJet_particleNet_H4qvsQCD);
  fChain->SetBranchAddress("FatJet_particleNet_HbbvsQCD", FatJet_particleNet_HbbvsQCD, &b_FatJet_particleNet_HbbvsQCD);
  fChain->SetBranchAddress("FatJet_particleNet_HccvsQCD", FatJet_particleNet_HccvsQCD, &b_FatJet_particleNet_HccvsQCD);
  fChain->SetBranchAddress("FatJet_particleNet_QCD", FatJet_particleNet_QCD, &b_FatJet_particleNet_QCD);
  fChain->SetBranchAddress("FatJet_particleNet_TvsQCD", FatJet_particleNet_TvsQCD, &b_FatJet_particleNet_TvsQCD);
  fChain->SetBranchAddress("FatJet_particleNet_WvsQCD", FatJet_particleNet_WvsQCD, &b_FatJet_particleNet_WvsQCD);
  fChain->SetBranchAddress("FatJet_particleNet_ZvsQCD", FatJet_particleNet_ZvsQCD, &b_FatJet_particleNet_ZvsQCD);
  fChain->SetBranchAddress("FatJet_particleNet_mass", FatJet_particleNet_mass, &b_FatJet_particleNet_mass);
  fChain->SetBranchAddress("FatJet_phi", FatJet_phi, &b_FatJet_phi);
  fChain->SetBranchAddress("FatJet_pt", FatJet_pt, &b_FatJet_pt);
  fChain->SetBranchAddress("FatJet_rawFactor", FatJet_rawFactor, &b_FatJet_rawFactor);
  fChain->SetBranchAddress("FatJet_tau1", FatJet_tau1, &b_FatJet_tau1);
  fChain->SetBranchAddress("FatJet_tau2", FatJet_tau2, &b_FatJet_tau2);
  fChain->SetBranchAddress("FatJet_tau3", FatJet_tau3, &b_FatJet_tau3);
  fChain->SetBranchAddress("FatJet_tau4", FatJet_tau4, &b_FatJet_tau4);
  fChain->SetBranchAddress("FatJet_lsf3", FatJet_lsf3, &b_FatJet_lsf3);
  fChain->SetBranchAddress("FatJet_jetId", FatJet_jetId, &b_FatJet_jetId);
  fChain->SetBranchAddress("FatJet_subJetIdx1", FatJet_subJetIdx1, &b_FatJet_subJetIdx1);
  fChain->SetBranchAddress("FatJet_subJetIdx2", FatJet_subJetIdx2, &b_FatJet_subJetIdx2);
  fChain->SetBranchAddress("FatJet_electronIdx3SJ", FatJet_electronIdx3SJ, &b_FatJet_electronIdx3SJ);
  fChain->SetBranchAddress("FatJet_muonIdx3SJ", FatJet_muonIdx3SJ, &b_FatJet_muonIdx3SJ);
  fChain->SetBranchAddress("FatJet_nConstituents", FatJet_nConstituents, &b_FatJet_nConstituents);
  fChain->SetBranchAddress("nFsrPhoton", &nFsrPhoton, &b_nFsrPhoton);
  fChain->SetBranchAddress("FsrPhoton_dROverEt2", FsrPhoton_dROverEt2, &b_FsrPhoton_dROverEt2);
  fChain->SetBranchAddress("FsrPhoton_eta", FsrPhoton_eta, &b_FsrPhoton_eta);
  fChain->SetBranchAddress("FsrPhoton_phi", FsrPhoton_phi, &b_FsrPhoton_phi);
  fChain->SetBranchAddress("FsrPhoton_pt", FsrPhoton_pt, &b_FsrPhoton_pt);
  fChain->SetBranchAddress("FsrPhoton_relIso03", FsrPhoton_relIso03, &b_FsrPhoton_relIso03);
  fChain->SetBranchAddress("FsrPhoton_muonIdx", FsrPhoton_muonIdx, &b_FsrPhoton_muonIdx);
  fChain->SetBranchAddress("nGenJetAK8", &nGenJetAK8, &b_nGenJetAK8);
  fChain->SetBranchAddress("GenJetAK8_eta", GenJetAK8_eta, &b_GenJetAK8_eta);
  fChain->SetBranchAddress("GenJetAK8_mass", GenJetAK8_mass, &b_GenJetAK8_mass);
  fChain->SetBranchAddress("GenJetAK8_phi", GenJetAK8_phi, &b_GenJetAK8_phi);
  fChain->SetBranchAddress("GenJetAK8_pt", GenJetAK8_pt, &b_GenJetAK8_pt);
  fChain->SetBranchAddress("nGenJet", &nGenJet, &b_nGenJet);
  fChain->SetBranchAddress("GenJet_eta", GenJet_eta, &b_GenJet_eta);
  fChain->SetBranchAddress("GenJet_mass", GenJet_mass, &b_GenJet_mass);
  fChain->SetBranchAddress("GenJet_phi", GenJet_phi, &b_GenJet_phi);
  fChain->SetBranchAddress("GenJet_pt", GenJet_pt, &b_GenJet_pt);
  fChain->SetBranchAddress("nGenPart", &nGenPart, &b_nGenPart);
  fChain->SetBranchAddress("GenPart_eta", GenPart_eta, &b_GenPart_eta);
  fChain->SetBranchAddress("GenPart_mass", GenPart_mass, &b_GenPart_mass);
  fChain->SetBranchAddress("GenPart_phi", GenPart_phi, &b_GenPart_phi);
  fChain->SetBranchAddress("GenPart_pt", GenPart_pt, &b_GenPart_pt);
  fChain->SetBranchAddress("GenPart_genPartIdxMother", GenPart_genPartIdxMother, &b_GenPart_genPartIdxMother);
  fChain->SetBranchAddress("GenPart_pdgId", GenPart_pdgId, &b_GenPart_pdgId);
  fChain->SetBranchAddress("GenPart_status", GenPart_status, &b_GenPart_status);
  fChain->SetBranchAddress("GenPart_statusFlags", GenPart_statusFlags, &b_GenPart_statusFlags);
  fChain->SetBranchAddress("nSubGenJetAK8", &nSubGenJetAK8, &b_nSubGenJetAK8);
  fChain->SetBranchAddress("SubGenJetAK8_eta", SubGenJetAK8_eta, &b_SubGenJetAK8_eta);
  fChain->SetBranchAddress("SubGenJetAK8_mass", SubGenJetAK8_mass, &b_SubGenJetAK8_mass);
  fChain->SetBranchAddress("SubGenJetAK8_phi", SubGenJetAK8_phi, &b_SubGenJetAK8_phi);
  fChain->SetBranchAddress("SubGenJetAK8_pt", SubGenJetAK8_pt, &b_SubGenJetAK8_pt);
  fChain->SetBranchAddress("Generator_binvar", &Generator_binvar, &b_Generator_binvar);
  fChain->SetBranchAddress("Generator_scalePDF", &Generator_scalePDF, &b_Generator_scalePDF);
  fChain->SetBranchAddress("Generator_weight", &Generator_weight, &b_Generator_weight);
  fChain->SetBranchAddress("Generator_x1", &Generator_x1, &b_Generator_x1);
  fChain->SetBranchAddress("Generator_x2", &Generator_x2, &b_Generator_x2);
  fChain->SetBranchAddress("Generator_xpdf1", &Generator_xpdf1, &b_Generator_xpdf1);
  fChain->SetBranchAddress("Generator_xpdf2", &Generator_xpdf2, &b_Generator_xpdf2);
  fChain->SetBranchAddress("Generator_id1", &Generator_id1, &b_Generator_id1);
  fChain->SetBranchAddress("Generator_id2", &Generator_id2, &b_Generator_id2);
  fChain->SetBranchAddress("GenVtx_x", &GenVtx_x, &b_GenVtx_x);
  fChain->SetBranchAddress("GenVtx_y", &GenVtx_y, &b_GenVtx_y);
  fChain->SetBranchAddress("GenVtx_z", &GenVtx_z, &b_GenVtx_z);
  fChain->SetBranchAddress("nGenVisTau", &nGenVisTau, &b_nGenVisTau);
  fChain->SetBranchAddress("GenVisTau_eta", GenVisTau_eta, &b_GenVisTau_eta);
  fChain->SetBranchAddress("GenVisTau_mass", GenVisTau_mass, &b_GenVisTau_mass);
  fChain->SetBranchAddress("GenVisTau_phi", GenVisTau_phi, &b_GenVisTau_phi);
  fChain->SetBranchAddress("GenVisTau_pt", GenVisTau_pt, &b_GenVisTau_pt);
  fChain->SetBranchAddress("GenVisTau_charge", GenVisTau_charge, &b_GenVisTau_charge);
  fChain->SetBranchAddress("GenVisTau_genPartIdxMother", GenVisTau_genPartIdxMother, &b_GenVisTau_genPartIdxMother);
  fChain->SetBranchAddress("GenVisTau_status", GenVisTau_status, &b_GenVisTau_status);
  fChain->SetBranchAddress("genWeight", &genWeight, &b_genWeight);
  fChain->SetBranchAddress("LHEWeight_originalXWGTUP", &LHEWeight_originalXWGTUP, &b_LHEWeight_originalXWGTUP);
  fChain->SetBranchAddress("nLHEPdfWeight", &nLHEPdfWeight, &b_nLHEPdfWeight);
  fChain->SetBranchAddress("LHEPdfWeight", LHEPdfWeight, &b_LHEPdfWeight);
  fChain->SetBranchAddress("nLHEReweightingWeight", &nLHEReweightingWeight, &b_nLHEReweightingWeight);
  fChain->SetBranchAddress("LHEReweightingWeight", &LHEReweightingWeight, &b_LHEReweightingWeight);
  fChain->SetBranchAddress("nLHEScaleWeight", &nLHEScaleWeight, &b_nLHEScaleWeight);
  fChain->SetBranchAddress("LHEScaleWeight", LHEScaleWeight, &b_LHEScaleWeight);
  fChain->SetBranchAddress("nPSWeight", &nPSWeight, &b_nPSWeight);
  fChain->SetBranchAddress("PSWeight", PSWeight, &b_PSWeight);
  fChain->SetBranchAddress("nIsoTrack", &nIsoTrack, &b_nIsoTrack);
  fChain->SetBranchAddress("IsoTrack_dxy", IsoTrack_dxy, &b_IsoTrack_dxy);
  fChain->SetBranchAddress("IsoTrack_dz", IsoTrack_dz, &b_IsoTrack_dz);
  fChain->SetBranchAddress("IsoTrack_eta", IsoTrack_eta, &b_IsoTrack_eta);
  fChain->SetBranchAddress("IsoTrack_pfRelIso03_all", IsoTrack_pfRelIso03_all, &b_IsoTrack_pfRelIso03_all);
  fChain->SetBranchAddress("IsoTrack_pfRelIso03_chg", IsoTrack_pfRelIso03_chg, &b_IsoTrack_pfRelIso03_chg);
  fChain->SetBranchAddress("IsoTrack_phi", IsoTrack_phi, &b_IsoTrack_phi);
  fChain->SetBranchAddress("IsoTrack_pt", IsoTrack_pt, &b_IsoTrack_pt);
  fChain->SetBranchAddress("IsoTrack_miniPFRelIso_all", IsoTrack_miniPFRelIso_all, &b_IsoTrack_miniPFRelIso_all);
  fChain->SetBranchAddress("IsoTrack_miniPFRelIso_chg", IsoTrack_miniPFRelIso_chg, &b_IsoTrack_miniPFRelIso_chg);
  fChain->SetBranchAddress("IsoTrack_charge", IsoTrack_charge, &b_IsoTrack_charge);
  fChain->SetBranchAddress("IsoTrack_fromPV", IsoTrack_fromPV, &b_IsoTrack_fromPV);
  fChain->SetBranchAddress("IsoTrack_pdgId", IsoTrack_pdgId, &b_IsoTrack_pdgId);
  fChain->SetBranchAddress("IsoTrack_isHighPurityTrack", IsoTrack_isHighPurityTrack, &b_IsoTrack_isHighPurityTrack);
  fChain->SetBranchAddress("IsoTrack_isPFcand", IsoTrack_isPFcand, &b_IsoTrack_isPFcand);
  fChain->SetBranchAddress("IsoTrack_isFromLostTrack", IsoTrack_isFromLostTrack, &b_IsoTrack_isFromLostTrack);
  fChain->SetBranchAddress("nJet", &nJet, &b_nJet);
  fChain->SetBranchAddress("Jet_area", Jet_area, &b_Jet_area);
  fChain->SetBranchAddress("Jet_btagCSVV2", Jet_btagCSVV2, &b_Jet_btagCSVV2);
  fChain->SetBranchAddress("Jet_btagDeepB", Jet_btagDeepB, &b_Jet_btagDeepB);
  fChain->SetBranchAddress("Jet_btagDeepCvB", Jet_btagDeepCvB, &b_Jet_btagDeepCvB);
  fChain->SetBranchAddress("Jet_btagDeepCvL", Jet_btagDeepCvL, &b_Jet_btagDeepCvL);
  fChain->SetBranchAddress("Jet_btagDeepFlavB", Jet_btagDeepFlavB, &b_Jet_btagDeepFlavB);
  fChain->SetBranchAddress("Jet_btagDeepFlavCvB", Jet_btagDeepFlavCvB, &b_Jet_btagDeepFlavCvB);
  fChain->SetBranchAddress("Jet_btagDeepFlavCvL", Jet_btagDeepFlavCvL, &b_Jet_btagDeepFlavCvL);
  fChain->SetBranchAddress("Jet_btagDeepFlavQG", Jet_btagDeepFlavQG, &b_Jet_btagDeepFlavQG);
  fChain->SetBranchAddress("Jet_chEmEF", Jet_chEmEF, &b_Jet_chEmEF);
  fChain->SetBranchAddress("Jet_chFPV0EF", Jet_chFPV0EF, &b_Jet_chFPV0EF);
  fChain->SetBranchAddress("Jet_chHEF", Jet_chHEF, &b_Jet_chHEF);
  fChain->SetBranchAddress("Jet_eta", Jet_eta, &b_Jet_eta);
  fChain->SetBranchAddress("Jet_hfsigmaEtaEta", Jet_hfsigmaEtaEta, &b_Jet_hfsigmaEtaEta);
  fChain->SetBranchAddress("Jet_hfsigmaPhiPhi", Jet_hfsigmaPhiPhi, &b_Jet_hfsigmaPhiPhi);
  fChain->SetBranchAddress("Jet_mass", Jet_mass, &b_Jet_mass);
  fChain->SetBranchAddress("Jet_muEF", Jet_muEF, &b_Jet_muEF);
  fChain->SetBranchAddress("Jet_muonSubtrFactor", Jet_muonSubtrFactor, &b_Jet_muonSubtrFactor);
  fChain->SetBranchAddress("Jet_neEmEF", Jet_neEmEF, &b_Jet_neEmEF);
  fChain->SetBranchAddress("Jet_neHEF", Jet_neHEF, &b_Jet_neHEF);
  fChain->SetBranchAddress("Jet_phi", Jet_phi, &b_Jet_phi);
  fChain->SetBranchAddress("Jet_pt", Jet_pt, &b_Jet_pt);
  fChain->SetBranchAddress("Jet_puIdDisc", Jet_puIdDisc, &b_Jet_puIdDisc);
  fChain->SetBranchAddress("Jet_qgl", Jet_qgl, &b_Jet_qgl);
  fChain->SetBranchAddress("Jet_rawFactor", Jet_rawFactor, &b_Jet_rawFactor);
  fChain->SetBranchAddress("Jet_bRegCorr", Jet_bRegCorr, &b_Jet_bRegCorr);
  fChain->SetBranchAddress("Jet_bRegRes", Jet_bRegRes, &b_Jet_bRegRes);
  fChain->SetBranchAddress("Jet_cRegCorr", Jet_cRegCorr, &b_Jet_cRegCorr);
  fChain->SetBranchAddress("Jet_cRegRes", Jet_cRegRes, &b_Jet_cRegRes);
  fChain->SetBranchAddress("Jet_electronIdx1", Jet_electronIdx1, &b_Jet_electronIdx1);
  fChain->SetBranchAddress("Jet_electronIdx2", Jet_electronIdx2, &b_Jet_electronIdx2);
  fChain->SetBranchAddress("Jet_hfadjacentEtaStripsSize", Jet_hfadjacentEtaStripsSize, &b_Jet_hfadjacentEtaStripsSize);
  fChain->SetBranchAddress("Jet_hfcentralEtaStripSize", Jet_hfcentralEtaStripSize, &b_Jet_hfcentralEtaStripSize);
  fChain->SetBranchAddress("Jet_jetId", Jet_jetId, &b_Jet_jetId);
  fChain->SetBranchAddress("Jet_muonIdx1", Jet_muonIdx1, &b_Jet_muonIdx1);
  fChain->SetBranchAddress("Jet_muonIdx2", Jet_muonIdx2, &b_Jet_muonIdx2);
  fChain->SetBranchAddress("Jet_nElectrons", Jet_nElectrons, &b_Jet_nElectrons);
  fChain->SetBranchAddress("Jet_nMuons", Jet_nMuons, &b_Jet_nMuons);
  fChain->SetBranchAddress("Jet_puId", Jet_puId, &b_Jet_puId);
  fChain->SetBranchAddress("Jet_nConstituents", Jet_nConstituents, &b_Jet_nConstituents);
  fChain->SetBranchAddress("L1PreFiringWeight_Dn", &L1PreFiringWeight_Dn, &b_L1PreFiringWeight_Dn);
  fChain->SetBranchAddress("L1PreFiringWeight_ECAL_Dn", &L1PreFiringWeight_ECAL_Dn, &b_L1PreFiringWeight_ECAL_Dn);
  fChain->SetBranchAddress("L1PreFiringWeight_ECAL_Nom", &L1PreFiringWeight_ECAL_Nom, &b_L1PreFiringWeight_ECAL_Nom);
  fChain->SetBranchAddress("L1PreFiringWeight_ECAL_Up", &L1PreFiringWeight_ECAL_Up, &b_L1PreFiringWeight_ECAL_Up);
  fChain->SetBranchAddress("L1PreFiringWeight_Muon_Nom", &L1PreFiringWeight_Muon_Nom, &b_L1PreFiringWeight_Muon_Nom);
  fChain->SetBranchAddress("L1PreFiringWeight_Muon_StatDn", &L1PreFiringWeight_Muon_StatDn, &b_L1PreFiringWeight_Muon_StatDn);
  fChain->SetBranchAddress("L1PreFiringWeight_Muon_StatUp", &L1PreFiringWeight_Muon_StatUp, &b_L1PreFiringWeight_Muon_StatUp);
  fChain->SetBranchAddress("L1PreFiringWeight_Muon_SystDn", &L1PreFiringWeight_Muon_SystDn, &b_L1PreFiringWeight_Muon_SystDn);
  fChain->SetBranchAddress("L1PreFiringWeight_Muon_SystUp", &L1PreFiringWeight_Muon_SystUp, &b_L1PreFiringWeight_Muon_SystUp);
  fChain->SetBranchAddress("L1PreFiringWeight_Nom", &L1PreFiringWeight_Nom, &b_L1PreFiringWeight_Nom);
  fChain->SetBranchAddress("L1PreFiringWeight_Up", &L1PreFiringWeight_Up, &b_L1PreFiringWeight_Up);
  fChain->SetBranchAddress("LHE_HT", &LHE_HT, &b_LHE_HT);
  fChain->SetBranchAddress("LHE_HTIncoming", &LHE_HTIncoming, &b_LHE_HTIncoming);
  fChain->SetBranchAddress("LHE_Vpt", &LHE_Vpt, &b_LHE_Vpt);
  fChain->SetBranchAddress("LHE_AlphaS", &LHE_AlphaS, &b_LHE_AlphaS);
  fChain->SetBranchAddress("LHE_Njets", &LHE_Njets, &b_LHE_Njets);
  fChain->SetBranchAddress("LHE_Nb", &LHE_Nb, &b_LHE_Nb);
  fChain->SetBranchAddress("LHE_Nc", &LHE_Nc, &b_LHE_Nc);
  fChain->SetBranchAddress("LHE_Nuds", &LHE_Nuds, &b_LHE_Nuds);
  fChain->SetBranchAddress("LHE_Nglu", &LHE_Nglu, &b_LHE_Nglu);
  fChain->SetBranchAddress("LHE_NpNLO", &LHE_NpNLO, &b_LHE_NpNLO);
  fChain->SetBranchAddress("LHE_NpLO", &LHE_NpLO, &b_LHE_NpLO);
  fChain->SetBranchAddress("nLHEPart", &nLHEPart, &b_nLHEPart);
  fChain->SetBranchAddress("LHEPart_pt", LHEPart_pt, &b_LHEPart_pt);
  fChain->SetBranchAddress("LHEPart_eta", LHEPart_eta, &b_LHEPart_eta);
  fChain->SetBranchAddress("LHEPart_phi", LHEPart_phi, &b_LHEPart_phi);
  fChain->SetBranchAddress("LHEPart_mass", LHEPart_mass, &b_LHEPart_mass);
  fChain->SetBranchAddress("LHEPart_incomingpz", LHEPart_incomingpz, &b_LHEPart_incomingpz);
  fChain->SetBranchAddress("LHEPart_pdgId", LHEPart_pdgId, &b_LHEPart_pdgId);
  fChain->SetBranchAddress("LHEPart_status", LHEPart_status, &b_LHEPart_status);
  fChain->SetBranchAddress("LHEPart_spin", LHEPart_spin, &b_LHEPart_spin);
  fChain->SetBranchAddress("nLowPtElectron", &nLowPtElectron, &b_nLowPtElectron);
  fChain->SetBranchAddress("LowPtElectron_ID", LowPtElectron_ID, &b_LowPtElectron_ID);
  fChain->SetBranchAddress("LowPtElectron_convVtxRadius", LowPtElectron_convVtxRadius, &b_LowPtElectron_convVtxRadius);
  fChain->SetBranchAddress("LowPtElectron_deltaEtaSC", LowPtElectron_deltaEtaSC, &b_LowPtElectron_deltaEtaSC);
  fChain->SetBranchAddress("LowPtElectron_dxy", LowPtElectron_dxy, &b_LowPtElectron_dxy);
  fChain->SetBranchAddress("LowPtElectron_dxyErr", LowPtElectron_dxyErr, &b_LowPtElectron_dxyErr);
  fChain->SetBranchAddress("LowPtElectron_dz", LowPtElectron_dz, &b_LowPtElectron_dz);
  fChain->SetBranchAddress("LowPtElectron_dzErr", LowPtElectron_dzErr, &b_LowPtElectron_dzErr);
  fChain->SetBranchAddress("LowPtElectron_eInvMinusPInv", LowPtElectron_eInvMinusPInv, &b_LowPtElectron_eInvMinusPInv);
  fChain->SetBranchAddress("LowPtElectron_embeddedID", LowPtElectron_embeddedID, &b_LowPtElectron_embeddedID);
  fChain->SetBranchAddress("LowPtElectron_energyErr", LowPtElectron_energyErr, &b_LowPtElectron_energyErr);
  fChain->SetBranchAddress("LowPtElectron_eta", LowPtElectron_eta, &b_LowPtElectron_eta);
  fChain->SetBranchAddress("LowPtElectron_hoe", LowPtElectron_hoe, &b_LowPtElectron_hoe);
  fChain->SetBranchAddress("LowPtElectron_mass", LowPtElectron_mass, &b_LowPtElectron_mass);
  fChain->SetBranchAddress("LowPtElectron_miniPFRelIso_all", LowPtElectron_miniPFRelIso_all, &b_LowPtElectron_miniPFRelIso_all);
  fChain->SetBranchAddress("LowPtElectron_miniPFRelIso_chg", LowPtElectron_miniPFRelIso_chg, &b_LowPtElectron_miniPFRelIso_chg);
  fChain->SetBranchAddress("LowPtElectron_phi", LowPtElectron_phi, &b_LowPtElectron_phi);
  fChain->SetBranchAddress("LowPtElectron_pt", LowPtElectron_pt, &b_LowPtElectron_pt);
  fChain->SetBranchAddress("LowPtElectron_ptbiased", LowPtElectron_ptbiased, &b_LowPtElectron_ptbiased);
  fChain->SetBranchAddress("LowPtElectron_r9", LowPtElectron_r9, &b_LowPtElectron_r9);
  fChain->SetBranchAddress("LowPtElectron_scEtOverPt", LowPtElectron_scEtOverPt, &b_LowPtElectron_scEtOverPt);
  fChain->SetBranchAddress("LowPtElectron_sieie", LowPtElectron_sieie, &b_LowPtElectron_sieie);
  fChain->SetBranchAddress("LowPtElectron_unbiased", LowPtElectron_unbiased, &b_LowPtElectron_unbiased);
  fChain->SetBranchAddress("LowPtElectron_charge", LowPtElectron_charge, &b_LowPtElectron_charge);
  fChain->SetBranchAddress("LowPtElectron_convWP", LowPtElectron_convWP, &b_LowPtElectron_convWP);
  fChain->SetBranchAddress("LowPtElectron_pdgId", LowPtElectron_pdgId, &b_LowPtElectron_pdgId);
  fChain->SetBranchAddress("LowPtElectron_convVeto", LowPtElectron_convVeto, &b_LowPtElectron_convVeto);
  fChain->SetBranchAddress("LowPtElectron_lostHits", LowPtElectron_lostHits, &b_LowPtElectron_lostHits);
  fChain->SetBranchAddress("GenMET_phi", &GenMET_phi, &b_GenMET_phi);
  fChain->SetBranchAddress("GenMET_pt", &GenMET_pt, &b_GenMET_pt);
  fChain->SetBranchAddress("MET_MetUnclustEnUpDeltaX", &MET_MetUnclustEnUpDeltaX, &b_MET_MetUnclustEnUpDeltaX);
  fChain->SetBranchAddress("MET_MetUnclustEnUpDeltaY", &MET_MetUnclustEnUpDeltaY, &b_MET_MetUnclustEnUpDeltaY);
  fChain->SetBranchAddress("MET_covXX", &MET_covXX, &b_MET_covXX);
  fChain->SetBranchAddress("MET_covXY", &MET_covXY, &b_MET_covXY);
  fChain->SetBranchAddress("MET_covYY", &MET_covYY, &b_MET_covYY);
  fChain->SetBranchAddress("MET_phi", &MET_phi, &b_MET_phi);
  fChain->SetBranchAddress("MET_pt", &MET_pt, &b_MET_pt);
  fChain->SetBranchAddress("MET_significance", &MET_significance, &b_MET_significance);
  fChain->SetBranchAddress("MET_sumEt", &MET_sumEt, &b_MET_sumEt);
  fChain->SetBranchAddress("MET_sumPtUnclustered", &MET_sumPtUnclustered, &b_MET_sumPtUnclustered);
  fChain->SetBranchAddress("nMuon", &nMuon, &b_nMuon);
  fChain->SetBranchAddress("Muon_dxy", Muon_dxy, &b_Muon_dxy);
  fChain->SetBranchAddress("Muon_dxyErr", Muon_dxyErr, &b_Muon_dxyErr);
  fChain->SetBranchAddress("Muon_dxybs", Muon_dxybs, &b_Muon_dxybs);
  fChain->SetBranchAddress("Muon_dz", Muon_dz, &b_Muon_dz);
  fChain->SetBranchAddress("Muon_dzErr", Muon_dzErr, &b_Muon_dzErr);
  fChain->SetBranchAddress("Muon_eta", Muon_eta, &b_Muon_eta);
  fChain->SetBranchAddress("Muon_ip3d", Muon_ip3d, &b_Muon_ip3d);
  fChain->SetBranchAddress("Muon_jetPtRelv2", Muon_jetPtRelv2, &b_Muon_jetPtRelv2);
  fChain->SetBranchAddress("Muon_jetRelIso", Muon_jetRelIso, &b_Muon_jetRelIso);
  fChain->SetBranchAddress("Muon_mass", Muon_mass, &b_Muon_mass);
  fChain->SetBranchAddress("Muon_miniPFRelIso_all", Muon_miniPFRelIso_all, &b_Muon_miniPFRelIso_all);
  fChain->SetBranchAddress("Muon_miniPFRelIso_chg", Muon_miniPFRelIso_chg, &b_Muon_miniPFRelIso_chg);
  fChain->SetBranchAddress("Muon_pfRelIso03_all", Muon_pfRelIso03_all, &b_Muon_pfRelIso03_all);
  fChain->SetBranchAddress("Muon_pfRelIso03_chg", Muon_pfRelIso03_chg, &b_Muon_pfRelIso03_chg);
  fChain->SetBranchAddress("Muon_pfRelIso04_all", Muon_pfRelIso04_all, &b_Muon_pfRelIso04_all);
  fChain->SetBranchAddress("Muon_phi", Muon_phi, &b_Muon_phi);
  fChain->SetBranchAddress("Muon_pt", Muon_pt, &b_Muon_pt);
  fChain->SetBranchAddress("Muon_ptErr", Muon_ptErr, &b_Muon_ptErr);
  fChain->SetBranchAddress("Muon_segmentComp", Muon_segmentComp, &b_Muon_segmentComp);
  fChain->SetBranchAddress("Muon_sip3d", Muon_sip3d, &b_Muon_sip3d);
  fChain->SetBranchAddress("Muon_softMva", Muon_softMva, &b_Muon_softMva);
  fChain->SetBranchAddress("Muon_tkRelIso", Muon_tkRelIso, &b_Muon_tkRelIso);
  fChain->SetBranchAddress("Muon_tunepRelPt", Muon_tunepRelPt, &b_Muon_tunepRelPt);
  fChain->SetBranchAddress("Muon_mvaLowPt", Muon_mvaLowPt, &b_Muon_mvaLowPt);
  fChain->SetBranchAddress("Muon_mvaTTH", Muon_mvaTTH, &b_Muon_mvaTTH);
  fChain->SetBranchAddress("Muon_charge", Muon_charge, &b_Muon_charge);
  fChain->SetBranchAddress("Muon_jetIdx", Muon_jetIdx, &b_Muon_jetIdx);
  fChain->SetBranchAddress("Muon_nStations", Muon_nStations, &b_Muon_nStations);
  fChain->SetBranchAddress("Muon_nTrackerLayers", Muon_nTrackerLayers, &b_Muon_nTrackerLayers);
  fChain->SetBranchAddress("Muon_pdgId", Muon_pdgId, &b_Muon_pdgId);
  fChain->SetBranchAddress("Muon_tightCharge", Muon_tightCharge, &b_Muon_tightCharge);
  fChain->SetBranchAddress("Muon_fsrPhotonIdx", Muon_fsrPhotonIdx, &b_Muon_fsrPhotonIdx);
  fChain->SetBranchAddress("Muon_highPtId", Muon_highPtId, &b_Muon_highPtId);
  fChain->SetBranchAddress("Muon_highPurity", Muon_highPurity, &b_Muon_highPurity);
  fChain->SetBranchAddress("Muon_inTimeMuon", Muon_inTimeMuon, &b_Muon_inTimeMuon);
  fChain->SetBranchAddress("Muon_isGlobal", Muon_isGlobal, &b_Muon_isGlobal);
  fChain->SetBranchAddress("Muon_isPFcand", Muon_isPFcand, &b_Muon_isPFcand);
  fChain->SetBranchAddress("Muon_isStandalone", Muon_isStandalone, &b_Muon_isStandalone);
  fChain->SetBranchAddress("Muon_isTracker", Muon_isTracker, &b_Muon_isTracker);
  fChain->SetBranchAddress("Muon_jetNDauCharged", Muon_jetNDauCharged, &b_Muon_jetNDauCharged);
  fChain->SetBranchAddress("Muon_looseId", Muon_looseId, &b_Muon_looseId);
  fChain->SetBranchAddress("Muon_mediumId", Muon_mediumId, &b_Muon_mediumId);
  fChain->SetBranchAddress("Muon_mediumPromptId", Muon_mediumPromptId, &b_Muon_mediumPromptId);
  fChain->SetBranchAddress("Muon_miniIsoId", Muon_miniIsoId, &b_Muon_miniIsoId);
  fChain->SetBranchAddress("Muon_multiIsoId", Muon_multiIsoId, &b_Muon_multiIsoId);
  fChain->SetBranchAddress("Muon_mvaId", Muon_mvaId, &b_Muon_mvaId);
  fChain->SetBranchAddress("Muon_mvaLowPtId", Muon_mvaLowPtId, &b_Muon_mvaLowPtId);
  fChain->SetBranchAddress("Muon_pfIsoId", Muon_pfIsoId, &b_Muon_pfIsoId);
  fChain->SetBranchAddress("Muon_puppiIsoId", Muon_puppiIsoId, &b_Muon_puppiIsoId);
  fChain->SetBranchAddress("Muon_softId", Muon_softId, &b_Muon_softId);
  fChain->SetBranchAddress("Muon_softMvaId", Muon_softMvaId, &b_Muon_softMvaId);
  fChain->SetBranchAddress("Muon_tightId", Muon_tightId, &b_Muon_tightId);
  fChain->SetBranchAddress("Muon_tkIsoId", Muon_tkIsoId, &b_Muon_tkIsoId);
  fChain->SetBranchAddress("Muon_triggerIdLoose", Muon_triggerIdLoose, &b_Muon_triggerIdLoose);
  fChain->SetBranchAddress("nPhoton", &nPhoton, &b_nPhoton);
  fChain->SetBranchAddress("Photon_dEscaleDown", Photon_dEscaleDown, &b_Photon_dEscaleDown);
  fChain->SetBranchAddress("Photon_dEscaleUp", Photon_dEscaleUp, &b_Photon_dEscaleUp);
  fChain->SetBranchAddress("Photon_dEsigmaDown", Photon_dEsigmaDown, &b_Photon_dEsigmaDown);
  fChain->SetBranchAddress("Photon_dEsigmaUp", Photon_dEsigmaUp, &b_Photon_dEsigmaUp);
  fChain->SetBranchAddress("Photon_eCorr", Photon_eCorr, &b_Photon_eCorr);
  fChain->SetBranchAddress("Photon_energyErr", Photon_energyErr, &b_Photon_energyErr);
  fChain->SetBranchAddress("Photon_eta", Photon_eta, &b_Photon_eta);
  fChain->SetBranchAddress("Photon_hoe", Photon_hoe, &b_Photon_hoe);
  fChain->SetBranchAddress("Photon_mass", Photon_mass, &b_Photon_mass);
  fChain->SetBranchAddress("Photon_mvaID", Photon_mvaID, &b_Photon_mvaID);
  fChain->SetBranchAddress("Photon_mvaID_Fall17V1p1", Photon_mvaID_Fall17V1p1, &b_Photon_mvaID_Fall17V1p1);
  fChain->SetBranchAddress("Photon_pfRelIso03_all", Photon_pfRelIso03_all, &b_Photon_pfRelIso03_all);
  fChain->SetBranchAddress("Photon_pfRelIso03_chg", Photon_pfRelIso03_chg, &b_Photon_pfRelIso03_chg);
  fChain->SetBranchAddress("Photon_phi", Photon_phi, &b_Photon_phi);
  fChain->SetBranchAddress("Photon_pt", Photon_pt, &b_Photon_pt);
  fChain->SetBranchAddress("Photon_r9", Photon_r9, &b_Photon_r9);
  fChain->SetBranchAddress("Photon_sieie", Photon_sieie, &b_Photon_sieie);
  fChain->SetBranchAddress("Photon_charge", Photon_charge, &b_Photon_charge);
  fChain->SetBranchAddress("Photon_cutBased", Photon_cutBased, &b_Photon_cutBased);
  fChain->SetBranchAddress("Photon_cutBased_Fall17V1Bitmap", Photon_cutBased_Fall17V1Bitmap, &b_Photon_cutBased_Fall17V1Bitmap);
  fChain->SetBranchAddress("Photon_electronIdx", Photon_electronIdx, &b_Photon_electronIdx);
  fChain->SetBranchAddress("Photon_jetIdx", Photon_jetIdx, &b_Photon_jetIdx);
  fChain->SetBranchAddress("Photon_pdgId", Photon_pdgId, &b_Photon_pdgId);
  fChain->SetBranchAddress("Photon_vidNestedWPBitmap", Photon_vidNestedWPBitmap, &b_Photon_vidNestedWPBitmap);
  fChain->SetBranchAddress("Photon_electronVeto", Photon_electronVeto, &b_Photon_electronVeto);
  fChain->SetBranchAddress("Photon_isScEtaEB", Photon_isScEtaEB, &b_Photon_isScEtaEB);
  fChain->SetBranchAddress("Photon_isScEtaEE", Photon_isScEtaEE, &b_Photon_isScEtaEE);
  fChain->SetBranchAddress("Photon_mvaID_WP80", Photon_mvaID_WP80, &b_Photon_mvaID_WP80);
  fChain->SetBranchAddress("Photon_mvaID_WP90", Photon_mvaID_WP90, &b_Photon_mvaID_WP90);
  fChain->SetBranchAddress("Photon_pixelSeed", Photon_pixelSeed, &b_Photon_pixelSeed);
  fChain->SetBranchAddress("Photon_seedGain", Photon_seedGain, &b_Photon_seedGain);
  fChain->SetBranchAddress("Pileup_nTrueInt", &Pileup_nTrueInt, &b_Pileup_nTrueInt);
  fChain->SetBranchAddress("Pileup_pudensity", &Pileup_pudensity, &b_Pileup_pudensity);
  fChain->SetBranchAddress("Pileup_gpudensity", &Pileup_gpudensity, &b_Pileup_gpudensity);
  fChain->SetBranchAddress("Pileup_nPU", &Pileup_nPU, &b_Pileup_nPU);
  fChain->SetBranchAddress("Pileup_sumEOOT", &Pileup_sumEOOT, &b_Pileup_sumEOOT);
  fChain->SetBranchAddress("Pileup_sumLOOT", &Pileup_sumLOOT, &b_Pileup_sumLOOT);
  fChain->SetBranchAddress("PuppiMET_phi", &PuppiMET_phi, &b_PuppiMET_phi);
  fChain->SetBranchAddress("PuppiMET_phiJERDown", &PuppiMET_phiJERDown, &b_PuppiMET_phiJERDown);
  fChain->SetBranchAddress("PuppiMET_phiJERUp", &PuppiMET_phiJERUp, &b_PuppiMET_phiJERUp);
  fChain->SetBranchAddress("PuppiMET_phiJESDown", &PuppiMET_phiJESDown, &b_PuppiMET_phiJESDown);
  fChain->SetBranchAddress("PuppiMET_phiJESUp", &PuppiMET_phiJESUp, &b_PuppiMET_phiJESUp);
  fChain->SetBranchAddress("PuppiMET_phiUnclusteredDown", &PuppiMET_phiUnclusteredDown, &b_PuppiMET_phiUnclusteredDown);
  fChain->SetBranchAddress("PuppiMET_phiUnclusteredUp", &PuppiMET_phiUnclusteredUp, &b_PuppiMET_phiUnclusteredUp);
  fChain->SetBranchAddress("PuppiMET_pt", &PuppiMET_pt, &b_PuppiMET_pt);
  fChain->SetBranchAddress("PuppiMET_ptJERDown", &PuppiMET_ptJERDown, &b_PuppiMET_ptJERDown);
  fChain->SetBranchAddress("PuppiMET_ptJERUp", &PuppiMET_ptJERUp, &b_PuppiMET_ptJERUp);
  fChain->SetBranchAddress("PuppiMET_ptJESDown", &PuppiMET_ptJESDown, &b_PuppiMET_ptJESDown);
  fChain->SetBranchAddress("PuppiMET_ptJESUp", &PuppiMET_ptJESUp, &b_PuppiMET_ptJESUp);
  fChain->SetBranchAddress("PuppiMET_ptUnclusteredDown", &PuppiMET_ptUnclusteredDown, &b_PuppiMET_ptUnclusteredDown);
  fChain->SetBranchAddress("PuppiMET_ptUnclusteredUp", &PuppiMET_ptUnclusteredUp, &b_PuppiMET_ptUnclusteredUp);
  fChain->SetBranchAddress("PuppiMET_sumEt", &PuppiMET_sumEt, &b_PuppiMET_sumEt);
  fChain->SetBranchAddress("RawMET_phi", &RawMET_phi, &b_RawMET_phi);
  fChain->SetBranchAddress("RawMET_pt", &RawMET_pt, &b_RawMET_pt);
  fChain->SetBranchAddress("RawMET_sumEt", &RawMET_sumEt, &b_RawMET_sumEt);
  fChain->SetBranchAddress("RawPuppiMET_phi", &RawPuppiMET_phi, &b_RawPuppiMET_phi);
  fChain->SetBranchAddress("RawPuppiMET_pt", &RawPuppiMET_pt, &b_RawPuppiMET_pt);
  fChain->SetBranchAddress("RawPuppiMET_sumEt", &RawPuppiMET_sumEt, &b_RawPuppiMET_sumEt);
  fChain->SetBranchAddress("fixedGridRhoFastjetAll", &fixedGridRhoFastjetAll, &b_fixedGridRhoFastjetAll);
  fChain->SetBranchAddress("fixedGridRhoFastjetCentral", &fixedGridRhoFastjetCentral, &b_fixedGridRhoFastjetCentral);
  fChain->SetBranchAddress("fixedGridRhoFastjetCentralCalo", &fixedGridRhoFastjetCentralCalo, &b_fixedGridRhoFastjetCentralCalo);
  fChain->SetBranchAddress("fixedGridRhoFastjetCentralChargedPileUp", &fixedGridRhoFastjetCentralChargedPileUp, &b_fixedGridRhoFastjetCentralChargedPileUp);
  fChain->SetBranchAddress("fixedGridRhoFastjetCentralNeutral", &fixedGridRhoFastjetCentralNeutral, &b_fixedGridRhoFastjetCentralNeutral);
  fChain->SetBranchAddress("nGenDressedLepton", &nGenDressedLepton, &b_nGenDressedLepton);
  fChain->SetBranchAddress("GenDressedLepton_eta", GenDressedLepton_eta, &b_GenDressedLepton_eta);
  fChain->SetBranchAddress("GenDressedLepton_mass", GenDressedLepton_mass, &b_GenDressedLepton_mass);
  fChain->SetBranchAddress("GenDressedLepton_phi", GenDressedLepton_phi, &b_GenDressedLepton_phi);
  fChain->SetBranchAddress("GenDressedLepton_pt", GenDressedLepton_pt, &b_GenDressedLepton_pt);
  fChain->SetBranchAddress("GenDressedLepton_pdgId", GenDressedLepton_pdgId, &b_GenDressedLepton_pdgId);
  fChain->SetBranchAddress("GenDressedLepton_hasTauAnc", GenDressedLepton_hasTauAnc, &b_GenDressedLepton_hasTauAnc);
  fChain->SetBranchAddress("nGenIsolatedPhoton", &nGenIsolatedPhoton, &b_nGenIsolatedPhoton);
  fChain->SetBranchAddress("GenIsolatedPhoton_eta", GenIsolatedPhoton_eta, &b_GenIsolatedPhoton_eta);
  fChain->SetBranchAddress("GenIsolatedPhoton_mass", GenIsolatedPhoton_mass, &b_GenIsolatedPhoton_mass);
  fChain->SetBranchAddress("GenIsolatedPhoton_phi", GenIsolatedPhoton_phi, &b_GenIsolatedPhoton_phi);
  fChain->SetBranchAddress("GenIsolatedPhoton_pt", GenIsolatedPhoton_pt, &b_GenIsolatedPhoton_pt);
  fChain->SetBranchAddress("nSoftActivityJet", &nSoftActivityJet, &b_nSoftActivityJet);
  fChain->SetBranchAddress("SoftActivityJet_eta", SoftActivityJet_eta, &b_SoftActivityJet_eta);
  fChain->SetBranchAddress("SoftActivityJet_phi", SoftActivityJet_phi, &b_SoftActivityJet_phi);
  fChain->SetBranchAddress("SoftActivityJet_pt", SoftActivityJet_pt, &b_SoftActivityJet_pt);
  fChain->SetBranchAddress("SoftActivityJetHT", &SoftActivityJetHT, &b_SoftActivityJetHT);
  fChain->SetBranchAddress("SoftActivityJetHT10", &SoftActivityJetHT10, &b_SoftActivityJetHT10);
  fChain->SetBranchAddress("SoftActivityJetHT2", &SoftActivityJetHT2, &b_SoftActivityJetHT2);
  fChain->SetBranchAddress("SoftActivityJetHT5", &SoftActivityJetHT5, &b_SoftActivityJetHT5);
  fChain->SetBranchAddress("SoftActivityJetNjets10", &SoftActivityJetNjets10, &b_SoftActivityJetNjets10);
  fChain->SetBranchAddress("SoftActivityJetNjets2", &SoftActivityJetNjets2, &b_SoftActivityJetNjets2);
  fChain->SetBranchAddress("SoftActivityJetNjets5", &SoftActivityJetNjets5, &b_SoftActivityJetNjets5);
  fChain->SetBranchAddress("nSubJet", &nSubJet, &b_nSubJet);
  fChain->SetBranchAddress("SubJet_btagCSVV2", SubJet_btagCSVV2, &b_SubJet_btagCSVV2);
  fChain->SetBranchAddress("SubJet_btagDeepB", SubJet_btagDeepB, &b_SubJet_btagDeepB);
  fChain->SetBranchAddress("SubJet_eta", SubJet_eta, &b_SubJet_eta);
  fChain->SetBranchAddress("SubJet_mass", SubJet_mass, &b_SubJet_mass);
  fChain->SetBranchAddress("SubJet_n2b1", SubJet_n2b1, &b_SubJet_n2b1);
  fChain->SetBranchAddress("SubJet_n3b1", SubJet_n3b1, &b_SubJet_n3b1);
  fChain->SetBranchAddress("SubJet_phi", SubJet_phi, &b_SubJet_phi);
  fChain->SetBranchAddress("SubJet_pt", SubJet_pt, &b_SubJet_pt);
  fChain->SetBranchAddress("SubJet_rawFactor", SubJet_rawFactor, &b_SubJet_rawFactor);
  fChain->SetBranchAddress("SubJet_tau1", SubJet_tau1, &b_SubJet_tau1);
  fChain->SetBranchAddress("SubJet_tau2", SubJet_tau2, &b_SubJet_tau2);
  fChain->SetBranchAddress("SubJet_tau3", SubJet_tau3, &b_SubJet_tau3);
  fChain->SetBranchAddress("SubJet_tau4", SubJet_tau4, &b_SubJet_tau4);
  fChain->SetBranchAddress("nTau", &nTau, &b_nTau);
  fChain->SetBranchAddress("Tau_chargedIso", Tau_chargedIso, &b_Tau_chargedIso);
  fChain->SetBranchAddress("Tau_dxy", Tau_dxy, &b_Tau_dxy);
  fChain->SetBranchAddress("Tau_dz", Tau_dz, &b_Tau_dz);
  fChain->SetBranchAddress("Tau_eta", Tau_eta, &b_Tau_eta);
  fChain->SetBranchAddress("Tau_leadTkDeltaEta", Tau_leadTkDeltaEta, &b_Tau_leadTkDeltaEta);
  fChain->SetBranchAddress("Tau_leadTkDeltaPhi", Tau_leadTkDeltaPhi, &b_Tau_leadTkDeltaPhi);
  fChain->SetBranchAddress("Tau_leadTkPtOverTauPt", Tau_leadTkPtOverTauPt, &b_Tau_leadTkPtOverTauPt);
  fChain->SetBranchAddress("Tau_mass", Tau_mass, &b_Tau_mass);
  fChain->SetBranchAddress("Tau_neutralIso", Tau_neutralIso, &b_Tau_neutralIso);
  fChain->SetBranchAddress("Tau_phi", Tau_phi, &b_Tau_phi);
  fChain->SetBranchAddress("Tau_photonsOutsideSignalCone", Tau_photonsOutsideSignalCone, &b_Tau_photonsOutsideSignalCone);
  fChain->SetBranchAddress("Tau_pt", Tau_pt, &b_Tau_pt);
  fChain->SetBranchAddress("Tau_puCorr", Tau_puCorr, &b_Tau_puCorr);
  fChain->SetBranchAddress("Tau_rawDeepTau2017v2p1VSe", Tau_rawDeepTau2017v2p1VSe, &b_Tau_rawDeepTau2017v2p1VSe);
  fChain->SetBranchAddress("Tau_rawDeepTau2017v2p1VSjet", Tau_rawDeepTau2017v2p1VSjet, &b_Tau_rawDeepTau2017v2p1VSjet);
  fChain->SetBranchAddress("Tau_rawDeepTau2017v2p1VSmu", Tau_rawDeepTau2017v2p1VSmu, &b_Tau_rawDeepTau2017v2p1VSmu);
  fChain->SetBranchAddress("Tau_rawIso", Tau_rawIso, &b_Tau_rawIso);
  fChain->SetBranchAddress("Tau_rawIsodR03", Tau_rawIsodR03, &b_Tau_rawIsodR03);
  fChain->SetBranchAddress("Tau_charge", Tau_charge, &b_Tau_charge);
  fChain->SetBranchAddress("Tau_decayMode", Tau_decayMode, &b_Tau_decayMode);
  fChain->SetBranchAddress("Tau_jetIdx", Tau_jetIdx, &b_Tau_jetIdx);
  fChain->SetBranchAddress("Tau_idAntiEleDeadECal", Tau_idAntiEleDeadECal, &b_Tau_idAntiEleDeadECal);
  fChain->SetBranchAddress("Tau_idAntiMu", Tau_idAntiMu, &b_Tau_idAntiMu);
  fChain->SetBranchAddress("Tau_idDecayModeOldDMs", Tau_idDecayModeOldDMs, &b_Tau_idDecayModeOldDMs);
  fChain->SetBranchAddress("Tau_idDeepTau2017v2p1VSe", Tau_idDeepTau2017v2p1VSe, &b_Tau_idDeepTau2017v2p1VSe);
  fChain->SetBranchAddress("Tau_idDeepTau2017v2p1VSjet", Tau_idDeepTau2017v2p1VSjet, &b_Tau_idDeepTau2017v2p1VSjet);
  fChain->SetBranchAddress("Tau_idDeepTau2017v2p1VSmu", Tau_idDeepTau2017v2p1VSmu, &b_Tau_idDeepTau2017v2p1VSmu);
  fChain->SetBranchAddress("TkMET_phi", &TkMET_phi, &b_TkMET_phi);
  fChain->SetBranchAddress("TkMET_pt", &TkMET_pt, &b_TkMET_pt);
  fChain->SetBranchAddress("TkMET_sumEt", &TkMET_sumEt, &b_TkMET_sumEt);
  fChain->SetBranchAddress("nTrigObj", &nTrigObj, &b_nTrigObj);
  fChain->SetBranchAddress("TrigObj_pt", TrigObj_pt, &b_TrigObj_pt);
  fChain->SetBranchAddress("TrigObj_eta", TrigObj_eta, &b_TrigObj_eta);
  fChain->SetBranchAddress("TrigObj_phi", TrigObj_phi, &b_TrigObj_phi);
  fChain->SetBranchAddress("TrigObj_l1pt", TrigObj_l1pt, &b_TrigObj_l1pt);
  fChain->SetBranchAddress("TrigObj_l1pt_2", TrigObj_l1pt_2, &b_TrigObj_l1pt_2);
  fChain->SetBranchAddress("TrigObj_l2pt", TrigObj_l2pt, &b_TrigObj_l2pt);
  fChain->SetBranchAddress("TrigObj_id", TrigObj_id, &b_TrigObj_id);
  fChain->SetBranchAddress("TrigObj_l1iso", TrigObj_l1iso, &b_TrigObj_l1iso);
  fChain->SetBranchAddress("TrigObj_l1charge", TrigObj_l1charge, &b_TrigObj_l1charge);
  fChain->SetBranchAddress("TrigObj_filterBits", TrigObj_filterBits, &b_TrigObj_filterBits);
  fChain->SetBranchAddress("genTtbarId", &genTtbarId, &b_genTtbarId);
  fChain->SetBranchAddress("nOtherPV", &nOtherPV, &b_nOtherPV);
  fChain->SetBranchAddress("OtherPV_z", OtherPV_z, &b_OtherPV_z);
  fChain->SetBranchAddress("PV_ndof", &PV_ndof, &b_PV_ndof);
  fChain->SetBranchAddress("PV_x", &PV_x, &b_PV_x);
  fChain->SetBranchAddress("PV_y", &PV_y, &b_PV_y);
  fChain->SetBranchAddress("PV_z", &PV_z, &b_PV_z);
  fChain->SetBranchAddress("PV_chi2", &PV_chi2, &b_PV_chi2);
  fChain->SetBranchAddress("PV_score", &PV_score, &b_PV_score);
  fChain->SetBranchAddress("PV_npvs", &PV_npvs, &b_PV_npvs);
  fChain->SetBranchAddress("PV_npvsGood", &PV_npvsGood, &b_PV_npvsGood);
  fChain->SetBranchAddress("nSV", &nSV, &b_nSV);
  fChain->SetBranchAddress("SV_dlen", SV_dlen, &b_SV_dlen);
  fChain->SetBranchAddress("SV_dlenSig", SV_dlenSig, &b_SV_dlenSig);
  fChain->SetBranchAddress("SV_dxy", SV_dxy, &b_SV_dxy);
  fChain->SetBranchAddress("SV_dxySig", SV_dxySig, &b_SV_dxySig);
  fChain->SetBranchAddress("SV_pAngle", SV_pAngle, &b_SV_pAngle);
  fChain->SetBranchAddress("SV_charge", SV_charge, &b_SV_charge);
  fChain->SetBranchAddress("boostedTau_genPartIdx", boostedTau_genPartIdx, &b_boostedTau_genPartIdx);
  fChain->SetBranchAddress("boostedTau_genPartFlav", boostedTau_genPartFlav, &b_boostedTau_genPartFlav);
  fChain->SetBranchAddress("Electron_genPartIdx", Electron_genPartIdx, &b_Electron_genPartIdx);
  fChain->SetBranchAddress("Electron_genPartFlav", Electron_genPartFlav, &b_Electron_genPartFlav);
  fChain->SetBranchAddress("FatJet_genJetAK8Idx", FatJet_genJetAK8Idx, &b_FatJet_genJetAK8Idx);
  fChain->SetBranchAddress("FatJet_hadronFlavour", FatJet_hadronFlavour, &b_FatJet_hadronFlavour);
  fChain->SetBranchAddress("FatJet_nBHadrons", FatJet_nBHadrons, &b_FatJet_nBHadrons);
  fChain->SetBranchAddress("FatJet_nCHadrons", FatJet_nCHadrons, &b_FatJet_nCHadrons);
  fChain->SetBranchAddress("GenJetAK8_partonFlavour", GenJetAK8_partonFlavour, &b_GenJetAK8_partonFlavour);
  fChain->SetBranchAddress("GenJetAK8_hadronFlavour", GenJetAK8_hadronFlavour, &b_GenJetAK8_hadronFlavour);
  fChain->SetBranchAddress("GenJet_partonFlavour", GenJet_partonFlavour, &b_GenJet_partonFlavour);
  fChain->SetBranchAddress("GenJet_hadronFlavour", GenJet_hadronFlavour, &b_GenJet_hadronFlavour);
  fChain->SetBranchAddress("GenVtx_t0", &GenVtx_t0, &b_GenVtx_t0);
  fChain->SetBranchAddress("Jet_genJetIdx", Jet_genJetIdx, &b_Jet_genJetIdx);
  fChain->SetBranchAddress("Jet_hadronFlavour", Jet_hadronFlavour, &b_Jet_hadronFlavour);
  fChain->SetBranchAddress("Jet_partonFlavour", Jet_partonFlavour, &b_Jet_partonFlavour);
  fChain->SetBranchAddress("LowPtElectron_genPartIdx", LowPtElectron_genPartIdx, &b_LowPtElectron_genPartIdx);
  fChain->SetBranchAddress("LowPtElectron_genPartFlav", LowPtElectron_genPartFlav, &b_LowPtElectron_genPartFlav);
  fChain->SetBranchAddress("Muon_genPartIdx", Muon_genPartIdx, &b_Muon_genPartIdx);
  fChain->SetBranchAddress("Muon_genPartFlav", Muon_genPartFlav, &b_Muon_genPartFlav);
  fChain->SetBranchAddress("Photon_genPartIdx", Photon_genPartIdx, &b_Photon_genPartIdx);
  fChain->SetBranchAddress("Photon_genPartFlav", Photon_genPartFlav, &b_Photon_genPartFlav);
  fChain->SetBranchAddress("MET_fiducialGenPhi", &MET_fiducialGenPhi, &b_MET_fiducialGenPhi);
  fChain->SetBranchAddress("MET_fiducialGenPt", &MET_fiducialGenPt, &b_MET_fiducialGenPt);
  fChain->SetBranchAddress("Electron_cleanmask", Electron_cleanmask, &b_Electron_cleanmask);
  fChain->SetBranchAddress("Jet_cleanmask", Jet_cleanmask, &b_Jet_cleanmask);
  fChain->SetBranchAddress("Muon_cleanmask", Muon_cleanmask, &b_Muon_cleanmask);
  fChain->SetBranchAddress("Photon_cleanmask", Photon_cleanmask, &b_Photon_cleanmask);
  fChain->SetBranchAddress("Tau_cleanmask", Tau_cleanmask, &b_Tau_cleanmask);
  fChain->SetBranchAddress("SubJet_hadronFlavour", SubJet_hadronFlavour, &b_SubJet_hadronFlavour);
  fChain->SetBranchAddress("SubJet_nBHadrons", SubJet_nBHadrons, &b_SubJet_nBHadrons);
  fChain->SetBranchAddress("SubJet_nCHadrons", SubJet_nCHadrons, &b_SubJet_nCHadrons);
  fChain->SetBranchAddress("SV_chi2", SV_chi2, &b_SV_chi2);
  fChain->SetBranchAddress("SV_eta", SV_eta, &b_SV_eta);
  fChain->SetBranchAddress("SV_mass", SV_mass, &b_SV_mass);
  fChain->SetBranchAddress("SV_ndof", SV_ndof, &b_SV_ndof);
  fChain->SetBranchAddress("SV_phi", SV_phi, &b_SV_phi);
  fChain->SetBranchAddress("SV_pt", SV_pt, &b_SV_pt);
  fChain->SetBranchAddress("SV_x", SV_x, &b_SV_x);
  fChain->SetBranchAddress("SV_y", SV_y, &b_SV_y);
  fChain->SetBranchAddress("SV_z", SV_z, &b_SV_z);
  fChain->SetBranchAddress("SV_ntracks", SV_ntracks, &b_SV_ntracks);
  fChain->SetBranchAddress("Tau_genPartIdx", Tau_genPartIdx, &b_Tau_genPartIdx);
  fChain->SetBranchAddress("Tau_genPartFlav", Tau_genPartFlav, &b_Tau_genPartFlav);
  fChain->SetBranchAddress("Flag_HBHENoiseFilter", &Flag_HBHENoiseFilter, &b_Flag_HBHENoiseFilter);
  fChain->SetBranchAddress("Flag_HBHENoiseIsoFilter", &Flag_HBHENoiseIsoFilter, &b_Flag_HBHENoiseIsoFilter);
  fChain->SetBranchAddress("Flag_CSCTightHaloFilter", &Flag_CSCTightHaloFilter, &b_Flag_CSCTightHaloFilter);
  fChain->SetBranchAddress("Flag_CSCTightHaloTrkMuUnvetoFilter", &Flag_CSCTightHaloTrkMuUnvetoFilter, &b_Flag_CSCTightHaloTrkMuUnvetoFilter);
  fChain->SetBranchAddress("Flag_CSCTightHalo2015Filter", &Flag_CSCTightHalo2015Filter, &b_Flag_CSCTightHalo2015Filter);
  fChain->SetBranchAddress("Flag_globalTightHalo2016Filter", &Flag_globalTightHalo2016Filter, &b_Flag_globalTightHalo2016Filter);
  fChain->SetBranchAddress("Flag_globalSuperTightHalo2016Filter", &Flag_globalSuperTightHalo2016Filter, &b_Flag_globalSuperTightHalo2016Filter);
  fChain->SetBranchAddress("Flag_HcalStripHaloFilter", &Flag_HcalStripHaloFilter, &b_Flag_HcalStripHaloFilter);
  fChain->SetBranchAddress("Flag_hcalLaserEventFilter", &Flag_hcalLaserEventFilter, &b_Flag_hcalLaserEventFilter);
  fChain->SetBranchAddress("Flag_EcalDeadCellTriggerPrimitiveFilter", &Flag_EcalDeadCellTriggerPrimitiveFilter, &b_Flag_EcalDeadCellTriggerPrimitiveFilter);
  fChain->SetBranchAddress("Flag_EcalDeadCellBoundaryEnergyFilter", &Flag_EcalDeadCellBoundaryEnergyFilter, &b_Flag_EcalDeadCellBoundaryEnergyFilter);
  fChain->SetBranchAddress("Flag_ecalBadCalibFilter", &Flag_ecalBadCalibFilter, &b_Flag_ecalBadCalibFilter);
  fChain->SetBranchAddress("Flag_goodVertices", &Flag_goodVertices, &b_Flag_goodVertices);
  fChain->SetBranchAddress("Flag_eeBadScFilter", &Flag_eeBadScFilter, &b_Flag_eeBadScFilter);
  fChain->SetBranchAddress("Flag_ecalLaserCorrFilter", &Flag_ecalLaserCorrFilter, &b_Flag_ecalLaserCorrFilter);
  fChain->SetBranchAddress("Flag_trkPOGFilters", &Flag_trkPOGFilters, &b_Flag_trkPOGFilters);
  fChain->SetBranchAddress("Flag_chargedHadronTrackResolutionFilter", &Flag_chargedHadronTrackResolutionFilter, &b_Flag_chargedHadronTrackResolutionFilter);
  fChain->SetBranchAddress("Flag_muonBadTrackFilter", &Flag_muonBadTrackFilter, &b_Flag_muonBadTrackFilter);
  fChain->SetBranchAddress("Flag_BadChargedCandidateFilter", &Flag_BadChargedCandidateFilter, &b_Flag_BadChargedCandidateFilter);
  fChain->SetBranchAddress("Flag_BadPFMuonFilter", &Flag_BadPFMuonFilter, &b_Flag_BadPFMuonFilter);
  fChain->SetBranchAddress("Flag_BadPFMuonDzFilter", &Flag_BadPFMuonDzFilter, &b_Flag_BadPFMuonDzFilter);
  fChain->SetBranchAddress("Flag_hfNoisyHitsFilter", &Flag_hfNoisyHitsFilter, &b_Flag_hfNoisyHitsFilter);
  fChain->SetBranchAddress("Flag_BadChargedCandidateSummer16Filter", &Flag_BadChargedCandidateSummer16Filter, &b_Flag_BadChargedCandidateSummer16Filter);
  fChain->SetBranchAddress("Flag_BadPFMuonSummer16Filter", &Flag_BadPFMuonSummer16Filter, &b_Flag_BadPFMuonSummer16Filter);
  fChain->SetBranchAddress("Flag_trkPOG_manystripclus53X", &Flag_trkPOG_manystripclus53X, &b_Flag_trkPOG_manystripclus53X);
  fChain->SetBranchAddress("Flag_trkPOG_toomanystripclus53X", &Flag_trkPOG_toomanystripclus53X, &b_Flag_trkPOG_toomanystripclus53X);
  fChain->SetBranchAddress("Flag_trkPOG_logErrorTooManyClusters", &Flag_trkPOG_logErrorTooManyClusters, &b_Flag_trkPOG_logErrorTooManyClusters);
  fChain->SetBranchAddress("Flag_METFilters", &Flag_METFilters, &b_Flag_METFilters);
  fChain->SetBranchAddress("L1Reco_step", &L1Reco_step, &b_L1Reco_step);
  fChain->SetBranchAddress("L1simulation_step", &L1simulation_step, &b_L1simulation_step);
  Notify();
}

Bool_t NanoTree::Notify()
{
  // The Notify() function is called when a new file is opened. This
  // can be either for a new TTree in a TChain or when when a new TTree
  // is started when using PROOF. It is normally not necessary to make changes
  // to the generated code, but the routine can be extended by the
  // user if needed. The return value is currently not used.

  return kTRUE;
}

void NanoTree::Show(Long64_t entry)
{
  // Print contents of entry.
  // If entry is not specified, print current entry
  if (!fChain) return;
  fChain->Show(entry);
}
Int_t NanoTree::Cut(Long64_t entry)
{
  // This function may be called from Loop.
  // returns  1 if entry is accepted.
  // returns -1 otherwise.
  return 1;
}
#endif // #ifdef NanoTree_cxx
