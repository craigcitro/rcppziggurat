// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppGSL.h>
#include <Rcpp.h>

using namespace Rcpp;

// zrnormMT
Rcpp::NumericVector zrnormMT(int n);
RcppExport SEXP RcppZiggurat_zrnormMT(SEXP nSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< int >::type n(nSEXP );
        Rcpp::NumericVector __result = zrnormMT(n);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// zsetseedMT
void zsetseedMT(int s);
RcppExport SEXP RcppZiggurat_zsetseedMT(SEXP sSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< int >::type s(sSEXP );
        zsetseedMT(s);
    }
    return R_NilValue;
END_RCPP
}
// zrnormLZLLV
Rcpp::NumericVector zrnormLZLLV(int n);
RcppExport SEXP RcppZiggurat_zrnormLZLLV(SEXP nSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< int >::type n(nSEXP );
        Rcpp::NumericVector __result = zrnormLZLLV(n);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// zsetseedLZLLV
void zsetseedLZLLV(int s);
RcppExport SEXP RcppZiggurat_zsetseedLZLLV(SEXP sSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< int >::type s(sSEXP );
        zsetseedLZLLV(s);
    }
    return R_NilValue;
END_RCPP
}
// zrnormV1
Rcpp::NumericVector zrnormV1(int n);
RcppExport SEXP RcppZiggurat_zrnormV1(SEXP nSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< int >::type n(nSEXP );
        Rcpp::NumericVector __result = zrnormV1(n);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// zrnormVecV1
Rcpp::NumericVector zrnormVecV1(Rcpp::NumericVector x);
RcppExport SEXP RcppZiggurat_zrnormVecV1(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP );
        Rcpp::NumericVector __result = zrnormVecV1(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// zrnormStlV1
std::vector<double> zrnormStlV1(int n);
RcppExport SEXP RcppZiggurat_zrnormStlV1(SEXP nSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< int >::type n(nSEXP );
        std::vector<double> __result = zrnormStlV1(n);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// zsetseedV1
void zsetseedV1(unsigned long int s);
RcppExport SEXP RcppZiggurat_zsetseedV1(SEXP sSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< unsigned long int >::type s(sSEXP );
        zsetseedV1(s);
    }
    return R_NilValue;
END_RCPP
}
// zgetseedV1
unsigned long int zgetseedV1();
RcppExport SEXP RcppZiggurat_zgetseedV1() {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        unsigned long int __result = zgetseedV1();
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// zrnorm
Rcpp::NumericVector zrnorm(int n);
RcppExport SEXP RcppZiggurat_zrnorm(SEXP nSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< int >::type n(nSEXP );
        Rcpp::NumericVector __result = zrnorm(n);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// zrnormVec
Rcpp::NumericVector zrnormVec(Rcpp::NumericVector x);
RcppExport SEXP RcppZiggurat_zrnormVec(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP );
        Rcpp::NumericVector __result = zrnormVec(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// zrnormStl
std::vector<double> zrnormStl(int n);
RcppExport SEXP RcppZiggurat_zrnormStl(SEXP nSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< int >::type n(nSEXP );
        std::vector<double> __result = zrnormStl(n);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// zsetseed
void zsetseed(unsigned long int s);
RcppExport SEXP RcppZiggurat_zsetseed(SEXP sSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< unsigned long int >::type s(sSEXP );
        zsetseed(s);
    }
    return R_NilValue;
END_RCPP
}
// zgetseed
unsigned long int zgetseed();
RcppExport SEXP RcppZiggurat_zgetseed() {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        unsigned long int __result = zgetseed();
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// zsetseedGSL
void zsetseedGSL(const uint32_t s);
RcppExport SEXP RcppZiggurat_zsetseedGSL(SEXP sSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const uint32_t >::type s(sSEXP );
        zsetseedGSL(s);
    }
    return R_NilValue;
END_RCPP
}
// zrnormGSL
Rcpp::NumericVector zrnormGSL(int n);
RcppExport SEXP RcppZiggurat_zrnormGSL(SEXP nSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< int >::type n(nSEXP );
        Rcpp::NumericVector __result = zrnormGSL(n);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// zrnormV1b
Rcpp::NumericVector zrnormV1b(int n);
RcppExport SEXP RcppZiggurat_zrnormV1b(SEXP nSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< int >::type n(nSEXP );
        Rcpp::NumericVector __result = zrnormV1b(n);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// zrnormQL
Rcpp::NumericVector zrnormQL(int n);
RcppExport SEXP RcppZiggurat_zrnormQL(SEXP nSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< int >::type n(nSEXP );
        Rcpp::NumericVector __result = zrnormQL(n);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// zsetseedQL
void zsetseedQL(unsigned long int s);
RcppExport SEXP RcppZiggurat_zsetseedQL(SEXP sSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< unsigned long int >::type s(sSEXP );
        zsetseedQL(s);
    }
    return R_NilValue;
END_RCPP
}
// zrnormGl
Rcpp::NumericVector zrnormGl(int n);
RcppExport SEXP RcppZiggurat_zrnormGl(SEXP nSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< int >::type n(nSEXP );
        Rcpp::NumericVector __result = zrnormGl(n);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// zsetseedGl
void zsetseedGl(unsigned long int s);
RcppExport SEXP RcppZiggurat_zsetseedGl(SEXP sSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< unsigned long int >::type s(sSEXP );
        zsetseedGl(s);
    }
    return R_NilValue;
END_RCPP
}
// zrnormR
Rcpp::NumericVector zrnormR(int n);
RcppExport SEXP RcppZiggurat_zrnormR(SEXP nSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< int >::type n(nSEXP );
        Rcpp::NumericVector __result = zrnormR(n);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// ziggbin
Rcpp::NumericMatrix ziggbin(int nbins, double ndraws, const std::string generator = "Ziggurat", const int seed = 42, int edge = 7, int res = 40);
RcppExport SEXP RcppZiggurat_ziggbin(SEXP nbinsSEXP, SEXP ndrawsSEXP, SEXP generatorSEXP, SEXP seedSEXP, SEXP edgeSEXP, SEXP resSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< int >::type nbins(nbinsSEXP );
        Rcpp::traits::input_parameter< double >::type ndraws(ndrawsSEXP );
        Rcpp::traits::input_parameter< const std::string >::type generator(generatorSEXP );
        Rcpp::traits::input_parameter< const int >::type seed(seedSEXP );
        Rcpp::traits::input_parameter< int >::type edge(edgeSEXP );
        Rcpp::traits::input_parameter< int >::type res(resSEXP );
        Rcpp::NumericMatrix __result = ziggbin(nbins, ndraws, generator, seed, edge, res);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// ziggsum
Rcpp::NumericVector ziggsum(int nbins, double ndraws, const std::string generator = "Ziggurat", const int seed = 42);
RcppExport SEXP RcppZiggurat_ziggsum(SEXP nbinsSEXP, SEXP ndrawsSEXP, SEXP generatorSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< int >::type nbins(nbinsSEXP );
        Rcpp::traits::input_parameter< double >::type ndraws(ndrawsSEXP );
        Rcpp::traits::input_parameter< const std::string >::type generator(generatorSEXP );
        Rcpp::traits::input_parameter< const int >::type seed(seedSEXP );
        Rcpp::NumericVector __result = ziggsum(nbins, ndraws, generator, seed);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// ziggtest
Rcpp::NumericVector ziggtest(int nbins, double ndraws, const std::string generator = "Ziggurat", const int seed = 42);
RcppExport SEXP RcppZiggurat_ziggtest(SEXP nbinsSEXP, SEXP ndrawsSEXP, SEXP generatorSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< int >::type nbins(nbinsSEXP );
        Rcpp::traits::input_parameter< double >::type ndraws(ndrawsSEXP );
        Rcpp::traits::input_parameter< const std::string >::type generator(generatorSEXP );
        Rcpp::traits::input_parameter< const int >::type seed(seedSEXP );
        Rcpp::NumericVector __result = ziggtest(nbins, ndraws, generator, seed);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
