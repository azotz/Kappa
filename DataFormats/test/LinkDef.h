/* Copyright (c) 2010 - All Rights Reserved
 *   Armin Burgmeier <burgmeier@ekp.uni-karlsruhe.de>
 *   Fred Stober <stober@cern.ch>
 *   Joram Berger <joram.berger@cern.ch>
 *   Manuel Zeise <zeise@cern.ch>
 */

#include "../src/classes.h"

#ifdef __CINT__

#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;

/************************************************************/
/* BASIC BUILDING BLOCKS                                    */
/************************************************************/

#pragma link C++ class ROOT::Math::PtEtaPhiM4D<float>+;
#pragma link C++ class ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> >+;
#pragma link C++ typedef RMFLV_Store;
#pragma link C++ typedef RMFLV;

// Already defined by ROOT:
//#pragma link C++ class ROOT::Math::PtEtaPhiM4D<double>+;
//#pragma link C++ class ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<double> >+;
#pragma link C++ typedef RMDLV_Store;
#pragma link C++ typedef RMDLV;

#pragma link C++ class ROOT::Math::Cartesian3D<float>+;
#pragma link C++ class ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<float> >+;
#pragma link C++ class ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<float>, ROOT::Math::DefaultCoordinateSystemTag>+;
#pragma link C++ typedef RMPoint;

#pragma link C++ class ROOT::Math::RowOffsets<2>+;
#pragma link C++ class ROOT::Math::MatRepSym<double,2>+;
#pragma link C++ class ROOT::Math::SymMatrixOffsets<2>+;
#pragma link C++ class ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> >+;

#pragma link C++ class ROOT::Math::RowOffsets<3>+;
#pragma link C++ class ROOT::Math::MatRepSym<double,3>+;
#pragma link C++ class ROOT::Math::SymMatrixOffsets<3>+;
#pragma link C++ class ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> >+;

#pragma link C++ class ROOT::Math::RowOffsets<7>+;
#pragma link C++ class ROOT::Math::MatRepSym<double,7>+;
#pragma link C++ class ROOT::Math::SymMatrixOffsets<7>+;
#pragma link C++ class ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepSym<double,7> >+;

/************************************************************/
/* DATATYPES                                                */
/************************************************************/

#pragma link C++ struct KLV+;
#pragma link C++ class std::vector<KLV>+;
#pragma link C++ typedef KLVs;

#pragma link C++ struct KLepton+;
#pragma link C++ class std::vector<KLeptons>+;
#pragma link C++ typedef KLeptons;

#pragma link C++ struct KBasicMET+;
#pragma link C++ struct KMET+;

#pragma link C++ struct KTrack+;
#pragma link C++ class std::vector<KTrack>+;
#pragma link C++ typedef KTracks;

#pragma link C++ struct KTrackSummary+;

#pragma link C++ struct KCaloJet+;
#pragma link C++ class std::vector<KCaloJet>+;
#pragma link C++ typedef KCaloJets;

#pragma link C++ struct KBasicJet+;
#pragma link C++ class std::vector<KBasicJet>+;
#pragma link C++ typedef KBasicJets;

#pragma link C++ struct KJet+;
#pragma link C++ class std::vector<KJet>+;
#pragma link C++ typedef KJets;

#pragma link C++ struct KMuon+;
#pragma link C++ class std::vector<KMuon>+;
#pragma link C++ typedef KMuons;

#pragma link C++ struct KElectron+;
#pragma link C++ class std::vector<KElectron>+;
#pragma link C++ typedef KElectrons;

#pragma link C++ struct KTauMetadata+;
#pragma link C++ struct KMuonMetadata+;

#pragma link C++ struct KBasicTau+;
#pragma link C++ class std::vector<KBasicTau>+;
#pragma link C++ typedef KBasicTaus;

#pragma link C++ struct KCaloTau+;
#pragma link C++ class std::vector<KCaloTau>+;
#pragma link C++ typedef KCaloTaus;

#pragma link C++ struct KTau+;
#pragma link C++ class std::vector<KTau>+;
#pragma link C++ typedef KTaus;

#pragma link C++ struct KTaupairVerticesMap+;
#pragma link C++ class std::vector<KTaupairVerticesMap>+;
#pragma link C++ typedef KTaupairVerticesMaps;

#pragma link C++ struct KGenTau+;
#pragma link C++ class std::vector<KGenTau>+;
#pragma link C++ typedef KGenTaus;

#pragma link C++ struct KVertex+;
#pragma link C++ class std::vector<KVertex>+;
#pragma link C++ typedef KVertices;

#pragma link C++ struct KVertexSummary+;

#pragma link C++ struct KBeamSpot+;
#pragma link C++ class std::vector<KBeamSpot>+;
#pragma link C++ typedef KBeamSpots;

#pragma link C++ struct KGenParticle+;
#pragma link C++ class std::vector<KGenParticle>+;
#pragma link C++ typedef KGenParticles;

#pragma link C++ struct KHit+;
#pragma link C++ class std::vector<KHit>+;
#pragma link C++ typedef KHits;

#pragma link C++ struct KL1Muon+;
#pragma link C++ class std::vector<KL1Muon>+;
#pragma link C++ typedef KL1Muons;

#pragma link C++ struct KPFCandidate+;
#pragma link C++ class std::vector<KPFCandidate>+;
#pragma link C++ typedef KPFCandidates;

#pragma link C++ struct KGenPhoton+;
#pragma link C++ class std::vector<KGenPhoton>+;
#pragma link C++ typedef KGenPhotons;

#pragma link C++ struct KPileupDensity+;
#pragma link C++ struct KHCALNoiseSummary+;
#pragma link C++ struct KFilterSummary+;
#pragma link C++ struct KFilterMetadata+;
#pragma link C++ struct KJetMetadata+;
#pragma link C++ struct KElectronMetadata+;
#pragma link C++ struct KTriggerObjectMetadata+;

#pragma link C++ class std::vector<std::vector<size_t> >+;
#pragma link C++ struct KTriggerObjects+;

#pragma link C++ struct KMuonTriggerCandidate+;
#pragma link C++ class std::vector<KMuonTriggerCandidate>+;
#pragma link C++ typedef KMuonTriggerCandidates;

/************************************************************/
/* METADATA                                                 */
/************************************************************/

#pragma link C++ struct KProvenance+;

// Already defined by ROOT:
//#pragma link C++ class std::map<std::string, int>+;
#pragma link C++ struct KLumiInfo+;
#pragma link C++ struct KGenLumiInfo+;
#pragma link C++ struct KDataLumiInfo+;

#pragma link C++ struct KEventInfo+;
#pragma link C++ struct KGenEventInfo+;

/************************************************************/

#endif
