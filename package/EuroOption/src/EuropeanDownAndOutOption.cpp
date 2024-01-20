#include<iostream>
#include<cmath>
#include"getOneGaussianByBoxMueller.h"
#include"EuropeanDownAndOutOption.h"

//definition of constructor
EuropeanDownAndOutOption::EuropeanDownAndOutOption(
  int nInt_,
  double strike_,
  double spot_,
  double vol_,
  double r_,
  double expiry_,
  double barrier_){
  nInt = nInt_;
  strike = strike_;
  spot = spot_;
  vol = vol_;
  r = r_;
  expiry = expiry_;
  barrier = barrier_;
  generatePath();
}


void EuropeanDownAndOutOption::generatePath() {
  double thisDrift = (r * expiry - 0.5 * vol * vol * expiry) / double(nInt);
  double cumShocks = 0;
  thisPath.clear();

  for(int i = 0; i < nInt; i++){
    cumShocks += (thisDrift + vol * sqrt(expiry / double(nInt)) * getOneGaussianByBoxMueller());
    thisPath.push_back(spot * exp(cumShocks));
  }
}


// Method to price the European down-and-out call option
double EuropeanDownAndOutOption::getPriceForEuropeanDownAndOutCall(int nReps) {
  double rollingSum = 0.0;

  for (int i = 0; i < nReps; i++) {
    generatePath();
    bool isKnockedOut = false;

    // Check the entire path for a breach of the barrier
    for (double price : thisPath) {
      if (price < barrier) {
        isKnockedOut = true;
        break;  // Stop checking further if the barrier is breached
      }
    }

    if (!isKnockedOut) {
      double finalPrice = thisPath.back();  // Get the final price if the option is not knocked out
      rollingSum += (finalPrice > strike) ? (finalPrice - strike) : 0;
    }
  }

  return exp(-r * expiry) * rollingSum / double(nReps);
}



