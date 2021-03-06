% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{sBCF_onefunc_parallel}
\alias{sBCF_onefunc_parallel}
\title{Parallel Safe-Bayesian Causal Forest}
\usage{
sBCF_onefunc_parallel(
  lambda_mu,
  lambda_tau,
  num_models,
  num_trees_mu,
  num_trees_tau,
  seed,
  ytrain,
  original_datamat,
  ztrain,
  pihat_train,
  beta_par,
  test_datamat,
  test_pihat,
  ncores,
  outsamppreds,
  nu,
  a_mu,
  a_tau,
  lambdaBCF,
  valid_trees,
  tree_prior,
  imp_sampler,
  alpha_BCF_mu,
  beta_BCF_mu,
  alpha_BCF_tau,
  beta_BCF_tau,
  include_pi2,
  fast_approx,
  PIT_propensity
)
}
\arguments{
\item{seed}{The seed for random number generation.}

\item{original_datamat}{The original test data. This matrix must have the same number of columns (variables) as the training data. Currently all variables must be continuous. The test data does not need to be transformed before being entered to this function.}

\item{beta_par}{The power to which the likelihood is to be raised. For BMA, set beta_par=1.}

\item{ncores}{The number of cores to be used in parallelization.}

\item{lambda}{A real number between 0 and 1 that determines the splitting probability in the prior (which is used as the importance sampler of tree models). Quadrianto and Ghahramani (2015) recommend a value less than 0.5 .}

\item{num_trees}{The number of trees to be sampled.}

\item{num_cats}{The number of possible values for the outcome variable.}

\item{y}{The training data vector of outcomes. This must be a vector of integers between 1 and num_cats.}

\item{alpha_parameters}{Vector of prior parameters.}
}
\value{
A matrix of probabilities with the number of rows equl to the number of test observations and the number of columns equal to the number of possible outcome categories.
}
\description{
A parallelized implementation of the Safe-Bayesian Random Forest described by Quadrianto and Ghahramani (2015)
}
