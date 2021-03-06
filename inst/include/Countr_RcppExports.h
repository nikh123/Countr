// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#ifndef RCPP_Countr_RCPPEXPORTS_H_GEN_
#define RCPP_Countr_RCPPEXPORTS_H_GEN_

#include "Countr_types.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>

namespace Countr {

    using namespace Rcpp;

    namespace {
        void validateSignature(const char* sig) {
            Rcpp::Function require = Rcpp::Environment::base_env()["require"];
            require("Countr", Rcpp::Named("quietly") = true);
            typedef int(*Ptr_validate)(const char*);
            static Ptr_validate p_validate = (Ptr_validate)
                R_GetCCallable("Countr", "_Countr_RcppExport_validate");
            if (!p_validate(sig)) {
                throw Rcpp::function_not_exported(
                    "C++ function with signature '" + std::string(sig) + "' not found in Countr");
            }
        }
    }

    inline arma::vec dWeibullgammaCount_mat(arma::Col<unsigned> x, double shape, double r, double alpha, double time = 1.0, bool logFlag = false, unsigned jmax = 100) {
        typedef SEXP(*Ptr_dWeibullgammaCount_mat)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_dWeibullgammaCount_mat p_dWeibullgammaCount_mat = NULL;
        if (p_dWeibullgammaCount_mat == NULL) {
            validateSignature("arma::vec(*dWeibullgammaCount_mat)(arma::Col<unsigned>,double,double,double,double,bool,unsigned)");
            p_dWeibullgammaCount_mat = (Ptr_dWeibullgammaCount_mat)R_GetCCallable("Countr", "_Countr_dWeibullgammaCount_mat");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_dWeibullgammaCount_mat(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(shape)), Shield<SEXP>(Rcpp::wrap(r)), Shield<SEXP>(Rcpp::wrap(alpha)), Shield<SEXP>(Rcpp::wrap(time)), Shield<SEXP>(Rcpp::wrap(logFlag)), Shield<SEXP>(Rcpp::wrap(jmax)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::vec >(rcpp_result_gen);
    }

    inline arma::vec dWeibullgammaCount_mat_vec(arma::Col<unsigned> x, arma::vec shape, double r, double alpha, double time = 1.0, bool logFlag = false, unsigned jmax = 100) {
        typedef SEXP(*Ptr_dWeibullgammaCount_mat_vec)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_dWeibullgammaCount_mat_vec p_dWeibullgammaCount_mat_vec = NULL;
        if (p_dWeibullgammaCount_mat_vec == NULL) {
            validateSignature("arma::vec(*dWeibullgammaCount_mat_vec)(arma::Col<unsigned>,arma::vec,double,double,double,bool,unsigned)");
            p_dWeibullgammaCount_mat_vec = (Ptr_dWeibullgammaCount_mat_vec)R_GetCCallable("Countr", "_Countr_dWeibullgammaCount_mat_vec");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_dWeibullgammaCount_mat_vec(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(shape)), Shield<SEXP>(Rcpp::wrap(r)), Shield<SEXP>(Rcpp::wrap(alpha)), Shield<SEXP>(Rcpp::wrap(time)), Shield<SEXP>(Rcpp::wrap(logFlag)), Shield<SEXP>(Rcpp::wrap(jmax)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::vec >(rcpp_result_gen);
    }

    inline arma::vec dWeibullgammaCount_mat_Covariates(arma::Col<unsigned> x, double cc, double r, double alpha, arma::mat Xcovar, arma::vec beta, double t = 1.0, bool logFlag = false, unsigned jmax = 100) {
        typedef SEXP(*Ptr_dWeibullgammaCount_mat_Covariates)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_dWeibullgammaCount_mat_Covariates p_dWeibullgammaCount_mat_Covariates = NULL;
        if (p_dWeibullgammaCount_mat_Covariates == NULL) {
            validateSignature("arma::vec(*dWeibullgammaCount_mat_Covariates)(arma::Col<unsigned>,double,double,double,arma::mat,arma::vec,double,bool,unsigned)");
            p_dWeibullgammaCount_mat_Covariates = (Ptr_dWeibullgammaCount_mat_Covariates)R_GetCCallable("Countr", "_Countr_dWeibullgammaCount_mat_Covariates");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_dWeibullgammaCount_mat_Covariates(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(cc)), Shield<SEXP>(Rcpp::wrap(r)), Shield<SEXP>(Rcpp::wrap(alpha)), Shield<SEXP>(Rcpp::wrap(Xcovar)), Shield<SEXP>(Rcpp::wrap(beta)), Shield<SEXP>(Rcpp::wrap(t)), Shield<SEXP>(Rcpp::wrap(logFlag)), Shield<SEXP>(Rcpp::wrap(jmax)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::vec >(rcpp_result_gen);
    }

    inline arma::vec dWeibullgammaCount_mat_Covariates_vec(arma::Col<unsigned> x, arma::vec cc, double r, double alpha, arma::mat Xcovar, arma::vec beta, double t = 1.0, bool logFlag = false, unsigned jmax = 100) {
        typedef SEXP(*Ptr_dWeibullgammaCount_mat_Covariates_vec)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_dWeibullgammaCount_mat_Covariates_vec p_dWeibullgammaCount_mat_Covariates_vec = NULL;
        if (p_dWeibullgammaCount_mat_Covariates_vec == NULL) {
            validateSignature("arma::vec(*dWeibullgammaCount_mat_Covariates_vec)(arma::Col<unsigned>,arma::vec,double,double,arma::mat,arma::vec,double,bool,unsigned)");
            p_dWeibullgammaCount_mat_Covariates_vec = (Ptr_dWeibullgammaCount_mat_Covariates_vec)R_GetCCallable("Countr", "_Countr_dWeibullgammaCount_mat_Covariates_vec");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_dWeibullgammaCount_mat_Covariates_vec(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(cc)), Shield<SEXP>(Rcpp::wrap(r)), Shield<SEXP>(Rcpp::wrap(alpha)), Shield<SEXP>(Rcpp::wrap(Xcovar)), Shield<SEXP>(Rcpp::wrap(beta)), Shield<SEXP>(Rcpp::wrap(t)), Shield<SEXP>(Rcpp::wrap(logFlag)), Shield<SEXP>(Rcpp::wrap(jmax)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::vec >(rcpp_result_gen);
    }

    inline arma::vec dWeibullgammaCount_acc(arma::Col<unsigned> x, double shape, double r, double alpha, double time = 1.0, bool logFlag = false, unsigned jmax = 100, int nmax = 300, double eps = 1e-10, bool printa = false) {
        typedef SEXP(*Ptr_dWeibullgammaCount_acc)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_dWeibullgammaCount_acc p_dWeibullgammaCount_acc = NULL;
        if (p_dWeibullgammaCount_acc == NULL) {
            validateSignature("arma::vec(*dWeibullgammaCount_acc)(arma::Col<unsigned>,double,double,double,double,bool,unsigned,int,double,bool)");
            p_dWeibullgammaCount_acc = (Ptr_dWeibullgammaCount_acc)R_GetCCallable("Countr", "_Countr_dWeibullgammaCount_acc");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_dWeibullgammaCount_acc(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(shape)), Shield<SEXP>(Rcpp::wrap(r)), Shield<SEXP>(Rcpp::wrap(alpha)), Shield<SEXP>(Rcpp::wrap(time)), Shield<SEXP>(Rcpp::wrap(logFlag)), Shield<SEXP>(Rcpp::wrap(jmax)), Shield<SEXP>(Rcpp::wrap(nmax)), Shield<SEXP>(Rcpp::wrap(eps)), Shield<SEXP>(Rcpp::wrap(printa)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::vec >(rcpp_result_gen);
    }

    inline arma::vec dWeibullgammaCount_acc_vec(arma::Col<unsigned> x, arma::vec shape, double r, double alpha, double time = 1.0, bool logFlag = false, unsigned jmax = 100, int nmax = 300, double eps = 1e-10, bool printa = false) {
        typedef SEXP(*Ptr_dWeibullgammaCount_acc_vec)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_dWeibullgammaCount_acc_vec p_dWeibullgammaCount_acc_vec = NULL;
        if (p_dWeibullgammaCount_acc_vec == NULL) {
            validateSignature("arma::vec(*dWeibullgammaCount_acc_vec)(arma::Col<unsigned>,arma::vec,double,double,double,bool,unsigned,int,double,bool)");
            p_dWeibullgammaCount_acc_vec = (Ptr_dWeibullgammaCount_acc_vec)R_GetCCallable("Countr", "_Countr_dWeibullgammaCount_acc_vec");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_dWeibullgammaCount_acc_vec(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(shape)), Shield<SEXP>(Rcpp::wrap(r)), Shield<SEXP>(Rcpp::wrap(alpha)), Shield<SEXP>(Rcpp::wrap(time)), Shield<SEXP>(Rcpp::wrap(logFlag)), Shield<SEXP>(Rcpp::wrap(jmax)), Shield<SEXP>(Rcpp::wrap(nmax)), Shield<SEXP>(Rcpp::wrap(eps)), Shield<SEXP>(Rcpp::wrap(printa)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::vec >(rcpp_result_gen);
    }

    inline arma::vec dWeibullgammaCount_acc_Covariates(arma::Col<unsigned> x, double cc, double r, double alpha, arma::mat Xcovar, arma::vec beta, double t = 1.0, bool logFlag = false, unsigned jmax = 100, int nmax = 300, double eps = 1e-10, bool printa = false) {
        typedef SEXP(*Ptr_dWeibullgammaCount_acc_Covariates)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_dWeibullgammaCount_acc_Covariates p_dWeibullgammaCount_acc_Covariates = NULL;
        if (p_dWeibullgammaCount_acc_Covariates == NULL) {
            validateSignature("arma::vec(*dWeibullgammaCount_acc_Covariates)(arma::Col<unsigned>,double,double,double,arma::mat,arma::vec,double,bool,unsigned,int,double,bool)");
            p_dWeibullgammaCount_acc_Covariates = (Ptr_dWeibullgammaCount_acc_Covariates)R_GetCCallable("Countr", "_Countr_dWeibullgammaCount_acc_Covariates");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_dWeibullgammaCount_acc_Covariates(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(cc)), Shield<SEXP>(Rcpp::wrap(r)), Shield<SEXP>(Rcpp::wrap(alpha)), Shield<SEXP>(Rcpp::wrap(Xcovar)), Shield<SEXP>(Rcpp::wrap(beta)), Shield<SEXP>(Rcpp::wrap(t)), Shield<SEXP>(Rcpp::wrap(logFlag)), Shield<SEXP>(Rcpp::wrap(jmax)), Shield<SEXP>(Rcpp::wrap(nmax)), Shield<SEXP>(Rcpp::wrap(eps)), Shield<SEXP>(Rcpp::wrap(printa)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::vec >(rcpp_result_gen);
    }

    inline arma::vec dWeibullgammaCount_acc_Covariates_vec(arma::Col<unsigned> x, arma::vec cc, double r, double alpha, arma::mat Xcovar, arma::vec beta, double t = 1.0, bool logFlag = false, unsigned jmax = 100, int nmax = 300, double eps = 1e-10, bool printa = false) {
        typedef SEXP(*Ptr_dWeibullgammaCount_acc_Covariates_vec)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_dWeibullgammaCount_acc_Covariates_vec p_dWeibullgammaCount_acc_Covariates_vec = NULL;
        if (p_dWeibullgammaCount_acc_Covariates_vec == NULL) {
            validateSignature("arma::vec(*dWeibullgammaCount_acc_Covariates_vec)(arma::Col<unsigned>,arma::vec,double,double,arma::mat,arma::vec,double,bool,unsigned,int,double,bool)");
            p_dWeibullgammaCount_acc_Covariates_vec = (Ptr_dWeibullgammaCount_acc_Covariates_vec)R_GetCCallable("Countr", "_Countr_dWeibullgammaCount_acc_Covariates_vec");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_dWeibullgammaCount_acc_Covariates_vec(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(cc)), Shield<SEXP>(Rcpp::wrap(r)), Shield<SEXP>(Rcpp::wrap(alpha)), Shield<SEXP>(Rcpp::wrap(Xcovar)), Shield<SEXP>(Rcpp::wrap(beta)), Shield<SEXP>(Rcpp::wrap(t)), Shield<SEXP>(Rcpp::wrap(logFlag)), Shield<SEXP>(Rcpp::wrap(jmax)), Shield<SEXP>(Rcpp::wrap(nmax)), Shield<SEXP>(Rcpp::wrap(eps)), Shield<SEXP>(Rcpp::wrap(printa)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::vec >(rcpp_result_gen);
    }

    inline arma::mat alphagen(double cc, unsigned jrow, unsigned ncol) {
        typedef SEXP(*Ptr_alphagen)(SEXP,SEXP,SEXP);
        static Ptr_alphagen p_alphagen = NULL;
        if (p_alphagen == NULL) {
            validateSignature("arma::mat(*alphagen)(double,unsigned,unsigned)");
            p_alphagen = (Ptr_alphagen)R_GetCCallable("Countr", "_Countr_alphagen");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_alphagen(Shield<SEXP>(Rcpp::wrap(cc)), Shield<SEXP>(Rcpp::wrap(jrow)), Shield<SEXP>(Rcpp::wrap(ncol)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::mat >(rcpp_result_gen);
    }

    inline arma::vec dWeibullCount_mat(arma::Col<unsigned> x, double shape, double scale, double time = 1.0, bool logFlag = false, unsigned jmax = 50) {
        typedef SEXP(*Ptr_dWeibullCount_mat)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_dWeibullCount_mat p_dWeibullCount_mat = NULL;
        if (p_dWeibullCount_mat == NULL) {
            validateSignature("arma::vec(*dWeibullCount_mat)(arma::Col<unsigned>,double,double,double,bool,unsigned)");
            p_dWeibullCount_mat = (Ptr_dWeibullCount_mat)R_GetCCallable("Countr", "_Countr_dWeibullCount_mat");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_dWeibullCount_mat(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(shape)), Shield<SEXP>(Rcpp::wrap(scale)), Shield<SEXP>(Rcpp::wrap(time)), Shield<SEXP>(Rcpp::wrap(logFlag)), Shield<SEXP>(Rcpp::wrap(jmax)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::vec >(rcpp_result_gen);
    }

    inline double dWeibullCount_mat_scalar(unsigned x, double shape, double scale, double time = 1.0, bool logFlag = false, unsigned jmax = 50) {
        typedef SEXP(*Ptr_dWeibullCount_mat_scalar)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_dWeibullCount_mat_scalar p_dWeibullCount_mat_scalar = NULL;
        if (p_dWeibullCount_mat_scalar == NULL) {
            validateSignature("double(*dWeibullCount_mat_scalar)(unsigned,double,double,double,bool,unsigned)");
            p_dWeibullCount_mat_scalar = (Ptr_dWeibullCount_mat_scalar)R_GetCCallable("Countr", "_Countr_dWeibullCount_mat_scalar");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_dWeibullCount_mat_scalar(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(shape)), Shield<SEXP>(Rcpp::wrap(scale)), Shield<SEXP>(Rcpp::wrap(time)), Shield<SEXP>(Rcpp::wrap(logFlag)), Shield<SEXP>(Rcpp::wrap(jmax)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline arma::vec dWeibullCount_mat_vec(arma::Col<unsigned> x, arma::vec shape, arma::vec scale, double time = 1.0, bool logFlag = false, unsigned jmax = 50) {
        typedef SEXP(*Ptr_dWeibullCount_mat_vec)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_dWeibullCount_mat_vec p_dWeibullCount_mat_vec = NULL;
        if (p_dWeibullCount_mat_vec == NULL) {
            validateSignature("arma::vec(*dWeibullCount_mat_vec)(arma::Col<unsigned>,arma::vec,arma::vec,double,bool,unsigned)");
            p_dWeibullCount_mat_vec = (Ptr_dWeibullCount_mat_vec)R_GetCCallable("Countr", "_Countr_dWeibullCount_mat_vec");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_dWeibullCount_mat_vec(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(shape)), Shield<SEXP>(Rcpp::wrap(scale)), Shield<SEXP>(Rcpp::wrap(time)), Shield<SEXP>(Rcpp::wrap(logFlag)), Shield<SEXP>(Rcpp::wrap(jmax)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::vec >(rcpp_result_gen);
    }

    inline arma::vec dWeibullCount_acc(arma::Col<unsigned> x, double shape, double scale, double time = 1.0, bool logFlag = false, unsigned jmax = 50, int nmax = 300, double eps = 1e-10, bool printa = false) {
        typedef SEXP(*Ptr_dWeibullCount_acc)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_dWeibullCount_acc p_dWeibullCount_acc = NULL;
        if (p_dWeibullCount_acc == NULL) {
            validateSignature("arma::vec(*dWeibullCount_acc)(arma::Col<unsigned>,double,double,double,bool,unsigned,int,double,bool)");
            p_dWeibullCount_acc = (Ptr_dWeibullCount_acc)R_GetCCallable("Countr", "_Countr_dWeibullCount_acc");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_dWeibullCount_acc(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(shape)), Shield<SEXP>(Rcpp::wrap(scale)), Shield<SEXP>(Rcpp::wrap(time)), Shield<SEXP>(Rcpp::wrap(logFlag)), Shield<SEXP>(Rcpp::wrap(jmax)), Shield<SEXP>(Rcpp::wrap(nmax)), Shield<SEXP>(Rcpp::wrap(eps)), Shield<SEXP>(Rcpp::wrap(printa)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::vec >(rcpp_result_gen);
    }

    inline arma::vec dWeibullCount_acc_vec(arma::Col<unsigned> x, arma::vec shape, arma::vec scale, double time = 1.0, bool logFlag = false, unsigned jmax = 50, int nmax = 300, double eps = 1e-10, bool printa = false) {
        typedef SEXP(*Ptr_dWeibullCount_acc_vec)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_dWeibullCount_acc_vec p_dWeibullCount_acc_vec = NULL;
        if (p_dWeibullCount_acc_vec == NULL) {
            validateSignature("arma::vec(*dWeibullCount_acc_vec)(arma::Col<unsigned>,arma::vec,arma::vec,double,bool,unsigned,int,double,bool)");
            p_dWeibullCount_acc_vec = (Ptr_dWeibullCount_acc_vec)R_GetCCallable("Countr", "_Countr_dWeibullCount_acc_vec");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_dWeibullCount_acc_vec(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(shape)), Shield<SEXP>(Rcpp::wrap(scale)), Shield<SEXP>(Rcpp::wrap(time)), Shield<SEXP>(Rcpp::wrap(logFlag)), Shield<SEXP>(Rcpp::wrap(jmax)), Shield<SEXP>(Rcpp::wrap(nmax)), Shield<SEXP>(Rcpp::wrap(eps)), Shield<SEXP>(Rcpp::wrap(printa)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::vec >(rcpp_result_gen);
    }

}

#endif // RCPP_Countr_RCPPEXPORTS_H_GEN_
