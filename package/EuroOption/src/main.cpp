#include <Rcpp.h>
#include<vector>
#include<ctime>
#include<cstdlib>
#include"EuropeanDownAndOutOption.h"
#include"getVecMean.h"
#include"getVecStdDev.h"

using std::vector;
using std::cout;
using std::cin;
using namespace Rcpp;

// [[Rcpp::export]]
double getPriceForEuropeanDownAndOutCall(
    int nInt,
    double Strike,
    double Spot,
    double Vol,
    double Rfr,
    double Expiry,
    double Barrier,
    int nReps = 1000
){

  srand( time(NULL) );
  EuropeanDownAndOutOption myEuropean(nInt, Strike, Spot, Vol, Rfr, Expiry,Barrier);
  return myEuropean.getPriceForEuropeanDownAndOutCall(nReps);
}
