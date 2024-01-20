// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// getPriceForEuropeanDownAndOutCall
double getPriceForEuropeanDownAndOutCall(int nInt, double Strike, double Spot, double Vol, double Rfr, double Expiry, double Barrier, int nReps);
RcppExport SEXP _EuroOption_getPriceForEuropeanDownAndOutCall(SEXP nIntSEXP, SEXP StrikeSEXP, SEXP SpotSEXP, SEXP VolSEXP, SEXP RfrSEXP, SEXP ExpirySEXP, SEXP BarrierSEXP, SEXP nRepsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nInt(nIntSEXP);
    Rcpp::traits::input_parameter< double >::type Strike(StrikeSEXP);
    Rcpp::traits::input_parameter< double >::type Spot(SpotSEXP);
    Rcpp::traits::input_parameter< double >::type Vol(VolSEXP);
    Rcpp::traits::input_parameter< double >::type Rfr(RfrSEXP);
    Rcpp::traits::input_parameter< double >::type Expiry(ExpirySEXP);
    Rcpp::traits::input_parameter< double >::type Barrier(BarrierSEXP);
    Rcpp::traits::input_parameter< int >::type nReps(nRepsSEXP);
    rcpp_result_gen = Rcpp::wrap(getPriceForEuropeanDownAndOutCall(nInt, Strike, Spot, Vol, Rfr, Expiry, Barrier, nReps));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_EuroOption_getPriceForEuropeanDownAndOutCall", (DL_FUNC) &_EuroOption_getPriceForEuropeanDownAndOutCall, 8},
    {NULL, NULL, 0}
};

RcppExport void R_init_EuroOption(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
