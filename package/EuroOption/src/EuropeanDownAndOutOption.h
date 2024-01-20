#include<vector>

class EuropeanDownAndOutOption {
public:
  // Constructor
  EuropeanDownAndOutOption(
    int nInt_,
    double strike_,
    double spot_,
    double vol_,
    double r_,
    double expiry_,
    double barrier_
  );

  // Destructor
  ~EuropeanDownAndOutOption() {}

  // Method to price the European down-and-out call option
  //methods
  void generatePath();
  double getPriceForEuropeanDownAndOutCall(int nReps);
  double operator()(char char1, char char2, int nReps);
  double simulatePriceAtExpiryAndCheckBarrier();

  //members
  std::vector<double> thisPath;
  int nInt;
  double strike;
  double spot;
  double vol;
  double r;
  double expiry;
  double barrier;

};

