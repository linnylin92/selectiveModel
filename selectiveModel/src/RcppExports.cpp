// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// unique_sort_native
Rcpp::NumericVector unique_sort_native(const Rcpp::NumericVector& x);
RcppExport SEXP _selectiveModel_unique_sort_native(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(unique_sort_native(x));
    return rcpp_result_gen;
END_RCPP
}
// construct_midpoints
Rcpp::NumericVector construct_midpoints(const Rcpp::NumericVector& x);
RcppExport SEXP _selectiveModel_construct_midpoints(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(construct_midpoints(x));
    return rcpp_result_gen;
END_RCPP
}
// theta_in_matrix
bool theta_in_matrix(const Rcpp::NumericVector x, const Rcpp::NumericMatrix mat);
RcppExport SEXP _selectiveModel_theta_in_matrix(SEXP xSEXP, SEXP matSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix >::type mat(matSEXP);
    rcpp_result_gen = Rcpp::wrap(theta_in_matrix(x, mat));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_hello_world
List rcpp_hello_world();
RcppExport SEXP _selectiveModel_rcpp_hello_world() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_hello_world());
    return rcpp_result_gen;
END_RCPP
}
// test
NumericVector test();
RcppExport SEXP _selectiveModel_test() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(test());
    return rcpp_result_gen;
END_RCPP
}

RcppExport void sample_truncnorm_white(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);

static const R_CallMethodDef CallEntries[] = {
    {"_selectiveModel_unique_sort_native", (DL_FUNC) &_selectiveModel_unique_sort_native, 1},
    {"_selectiveModel_construct_midpoints", (DL_FUNC) &_selectiveModel_construct_midpoints, 1},
    {"_selectiveModel_theta_in_matrix", (DL_FUNC) &_selectiveModel_theta_in_matrix, 2},
    {"_selectiveModel_rcpp_hello_world", (DL_FUNC) &_selectiveModel_rcpp_hello_world, 0},
    {"_selectiveModel_test", (DL_FUNC) &_selectiveModel_test, 0},
    {"sample_truncnorm_white", (DL_FUNC) &sample_truncnorm_white, 10},
    {NULL, NULL, 0}
};

RcppExport void R_init_selectiveModel(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
