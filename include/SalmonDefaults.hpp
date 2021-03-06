#ifndef SALMON_DEFAULTS_HPP
#define SALMON_DEFAULTS_HPP

namespace salmon {
namespace defaults {
  // general
  constexpr const bool discardOrphansQuasi{false};
  constexpr const bool allowOrphansFMD{false};
  constexpr const bool seqBiasCorrect{false};
  constexpr const bool gcBiasCorrect{false};
  constexpr const bool posBiasCorrect{false};
  constexpr const uint32_t numThreads{8};
  constexpr const double incompatPrior{0.0};
  constexpr const char quasiMappingDefaultFile[] = "";
  constexpr const char quasiMappingImplicitFile[] = "-";
  constexpr const bool metaMode{false};
  constexpr const bool disableMappingCache{true};

  // advanced
  constexpr const bool validateMappings{false};
  constexpr const double minScoreFraction{0.65};
  constexpr const int8_t matchScore{2};
  constexpr const int8_t mismatchPenalty{-4};
  constexpr const int8_t gapOpenPenalty{5};
  constexpr const int8_t gapExtendPenalty{3};
  constexpr const bool alternativeInitMode{false};
  constexpr const char auxDir[] = "aux_info";
  constexpr const bool consistentHits{false};
  constexpr const bool dumpEq{false};
  constexpr const bool dumpEqWeights{false};
  constexpr const bool fasterMapping{false};
  constexpr const uint32_t minAssignedFrags{10};
  constexpr const bool reduceGCMemory{false};
  constexpr const uint32_t biasSpeedSamp{5};
  constexpr const bool strictIntersect{false};
  constexpr const uint32_t maxFragLength{1000};
  constexpr const uint32_t fragLenPriorMean{250};
  constexpr const uint32_t fragLenPriorSD{25};
  constexpr const double ffactor{0.65};
  constexpr const uint32_t maxSMEMOccs{200};
  constexpr const bool initUniform{false};
  constexpr const uint32_t maxReadOccs{200};
  constexpr const bool noLengthCorrection{false};
  constexpr const bool noEffectiveLengthCorrection{false};
  constexpr const bool noFragLengthDist{false};
  constexpr const bool noBiasLengthThreshold{false};
  constexpr const uint32_t numBiasSamples{2000000};
  constexpr const uint32_t numBurninFrags{5000000};
  constexpr const uint32_t numPreBurninFrags{1000000};
  constexpr const bool useVBOpt{false};
  constexpr const uint32_t rangeFactorizationBins{0};
  constexpr const uint32_t numGibbsSamples{0};
  constexpr const bool noGammaDraw{false};
  constexpr const bool bootstrapReproject{false};
  constexpr const uint32_t thinningFactor{16};
  constexpr const uint32_t numBootstraps{0};
  constexpr const bool quiet{false};
  constexpr const bool perTranscriptPrior{false};
  constexpr const double vbPrior{1e-5};
  constexpr const bool writeOrphanLinks{false};
  constexpr const bool writeUnmappedNames{false};
  constexpr const double quasiCoverage{0.0};

   // FMD-specific options
  constexpr const int fmdMinSeedLength{19};
  constexpr const bool fmdSensitive{false};
  constexpr const bool fmdExtraSeedPass{false};
  constexpr const double fmdCoverageThresh{0.7};
  constexpr const int fmdSplitWidth{0};
  constexpr const bool fmdSplitSpanningSeeds{false};

  // options not shown by default
  constexpr const size_t numFragGCBins{25};
  constexpr const size_t numConditionalGCBins{3};
  constexpr const size_t numRequiredFrags{50000000}; // deprecated

  // experimental / testing
  constexpr const bool noRichEqClasses{false};
  constexpr const bool noFragLengthFactor{false};
  constexpr const bool rankEqClasses{false};
  constexpr const bool dontExtrapolateCounts{false};

  // purely deprecated --- will remove soon
  constexpr const bool useFSPD{false};

  // alignment-based mode
  //constexpr const bool useErrorModel{true};
  constexpr const bool noErrorModel{false};
  constexpr const bool useMassBanking{false};
  constexpr const bool gencodeRef{false};
  constexpr const uint32_t mappingCacheMemoryLimit{2000000};
  constexpr const uint32_t numErrorBins{6};
  constexpr const bool sampleOutput{false};
  constexpr const bool sampleUnaligned{false};
}
}

namespace alevin {
namespace defaults {
  constexpr const bool naive{false};
  constexpr const bool noDedup{false};
  constexpr const bool txpLevel{false};
  constexpr const bool eqClassLevel{false};
  constexpr const bool isDropseq{false};
  constexpr const bool isChromium{false};
  constexpr const bool isInDrop{false};
  constexpr const bool isGemcode{false};
  constexpr const bool dumpBarcodeEq{false};
  constexpr const bool noQuant{false};
  constexpr const bool noSoftMap{true};
  constexpr const bool useCorrelation{false};
  constexpr const bool dumpFQ{false};
  constexpr const bool dumpFeatures{false};
  constexpr const bool dumpBFH{false};
  constexpr const bool dumpUMIToolsMap{false};
  constexpr const bool dumpBarcodeMap{false};
  constexpr const bool dumpCSVCounts{false};
  constexpr const bool doEM{false};
  constexpr const bool noBarcode{false};
  constexpr const uint32_t lowRegionMinNumBarcodes{200};
  constexpr const uint32_t maxNumBarcodes{100000};
}
}

#endif // SALMON_DEFAULTS_HPP
