#include <iostream>
#include <cmath>
using namespace std;

int ConvKilometersToMiles(float numKilometers) {
   float milesPerKm = 0.621371;
   float numMiles;
   numMiles = numKilometers * milesPerKm;
   return numMiles;
}
   
int main() {
   float distKm;
   float distMiles;
   cout << "Enter a number: ";
   cin >> distKm;
   distMiles = ConvKilometersToMiles(distKm);
   cout << "Miles driven: ";
   cout << distMiles;
}