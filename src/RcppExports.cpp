// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// cpptrans_cdf
NumericMatrix cpptrans_cdf(NumericMatrix originaldata);
RcppExport SEXP _safeBart_cpptrans_cdf(SEXP originaldataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type originaldata(originaldataSEXP);
    rcpp_result_gen = Rcpp::wrap(cpptrans_cdf(originaldata));
    return rcpp_result_gen;
END_RCPP
}
// cpptrans_cdf_test
NumericMatrix cpptrans_cdf_test(NumericMatrix originaldata, NumericMatrix testdata);
RcppExport SEXP _safeBart_cpptrans_cdf_test(SEXP originaldataSEXP, SEXP testdataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type originaldata(originaldataSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type testdata(testdataSEXP);
    rcpp_result_gen = Rcpp::wrap(cpptrans_cdf_test(originaldata, testdata));
    return rcpp_result_gen;
END_RCPP
}
// find_term_nodes
NumericVector find_term_nodes(NumericMatrix tree_table);
RcppExport SEXP _safeBart_find_term_nodes(SEXP tree_tableSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type tree_table(tree_tableSEXP);
    rcpp_result_gen = Rcpp::wrap(find_term_nodes(tree_table));
    return rcpp_result_gen;
END_RCPP
}
// get_treepreds
List get_treepreds(NumericVector original_y, int num_cats, NumericVector alpha_pars, NumericMatrix originaldata, NumericMatrix treetable);
RcppExport SEXP _safeBart_get_treepreds(SEXP original_ySEXP, SEXP num_catsSEXP, SEXP alpha_parsSEXP, SEXP originaldataSEXP, SEXP treetableSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type original_y(original_ySEXP);
    Rcpp::traits::input_parameter< int >::type num_cats(num_catsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type alpha_pars(alpha_parsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type originaldata(originaldataSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type treetable(treetableSEXP);
    rcpp_result_gen = Rcpp::wrap(get_treepreds(original_y, num_cats, alpha_pars, originaldata, treetable));
    return rcpp_result_gen;
END_RCPP
}
// get_treelist
List get_treelist(NumericVector original_y, int num_cats, NumericVector alpha_pars, double beta_pow, NumericMatrix originaldata, List treetable_list);
RcppExport SEXP _safeBart_get_treelist(SEXP original_ySEXP, SEXP num_catsSEXP, SEXP alpha_parsSEXP, SEXP beta_powSEXP, SEXP originaldataSEXP, SEXP treetable_listSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type original_y(original_ySEXP);
    Rcpp::traits::input_parameter< int >::type num_cats(num_catsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type alpha_pars(alpha_parsSEXP);
    Rcpp::traits::input_parameter< double >::type beta_pow(beta_powSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type originaldata(originaldataSEXP);
    Rcpp::traits::input_parameter< List >::type treetable_list(treetable_listSEXP);
    rcpp_result_gen = Rcpp::wrap(get_treelist(original_y, num_cats, alpha_pars, beta_pow, originaldata, treetable_list));
    return rcpp_result_gen;
END_RCPP
}
// get_test_probs
arma::mat get_test_probs(NumericVector weights, int num_cats, NumericMatrix testdata, NumericMatrix treetable);
RcppExport SEXP _safeBart_get_test_probs(SEXP weightsSEXP, SEXP num_catsSEXP, SEXP testdataSEXP, SEXP treetableSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< int >::type num_cats(num_catsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type testdata(testdataSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type treetable(treetableSEXP);
    rcpp_result_gen = Rcpp::wrap(get_test_probs(weights, num_cats, testdata, treetable));
    return rcpp_result_gen;
END_RCPP
}
// get_test_prob_overall
NumericMatrix get_test_prob_overall(NumericVector weights, int num_cats, NumericMatrix testdata, List treetable_list);
RcppExport SEXP _safeBart_get_test_prob_overall(SEXP weightsSEXP, SEXP num_catsSEXP, SEXP testdataSEXP, SEXP treetable_listSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< int >::type num_cats(num_catsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type testdata(testdataSEXP);
    Rcpp::traits::input_parameter< List >::type treetable_list(treetable_listSEXP);
    rcpp_result_gen = Rcpp::wrap(get_test_prob_overall(weights, num_cats, testdata, treetable_list));
    return rcpp_result_gen;
END_RCPP
}
// draw_trees
List draw_trees(double lambda, int num_trees, int seed, int num_split_vars, int num_cats);
RcppExport SEXP _safeBart_draw_trees(SEXP lambdaSEXP, SEXP num_treesSEXP, SEXP seedSEXP, SEXP num_split_varsSEXP, SEXP num_catsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< int >::type num_trees(num_treesSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< int >::type num_split_vars(num_split_varsSEXP);
    Rcpp::traits::input_parameter< int >::type num_cats(num_catsSEXP);
    rcpp_result_gen = Rcpp::wrap(draw_trees(lambda, num_trees, seed, num_split_vars, num_cats));
    return rcpp_result_gen;
END_RCPP
}
// sBayesRF
NumericMatrix sBayesRF(double lambda, int num_trees, int seed, int num_cats, NumericVector y, NumericMatrix original_datamat, NumericVector alpha_parameters, double beta_par, NumericMatrix test_datamat);
RcppExport SEXP _safeBart_sBayesRF(SEXP lambdaSEXP, SEXP num_treesSEXP, SEXP seedSEXP, SEXP num_catsSEXP, SEXP ySEXP, SEXP original_datamatSEXP, SEXP alpha_parametersSEXP, SEXP beta_parSEXP, SEXP test_datamatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< int >::type num_trees(num_treesSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< int >::type num_cats(num_catsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type original_datamat(original_datamatSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type alpha_parameters(alpha_parametersSEXP);
    Rcpp::traits::input_parameter< double >::type beta_par(beta_parSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type test_datamat(test_datamatSEXP);
    rcpp_result_gen = Rcpp::wrap(sBayesRF(lambda, num_trees, seed, num_cats, y, original_datamat, alpha_parameters, beta_par, test_datamat));
    return rcpp_result_gen;
END_RCPP
}
// sBayesRF_onefunc
NumericMatrix sBayesRF_onefunc(double lambda, int num_trees, int seed, int num_cats, NumericVector y, NumericMatrix original_datamat, NumericVector alpha_parameters, double beta_par, NumericMatrix test_datamat);
RcppExport SEXP _safeBart_sBayesRF_onefunc(SEXP lambdaSEXP, SEXP num_treesSEXP, SEXP seedSEXP, SEXP num_catsSEXP, SEXP ySEXP, SEXP original_datamatSEXP, SEXP alpha_parametersSEXP, SEXP beta_parSEXP, SEXP test_datamatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< int >::type num_trees(num_treesSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< int >::type num_cats(num_catsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type original_datamat(original_datamatSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type alpha_parameters(alpha_parametersSEXP);
    Rcpp::traits::input_parameter< double >::type beta_par(beta_parSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type test_datamat(test_datamatSEXP);
    rcpp_result_gen = Rcpp::wrap(sBayesRF_onefunc(lambda, num_trees, seed, num_cats, y, original_datamat, alpha_parameters, beta_par, test_datamat));
    return rcpp_result_gen;
END_RCPP
}
// sBayesRF_onefunc_arma
NumericMatrix sBayesRF_onefunc_arma(double lambda, int num_trees, int seed, int num_cats, NumericVector y, NumericMatrix original_datamat, NumericVector alpha_parameters, double beta_par, NumericMatrix test_datamat);
RcppExport SEXP _safeBart_sBayesRF_onefunc_arma(SEXP lambdaSEXP, SEXP num_treesSEXP, SEXP seedSEXP, SEXP num_catsSEXP, SEXP ySEXP, SEXP original_datamatSEXP, SEXP alpha_parametersSEXP, SEXP beta_parSEXP, SEXP test_datamatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< int >::type num_trees(num_treesSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< int >::type num_cats(num_catsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type original_datamat(original_datamatSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type alpha_parameters(alpha_parametersSEXP);
    Rcpp::traits::input_parameter< double >::type beta_par(beta_parSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type test_datamat(test_datamatSEXP);
    rcpp_result_gen = Rcpp::wrap(sBayesRF_onefunc_arma(lambda, num_trees, seed, num_cats, y, original_datamat, alpha_parameters, beta_par, test_datamat));
    return rcpp_result_gen;
END_RCPP
}
// sBART_onefunc_parallel
NumericMatrix sBART_onefunc_parallel(double lambda, int num_models, int num_trees, int seed, NumericVector ytrain, NumericMatrix original_datamat, double beta_par, NumericMatrix test_datamat, int ncores, int outsamppreds, double nu, double a, double lambdaBART);
RcppExport SEXP _safeBart_sBART_onefunc_parallel(SEXP lambdaSEXP, SEXP num_modelsSEXP, SEXP num_treesSEXP, SEXP seedSEXP, SEXP ytrainSEXP, SEXP original_datamatSEXP, SEXP beta_parSEXP, SEXP test_datamatSEXP, SEXP ncoresSEXP, SEXP outsamppredsSEXP, SEXP nuSEXP, SEXP aSEXP, SEXP lambdaBARTSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< int >::type num_models(num_modelsSEXP);
    Rcpp::traits::input_parameter< int >::type num_trees(num_treesSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ytrain(ytrainSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type original_datamat(original_datamatSEXP);
    Rcpp::traits::input_parameter< double >::type beta_par(beta_parSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type test_datamat(test_datamatSEXP);
    Rcpp::traits::input_parameter< int >::type ncores(ncoresSEXP);
    Rcpp::traits::input_parameter< int >::type outsamppreds(outsamppredsSEXP);
    Rcpp::traits::input_parameter< double >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type lambdaBART(lambdaBARTSEXP);
    rcpp_result_gen = Rcpp::wrap(sBART_onefunc_parallel(lambda, num_models, num_trees, seed, ytrain, original_datamat, beta_par, test_datamat, ncores, outsamppreds, nu, a, lambdaBART));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_safeBart_cpptrans_cdf", (DL_FUNC) &_safeBart_cpptrans_cdf, 1},
    {"_safeBart_cpptrans_cdf_test", (DL_FUNC) &_safeBart_cpptrans_cdf_test, 2},
    {"_safeBart_find_term_nodes", (DL_FUNC) &_safeBart_find_term_nodes, 1},
    {"_safeBart_get_treepreds", (DL_FUNC) &_safeBart_get_treepreds, 5},
    {"_safeBart_get_treelist", (DL_FUNC) &_safeBart_get_treelist, 6},
    {"_safeBart_get_test_probs", (DL_FUNC) &_safeBart_get_test_probs, 4},
    {"_safeBart_get_test_prob_overall", (DL_FUNC) &_safeBart_get_test_prob_overall, 4},
    {"_safeBart_draw_trees", (DL_FUNC) &_safeBart_draw_trees, 5},
    {"_safeBart_sBayesRF", (DL_FUNC) &_safeBart_sBayesRF, 9},
    {"_safeBart_sBayesRF_onefunc", (DL_FUNC) &_safeBart_sBayesRF_onefunc, 9},
    {"_safeBart_sBayesRF_onefunc_arma", (DL_FUNC) &_safeBart_sBayesRF_onefunc_arma, 9},
    {"_safeBart_sBART_onefunc_parallel", (DL_FUNC) &_safeBart_sBART_onefunc_parallel, 13},
    {NULL, NULL, 0}
};

RcppExport void R_init_safeBart(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}