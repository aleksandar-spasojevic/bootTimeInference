// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// bootTimeInference
List bootTimeInference(NumericMatrix ret, int b, int M, double Delta_null, int digits);
RcppExport SEXP bootTimeInference_bootTimeInference(SEXP retSEXP, SEXP bSEXP, SEXP MSEXP, SEXP Delta_nullSEXP, SEXP digitsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type ret(retSEXP);
    Rcpp::traits::input_parameter< int >::type b(bSEXP);
    Rcpp::traits::input_parameter< int >::type M(MSEXP);
    Rcpp::traits::input_parameter< double >::type Delta_null(Delta_nullSEXP);
    Rcpp::traits::input_parameter< int >::type digits(digitsSEXP);
    __result = Rcpp::wrap(bootTimeInference(ret, b, M, Delta_null, digits));
    return __result;
END_RCPP
}
// blockSizeCalibrate
List blockSizeCalibrate(NumericMatrix ret, IntegerVector b_vec, double alpha, int M, int K, int b_av, int T_start);
RcppExport SEXP bootTimeInference_blockSizeCalibrate(SEXP retSEXP, SEXP b_vecSEXP, SEXP alphaSEXP, SEXP MSEXP, SEXP KSEXP, SEXP b_avSEXP, SEXP T_startSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type ret(retSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type b_vec(b_vecSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< int >::type M(MSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< int >::type b_av(b_avSEXP);
    Rcpp::traits::input_parameter< int >::type T_start(T_startSEXP);
    __result = Rcpp::wrap(blockSizeCalibrate(ret, b_vec, alpha, M, K, b_av, T_start));
    return __result;
END_RCPP
}
