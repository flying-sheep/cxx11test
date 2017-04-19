#include <Rcpp.h>

// [[Rcpp::export]]
double normal_cdf(double x) {
	return std::erfc(-x / std::sqrt(2)) / 2;
}
