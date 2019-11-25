// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/bnmr.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

// rtnormc
double rtnormc(double a, double b);
static SEXP _bnmr_rtnormc_try(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(rtnormc(a, b));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _bnmr_rtnormc(SEXP aSEXP, SEXP bSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_bnmr_rtnormc_try(aSEXP, bSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rtmvnormc
arma::vec rtmvnormc(arma::vec m, arma::mat V, arma::vec w, int n);
static SEXP _bnmr_rtmvnormc_try(SEXP mSEXP, SEXP VSEXP, SEXP wSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::vec >::type m(mSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type V(VSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type w(wSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(rtmvnormc(m, V, w, n));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _bnmr_rtmvnormc(SEXP mSEXP, SEXP VSEXP, SEXP wSEXP, SEXP nSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_bnmr_rtmvnormc_try(mSEXP, VSEXP, wSEXP, nSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// updatealpha
double updatealpha(double alpha, arma::vec nc, double alpha_a, double alpha_b, int M);
static SEXP _bnmr_updatealpha_try(SEXP alphaSEXP, SEXP ncSEXP, SEXP alpha_aSEXP, SEXP alpha_bSEXP, SEXP MSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type nc(ncSEXP);
    Rcpp::traits::input_parameter< double >::type alpha_a(alpha_aSEXP);
    Rcpp::traits::input_parameter< double >::type alpha_b(alpha_bSEXP);
    Rcpp::traits::input_parameter< int >::type M(MSEXP);
    rcpp_result_gen = Rcpp::wrap(updatealpha(alpha, nc, alpha_a, alpha_b, M));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _bnmr_updatealpha(SEXP alphaSEXP, SEXP ncSEXP, SEXP alpha_aSEXP, SEXP alpha_bSEXP, SEXP MSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_bnmr_updatealpha_try(alphaSEXP, ncSEXP, alpha_aSEXP, alpha_bSEXP, MSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// betatothetaandS
List betatothetaandS(arma::vec beta);
static SEXP _bnmr_betatothetaandS_try(SEXP betaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::vec >::type beta(betaSEXP);
    rcpp_result_gen = Rcpp::wrap(betatothetaandS(beta));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _bnmr_betatothetaandS(SEXP betaSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_bnmr_betatothetaandS_try(betaSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// updatebeta
double updatebeta(arma::vec y, arma::mat BA, arma::vec beta, arma::vec nc, arma::vec theta, int M, double pi_a, double pi_b, double alpha, double sig2inv, double phi2inv, double mu, int j, int n);
static SEXP _bnmr_updatebeta_try(SEXP ySEXP, SEXP BASEXP, SEXP betaSEXP, SEXP ncSEXP, SEXP thetaSEXP, SEXP MSEXP, SEXP pi_aSEXP, SEXP pi_bSEXP, SEXP alphaSEXP, SEXP sig2invSEXP, SEXP phi2invSEXP, SEXP muSEXP, SEXP jSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type BA(BASEXP);
    Rcpp::traits::input_parameter< arma::vec >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type nc(ncSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< int >::type M(MSEXP);
    Rcpp::traits::input_parameter< double >::type pi_a(pi_aSEXP);
    Rcpp::traits::input_parameter< double >::type pi_b(pi_bSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type sig2inv(sig2invSEXP);
    Rcpp::traits::input_parameter< double >::type phi2inv(phi2invSEXP);
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< int >::type j(jSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(updatebeta(y, BA, beta, nc, theta, M, pi_a, pi_b, alpha, sig2inv, phi2inv, mu, j, n));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _bnmr_updatebeta(SEXP ySEXP, SEXP BASEXP, SEXP betaSEXP, SEXP ncSEXP, SEXP thetaSEXP, SEXP MSEXP, SEXP pi_aSEXP, SEXP pi_bSEXP, SEXP alphaSEXP, SEXP sig2invSEXP, SEXP phi2invSEXP, SEXP muSEXP, SEXP jSEXP, SEXP nSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_bnmr_updatebeta_try(ySEXP, BASEXP, betaSEXP, ncSEXP, thetaSEXP, MSEXP, pi_aSEXP, pi_bSEXP, alphaSEXP, sig2invSEXP, phi2invSEXP, muSEXP, jSEXP, nSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// mcmc
List mcmc(arma::vec y, arma::mat BA, int M, double pi_a, double pi_b, double alpha_a, double alpha_b, int n, double mu0, double phi2inv, double intvarinv, int thin, int loops);
static SEXP _bnmr_mcmc_try(SEXP ySEXP, SEXP BASEXP, SEXP MSEXP, SEXP pi_aSEXP, SEXP pi_bSEXP, SEXP alpha_aSEXP, SEXP alpha_bSEXP, SEXP nSEXP, SEXP mu0SEXP, SEXP phi2invSEXP, SEXP intvarinvSEXP, SEXP thinSEXP, SEXP loopsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type BA(BASEXP);
    Rcpp::traits::input_parameter< int >::type M(MSEXP);
    Rcpp::traits::input_parameter< double >::type pi_a(pi_aSEXP);
    Rcpp::traits::input_parameter< double >::type pi_b(pi_bSEXP);
    Rcpp::traits::input_parameter< double >::type alpha_a(alpha_aSEXP);
    Rcpp::traits::input_parameter< double >::type alpha_b(alpha_bSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type mu0(mu0SEXP);
    Rcpp::traits::input_parameter< double >::type phi2inv(phi2invSEXP);
    Rcpp::traits::input_parameter< double >::type intvarinv(intvarinvSEXP);
    Rcpp::traits::input_parameter< int >::type thin(thinSEXP);
    Rcpp::traits::input_parameter< int >::type loops(loopsSEXP);
    rcpp_result_gen = Rcpp::wrap(mcmc(y, BA, M, pi_a, pi_b, alpha_a, alpha_b, n, mu0, phi2inv, intvarinv, thin, loops));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _bnmr_mcmc(SEXP ySEXP, SEXP BASEXP, SEXP MSEXP, SEXP pi_aSEXP, SEXP pi_bSEXP, SEXP alpha_aSEXP, SEXP alpha_bSEXP, SEXP nSEXP, SEXP mu0SEXP, SEXP phi2invSEXP, SEXP intvarinvSEXP, SEXP thinSEXP, SEXP loopsSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_bnmr_mcmc_try(ySEXP, BASEXP, MSEXP, pi_aSEXP, pi_bSEXP, alpha_aSEXP, alpha_bSEXP, nSEXP, mu0SEXP, phi2invSEXP, intvarinvSEXP, thinSEXP, loopsSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}

// validate (ensure exported C++ functions exist before calling them)
static int _bnmr_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("double(*rtnormc)(double,double)");
        signatures.insert("arma::vec(*rtmvnormc)(arma::vec,arma::mat,arma::vec,int)");
        signatures.insert("double(*updatealpha)(double,arma::vec,double,double,int)");
        signatures.insert("List(*betatothetaandS)(arma::vec)");
        signatures.insert("double(*updatebeta)(arma::vec,arma::mat,arma::vec,arma::vec,arma::vec,int,double,double,double,double,double,double,int,int)");
        signatures.insert("List(*mcmc)(arma::vec,arma::mat,int,double,double,double,double,int,double,double,double,int,int)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP _bnmr_RcppExport_registerCCallable() { 
    R_RegisterCCallable("bnmr", "_bnmr_rtnormc", (DL_FUNC)_bnmr_rtnormc_try);
    R_RegisterCCallable("bnmr", "_bnmr_rtmvnormc", (DL_FUNC)_bnmr_rtmvnormc_try);
    R_RegisterCCallable("bnmr", "_bnmr_updatealpha", (DL_FUNC)_bnmr_updatealpha_try);
    R_RegisterCCallable("bnmr", "_bnmr_betatothetaandS", (DL_FUNC)_bnmr_betatothetaandS_try);
    R_RegisterCCallable("bnmr", "_bnmr_updatebeta", (DL_FUNC)_bnmr_updatebeta_try);
    R_RegisterCCallable("bnmr", "_bnmr_mcmc", (DL_FUNC)_bnmr_mcmc_try);
    R_RegisterCCallable("bnmr", "_bnmr_RcppExport_validate", (DL_FUNC)_bnmr_RcppExport_validate);
    return R_NilValue;
}

static const R_CallMethodDef CallEntries[] = {
    {"_bnmr_rtnormc", (DL_FUNC) &_bnmr_rtnormc, 2},
    {"_bnmr_rtmvnormc", (DL_FUNC) &_bnmr_rtmvnormc, 4},
    {"_bnmr_updatealpha", (DL_FUNC) &_bnmr_updatealpha, 5},
    {"_bnmr_betatothetaandS", (DL_FUNC) &_bnmr_betatothetaandS, 1},
    {"_bnmr_updatebeta", (DL_FUNC) &_bnmr_updatebeta, 14},
    {"_bnmr_mcmc", (DL_FUNC) &_bnmr_mcmc, 13},
    {"_bnmr_RcppExport_registerCCallable", (DL_FUNC) &_bnmr_RcppExport_registerCCallable, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_bnmr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
