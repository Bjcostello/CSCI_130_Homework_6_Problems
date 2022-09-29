// Libraries
#include <cmath>
#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

// Functions
double powerGen(double distance, double flow);

// main
int main() {
  double distance = 14.0;
  double flow = 20.0;

  cout << powerGen(distance, flow) << " Watts" << endl;

  return 0;
}

// function definitions
double powerGen(double distance, double flow) {
  double P;
  P = (distance * flow * 9.81 *
       997.0); // 9.81 is gravitational constant, 997 is water density
  return P;
}
