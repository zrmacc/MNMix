% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/07_Clustering.R
\name{ChooseK.summarize}
\alias{ChooseK.summarize}
\title{Summarize Results of Quality Metric Bootstrap.}
\usage{
ChooseK.summarize(k, boot_metrics, report)
}
\arguments{
\item{k}{Clusters.}

\item{boot_metrics}{Bootstrapped quality metrics.}

\item{report}{Report bootstrap results?}
}
\value{
Either a data.table reporting the means and standard errors
  of quality metrics, or NULL if too few fits succeded to calculate
  the standard errors.
}
\description{
Summarize Results of Quality Metric Bootstrap.
}
