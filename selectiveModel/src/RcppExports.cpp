// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// c_l2norm
double c_l2norm(const Rcpp::NumericVector& vec);
RcppExport SEXP _selectiveModel_c_l2norm(SEXP vecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type vec(vecSEXP);
    rcpp_result_gen = Rcpp::wrap(c_l2norm(vec));
    return rcpp_result_gen;
END_RCPP
}
// c_quadratic
Rcpp::NumericVector c_quadratic(const double& a, const double& b, const double& c);
RcppExport SEXP _selectiveModel_c_quadratic(SEXP aSEXP, SEXP bSEXP, SEXP cSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type a(aSEXP);
    Rcpp::traits::input_parameter< const double& >::type b(bSEXP);
    Rcpp::traits::input_parameter< const double& >::type c(cSEXP);
    rcpp_result_gen = Rcpp::wrap(c_quadratic(a, b, c));
    return rcpp_result_gen;
END_RCPP
}
// c_unique_sort_native
Rcpp::NumericVector c_unique_sort_native(const Rcpp::NumericVector& x);
RcppExport SEXP _selectiveModel_c_unique_sort_native(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(c_unique_sort_native(x));
    return rcpp_result_gen;
END_RCPP
}
// c_construct_midpoints
Rcpp::NumericVector c_construct_midpoints(const Rcpp::NumericVector& x);
RcppExport SEXP _selectiveModel_c_construct_midpoints(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(c_construct_midpoints(x));
    return rcpp_result_gen;
END_RCPP
}
// c_which_native
Rcpp::IntegerVector c_which_native(const Rcpp::LogicalVector& x);
RcppExport SEXP _selectiveModel_c_which_native(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::LogicalVector& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(c_which_native(x));
    return rcpp_result_gen;
END_RCPP
}
// c_consecutive_true
Rcpp::IntegerMatrix c_consecutive_true(const Rcpp::LogicalVector& vec);
RcppExport SEXP _selectiveModel_c_consecutive_true(SEXP vecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::LogicalVector& >::type vec(vecSEXP);
    rcpp_result_gen = Rcpp::wrap(c_consecutive_true(vec));
    return rcpp_result_gen;
END_RCPP
}
// c_unlist_native
Rcpp::NumericVector c_unlist_native(const Rcpp::List& list);
RcppExport SEXP _selectiveModel_c_unlist_native(SEXP listSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type list(listSEXP);
    rcpp_result_gen = Rcpp::wrap(c_unlist_native(list));
    return rcpp_result_gen;
END_RCPP
}
// c_theta_in_matrix
Rcpp::LogicalVector c_theta_in_matrix(const double& x, const Rcpp::NumericMatrix& mat);
RcppExport SEXP _selectiveModel_c_theta_in_matrix(SEXP xSEXP, SEXP matSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type mat(matSEXP);
    rcpp_result_gen = Rcpp::wrap(c_theta_in_matrix(x, mat));
    return rcpp_result_gen;
END_RCPP
}
// c_theta_in_all_matrix
Rcpp::LogicalVector c_theta_in_all_matrix(const double& x, const Rcpp::List& list);
RcppExport SEXP _selectiveModel_c_theta_in_all_matrix(SEXP xSEXP, SEXP listSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type list(listSEXP);
    rcpp_result_gen = Rcpp::wrap(c_theta_in_all_matrix(x, list));
    return rcpp_result_gen;
END_RCPP
}
// c_intersect_intervals
Rcpp::NumericMatrix c_intersect_intervals(const Rcpp::List& list);
RcppExport SEXP _selectiveModel_c_intersect_intervals(SEXP listSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type list(listSEXP);
    rcpp_result_gen = Rcpp::wrap(c_intersect_intervals(list));
    return rcpp_result_gen;
END_RCPP
}
// c_intersect_circle_tester
Rcpp::NumericMatrix c_intersect_circle_tester(Rcpp::NumericVector a, Rcpp::NumericVector b, Rcpp::NumericVector center, double radius);
RcppExport SEXP _selectiveModel_c_intersect_circle_tester(SEXP aSEXP, SEXP bSEXP, SEXP centerSEXP, SEXP radiusSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type b(bSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type center(centerSEXP);
    Rcpp::traits::input_parameter< double >::type radius(radiusSEXP);
    rcpp_result_gen = Rcpp::wrap(c_intersect_circle_tester(a, b, center, radius));
    return rcpp_result_gen;
END_RCPP
}
// c_euclidean_to_radian_tester
double c_euclidean_to_radian_tester(Rcpp::NumericVector center, double radius, Rcpp::NumericVector point);
RcppExport SEXP _selectiveModel_c_euclidean_to_radian_tester(SEXP centerSEXP, SEXP radiusSEXP, SEXP pointSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type center(centerSEXP);
    Rcpp::traits::input_parameter< double >::type radius(radiusSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type point(pointSEXP);
    rcpp_result_gen = Rcpp::wrap(c_euclidean_to_radian_tester(center, radius, point));
    return rcpp_result_gen;
END_RCPP
}
// c_gibbs_step
void c_gibbs_step(NumericVector& state, const NumericVector& direction, NumericVector& U, const NumericVector& alpha);
RcppExport SEXP _selectiveModel_c_gibbs_step(SEXP stateSEXP, SEXP directionSEXP, SEXP USEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type state(stateSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type direction(directionSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type U(USEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type alpha(alphaSEXP);
    c_gibbs_step(state, direction, U, alpha);
    return R_NilValue;
END_RCPP
}
// c_sample_truncnorm_white
NumericMatrix c_sample_truncnorm_white(NumericVector& state, NumericVector& U, const NumericMatrix& directions, const NumericMatrix& alphas, const int& burnin, const int& ndraw);
RcppExport SEXP _selectiveModel_c_sample_truncnorm_white(SEXP stateSEXP, SEXP USEXP, SEXP directionsSEXP, SEXP alphasSEXP, SEXP burninSEXP, SEXP ndrawSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type state(stateSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type U(USEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type directions(directionsSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type alphas(alphasSEXP);
    Rcpp::traits::input_parameter< const int& >::type burnin(burninSEXP);
    Rcpp::traits::input_parameter< const int& >::type ndraw(ndrawSEXP);
    rcpp_result_gen = Rcpp::wrap(c_sample_truncnorm_white(state, U, directions, alphas, burnin, ndraw));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP _rcpp_module_boot_module();

static const R_CallMethodDef CallEntries[] = {
    {"_selectiveModel_c_l2norm", (DL_FUNC) &_selectiveModel_c_l2norm, 1},
    {"_selectiveModel_c_quadratic", (DL_FUNC) &_selectiveModel_c_quadratic, 3},
    {"_selectiveModel_c_unique_sort_native", (DL_FUNC) &_selectiveModel_c_unique_sort_native, 1},
    {"_selectiveModel_c_construct_midpoints", (DL_FUNC) &_selectiveModel_c_construct_midpoints, 1},
    {"_selectiveModel_c_which_native", (DL_FUNC) &_selectiveModel_c_which_native, 1},
    {"_selectiveModel_c_consecutive_true", (DL_FUNC) &_selectiveModel_c_consecutive_true, 1},
    {"_selectiveModel_c_unlist_native", (DL_FUNC) &_selectiveModel_c_unlist_native, 1},
    {"_selectiveModel_c_theta_in_matrix", (DL_FUNC) &_selectiveModel_c_theta_in_matrix, 2},
    {"_selectiveModel_c_theta_in_all_matrix", (DL_FUNC) &_selectiveModel_c_theta_in_all_matrix, 2},
    {"_selectiveModel_c_intersect_intervals", (DL_FUNC) &_selectiveModel_c_intersect_intervals, 1},
    {"_selectiveModel_c_intersect_circle_tester", (DL_FUNC) &_selectiveModel_c_intersect_circle_tester, 4},
    {"_selectiveModel_c_euclidean_to_radian_tester", (DL_FUNC) &_selectiveModel_c_euclidean_to_radian_tester, 3},
    {"_selectiveModel_c_gibbs_step", (DL_FUNC) &_selectiveModel_c_gibbs_step, 4},
    {"_selectiveModel_c_sample_truncnorm_white", (DL_FUNC) &_selectiveModel_c_sample_truncnorm_white, 6},
    {"_rcpp_module_boot_module", (DL_FUNC) &_rcpp_module_boot_module, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_selectiveModel(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
