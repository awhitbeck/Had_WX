//#include "NanoTree.C"
//#include "RA2bNtupleV20.C"

class CompareVars{

 public:

  RA2bNtupleV20* ra2b;
  NanoTree*      nano;

  TH1F* ra2b_histo=0;
   TH1F* nano_histo=0;
  TH1F* ratio_histo=0;
  string ra2b_variable;
  string nano_variable;
  int index;
  bool debug=false;
  
  CompareVars(RA2bNtupleV20* ra2b_=0, NanoTree* nano_=0,
	      string ra2b_variable_="", string nano_variable_="",
	      int index_=-1){
    ra2b = ra2b_;
    nano = nano_;
    ra2b_variable=ra2b_variable_;
    nano_variable=nano_variable_;
    ra2b->fChain->SetBranchStatus(ra2b_variable.c_str(),1);
    nano->fChain->SetBranchStatus(nano_variable.c_str(),1);
    index = index_;
  };

  CompareVars(RA2bNtupleV20* ra2b_=0, NanoTree* nano_=0,
	      string ra2b_variable_="", string nano_variable_="",
	      int nbins=20, float start_bin=0, float end_bin=100,
	      int index_=-1){
    ra2b = ra2b_;
    nano = nano_;
    ra2b_variable=ra2b_variable_;
    nano_variable=nano_variable_;
    char temp[100];
    sprintf(temp,"ra2b_histo_%s_%i",ra2b_variable.c_str(),index);
    ra2b_histo = new TH1F(temp,temp,nbins,start_bin,end_bin);
    sprintf(temp,"nano_hist_%s_%i",nano_variable.c_str(),index);
    nano_histo = new TH1F(temp,temp,nbins,start_bin,end_bin);
    sprintf(temp,"ratio_histo_%s_%s_%i",ra2b_variable.c_str(),nano_variable.c_str(),index);
    ratio_histo = new TH1F(temp,temp,20,0,2);
    ra2b->fChain->SetBranchStatus(ra2b_variable.c_str(),1);
    nano->fChain->SetBranchStatus(nano_variable.c_str(),1);
    index = index_;
  };

  void Draw(){

    TCanvas* can = new TCanvas("can","can",500,500);
    ra2b_histo->SetLineColor(4);
    ra2b_histo->SetLineWidth(2);
    ra2b_histo->SetLineStyle(1);
    nano_histo->SetLineColor(2);
    nano_histo->SetLineWidth(2);
    nano_histo->SetLineStyle(2);
    ra2b_histo->Draw("");
    nano_histo->Draw("SAME");
    char temp[100];
    sprintf(temp,"compare_%s_%s_%i.png",ra2b_variable.c_str(),nano_variable.c_str(),index);
    can->SaveAs(temp);
  };
  
  void Fill(){

    if( ! ra2b ){
      cerr << "the ra2b tree has not been set" << endl;
      return;
    }
    if( ! nano ){
      cerr << "the nano tree has not been set" << endl;
      return;
    }
    if( ! ra2b_histo ){
      cerr << "the ra2b_histo has not been initialized" << endl;
      return;
    }
    if( ! nano_histo ){
      cerr << "the nano_histo has not been initialized" << endl;
      return;
    }
    
    // figure out the type of ra2b variable
    if(ra2b->branch_map_UInt_t.find(ra2b_variable) != ra2b->branch_map_UInt_t.end() ){
      if( index >= 0 )
	ra2b_histo->Fill(ra2b->branch_map_UInt_t[ra2b_variable][index]);
      else
	ra2b_histo->Fill(*ra2b->branch_map_UInt_t[ra2b_variable]);
      if( debug ) cout << "found Uint_t: " << *ra2b->branch_map_UInt_t[ra2b_variable] << endl;

    }else if( ra2b->branch_map_ULong64_t.find(ra2b_variable) != ra2b->branch_map_ULong64_t.end() ){
      if( index >= 0 )
	ra2b_histo->Fill(ra2b->branch_map_ULong64_t[ra2b_variable][index]);
      else
	ra2b_histo->Fill(*ra2b->branch_map_ULong64_t[ra2b_variable]);
      if( debug ) cout << "found ULong64_t: " << *ra2b->branch_map_ULong64_t[ra2b_variable] << endl;

    }else if( ra2b->branch_map_Int_t.find(ra2b_variable) != ra2b->branch_map_Int_t.end() ){
      if( index >= 0 )
	ra2b_histo->Fill(ra2b->branch_map_Int_t[ra2b_variable][index]);
      else
	ra2b_histo->Fill(*ra2b->branch_map_Int_t[ra2b_variable]);
      if( debug ) cout << "found Int_t: " << *ra2b->branch_map_Int_t[ra2b_variable] << endl;

    }else if( ra2b->branch_map_Bool_t.find(ra2b_variable) != ra2b->branch_map_Bool_t.end() ){
      if( index >= 0 )
	ra2b_histo->Fill(ra2b->branch_map_Bool_t[ra2b_variable][index]);
      else
	ra2b_histo->Fill(*ra2b->branch_map_Bool_t[ra2b_variable]);
      if( debug ) cout << "found Bool_t: " << *ra2b->branch_map_Bool_t[ra2b_variable] << endl;

    }else if( ra2b->branch_map_Float_t.find(ra2b_variable) != ra2b->branch_map_Float_t.end() ){
      if( index >= 0 ){
	if(debug) cout << ":)index: " << index << " " << (ra2b->branch_map_Float_t[ra2b_variable])[index] << endl;
	ra2b_histo->Fill((ra2b->branch_map_Float_t[ra2b_variable])[index]);
      }else{
      	ra2b_histo->Fill(*ra2b->branch_map_Float_t[ra2b_variable]);
	if( debug ) cout << "found Float_t: " << *ra2b->branch_map_Float_t[ra2b_variable] << endl;
      }

    }else if( ra2b->branch_map_vector_int.find(ra2b_variable) != ra2b->branch_map_vector_int.end()){
      if( debug ) cout << "found vector<int>" << endl;
      if( index < ra2b->branch_map_vector_int[ra2b_variable]->size() && index >= 0 ){
	ra2b_histo->Fill(ra2b->branch_map_vector_int[ra2b_variable]->at(index));
      }

    }else if( ra2b->branch_map_vector_float.find(ra2b_variable) != ra2b->branch_map_vector_float.end()){
      if( debug ) cout << "found vector<float>" << endl;
      if( index < ra2b->branch_map_vector_float[ra2b_variable]->size() && index >= 0 ){
	if( debug ) cout << "index: " << index << " " << ra2b->branch_map_vector_float[ra2b_variable]->at(index) << endl;
	ra2b_histo->Fill(ra2b->branch_map_vector_float[ra2b_variable]->at(index));
      }
      
    }else if( ra2b->branch_map_vector_bool.find(ra2b_variable) != ra2b->branch_map_vector_bool.end()){
      if( debug ) cout << "found vector<bool>" << endl;
      if( index < ra2b->branch_map_vector_float[ra2b_variable]->size() && index >= 0 )
	ra2b_histo->Fill(ra2b->branch_map_vector_bool[ra2b_variable]->at(index));
    }else{
      cerr << "[[CompareVars::Fill]] There is no branch corresponding to " << ra2b_variable << " in the ra2b tree." << endl;
      return;
    }

    // figure out the type of nano varialbe
    if( nano->branch_map_UInt_t.find(nano_variable) != nano->branch_map_UInt_t.end() ){
      if( debug ) cout << "found Uint_t: " << *nano->branch_map_UInt_t[nano_variable] << endl;
      if( index >= 0 )
	nano_histo->Fill(nano->branch_map_UInt_t[nano_variable][index]);
      else
	nano_histo->Fill(*nano->branch_map_UInt_t[nano_variable]);
    }else if( nano->branch_map_ULong64_t.find(nano_variable) != nano->branch_map_ULong64_t.end() ){
      if( index >= 0 )
	nano_histo->Fill(nano->branch_map_ULong64_t[nano_variable][index]);
      else
	nano_histo->Fill(*nano->branch_map_ULong64_t[nano_variable]);
    }else if( nano->branch_map_Bool_t.find(nano_variable) != nano->branch_map_Bool_t.end() ){
      if( index >= 0 )
	nano_histo->Fill(nano->branch_map_Bool_t[nano_variable][index]);
      else
	nano_histo->Fill(*nano->branch_map_Bool_t[nano_variable]);
    }else if( nano->branch_map_Int_t.find(nano_variable) != nano->branch_map_Int_t.end() ){
      if( index >= 0 )
	nano_histo->Fill(nano->branch_map_Int_t[nano_variable][index]);
      else
	nano_histo->Fill(*nano->branch_map_Int_t[nano_variable]);
    }else if( nano->branch_map_Float_t.find(nano_variable) != nano->branch_map_Float_t.end() ){
      if( index >= 0 ){
	if(debug) cout << "nano index: " << index << " " << nano->branch_map_Float_t[nano_variable][index] << endl;
	nano_histo->Fill(nano->branch_map_Float_t[nano_variable][index]);
      }else{
	if( debug ) cout << "found nano Float_t: " << *nano->branch_map_Float_t[nano_variable] << endl;
	nano_histo->Fill(*nano->branch_map_Float_t[nano_variable]);
      }
    }else if( nano->branch_map_UChar_t.find(nano_variable) != nano->branch_map_UChar_t.end() ){
      if( index >= 0 )
	nano_histo->Fill(nano->branch_map_UChar_t[nano_variable][index]);
      else
	nano_histo->Fill(*nano->branch_map_UChar_t[nano_variable]);
    }else{
      cerr << "[[CompareVars::Fill]] There is no branch corresponding to " << nano_variable << " in the nano tree." << endl;
      return;
    }

  };
};  
