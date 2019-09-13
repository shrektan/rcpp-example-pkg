#include <Rcpp.h>

//' @export
// [[Rcpp::export]]
SEXP plus(Rcpp::NumericVector x, Rcpp::NumericVector y) {
  Rcpp::NumericVector out = x + y;
  return out;
}
