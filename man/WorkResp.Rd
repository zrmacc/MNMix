% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/03_Expectations.R
\name{WorkResp}
\alias{WorkResp}
\title{Working Response Vectors}
\usage{
WorkResp(data_incomp, mean, cov, gamma = NULL)
}
\arguments{
\item{data_incomp}{Incomplete observations.}

\item{mean}{Numeric mean.}

\item{cov}{Numeric covariance.}

\item{gamma}{Numeric vector of responsibilities.}
}
\value{
Numeric vector, the responsibility-weighted cumulative working
  response vector.
}
\description{
Calculate the working response vectors.
}
