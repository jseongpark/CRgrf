file_name <- "MultiRegressionForestBindings.cpp"
default_dir = "C:/grf"

run <- function(dir = default_dir) {
	source(paste0(dir, "/input_utilities.R"))
	source(paste0(dir, "/multi_regression_forest.R"))
	library(Rcpp)
	sourceCpp(paste0(dir, "/", file_name))
}

execute <- function(dir = default_dir) {
	sourceCpp(paste0(dir, "/", file_name))
}

run()