// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// wCov
SEXP wCov(const Eigen::Map<Eigen::MatrixXd> Y, const Eigen::Map<Eigen::RowVectorXd> m, const Eigen::Map<Eigen::VectorXd> w);
RcppExport SEXP _MNMix_wCov(SEXP YSEXP, SEXP mSEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::RowVectorXd> >::type m(mSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd> >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(wCov(Y, m, w));
    return rcpp_result_gen;
END_RCPP
}
// tr
SEXP tr(const Eigen::Map<Eigen::MatrixXd> A);
RcppExport SEXP _MNMix_tr(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(tr(A));
    return rcpp_result_gen;
END_RCPP
}
// fastMMp
SEXP fastMMp(const Eigen::Map<Eigen::MatrixXd> A, const Eigen::Map<Eigen::MatrixXd> B);
RcppExport SEXP _MNMix_fastMMp(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type A(ASEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(fastMMp(A, B));
    return rcpp_result_gen;
END_RCPP
}
// fastT
SEXP fastT(const Eigen::Map<Eigen::MatrixXd> A);
RcppExport SEXP _MNMix_fastT(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(fastT(A));
    return rcpp_result_gen;
END_RCPP
}
// fastIP
SEXP fastIP(const Eigen::Map<Eigen::MatrixXd> A, const Eigen::Map<Eigen::MatrixXd> B);
RcppExport SEXP _MNMix_fastIP(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type A(ASEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(fastIP(A, B));
    return rcpp_result_gen;
END_RCPP
}
// fastInv
SEXP fastInv(const Eigen::Map<Eigen::MatrixXd> A);
RcppExport SEXP _MNMix_fastInv(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(fastInv(A));
    return rcpp_result_gen;
END_RCPP
}
// fastDet
SEXP fastDet(const Eigen::Map<Eigen::MatrixXd> A);
RcppExport SEXP _MNMix_fastDet(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(fastDet(A));
    return rcpp_result_gen;
END_RCPP
}
// fastOP
SEXP fastOP(const Eigen::Map<Eigen::VectorXd> x, const Eigen::Map<Eigen::VectorXd> y);
RcppExport SEXP _MNMix_fastOP(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd> >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd> >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(fastOP(x, y));
    return rcpp_result_gen;
END_RCPP
}
// fastQF
SEXP fastQF(const Eigen::Map<Eigen::MatrixXd> X, const Eigen::Map<Eigen::MatrixXd> A);
RcppExport SEXP _MNMix_fastQF(SEXP XSEXP, SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type X(XSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(fastQF(X, A));
    return rcpp_result_gen;
END_RCPP
}
// SchurC
SEXP SchurC(const Eigen::Map<Eigen::MatrixXd> I11, const Eigen::Map<Eigen::MatrixXd> I22, const Eigen::Map<Eigen::MatrixXd> I12);
RcppExport SEXP _MNMix_SchurC(SEXP I11SEXP, SEXP I22SEXP, SEXP I12SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type I11(I11SEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type I22(I22SEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type I12(I12SEXP);
    rcpp_result_gen = Rcpp::wrap(SchurC(I11, I22, I12));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_MNMix_wCov", (DL_FUNC) &_MNMix_wCov, 3},
    {"_MNMix_tr", (DL_FUNC) &_MNMix_tr, 1},
    {"_MNMix_fastMMp", (DL_FUNC) &_MNMix_fastMMp, 2},
    {"_MNMix_fastT", (DL_FUNC) &_MNMix_fastT, 1},
    {"_MNMix_fastIP", (DL_FUNC) &_MNMix_fastIP, 2},
    {"_MNMix_fastInv", (DL_FUNC) &_MNMix_fastInv, 1},
    {"_MNMix_fastDet", (DL_FUNC) &_MNMix_fastDet, 1},
    {"_MNMix_fastOP", (DL_FUNC) &_MNMix_fastOP, 2},
    {"_MNMix_fastQF", (DL_FUNC) &_MNMix_fastQF, 2},
    {"_MNMix_SchurC", (DL_FUNC) &_MNMix_SchurC, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_MNMix(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
