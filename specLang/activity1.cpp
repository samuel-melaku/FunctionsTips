#include <iostream>
#include <cmath>
using namespace std;

int StepsToCalories(int numSteps) {
   float stepsPerMinute = 70.0;
   float calPerMinuteWalking = 3.5;
   float minutesTotal;
   float caloriesTotal;
   
   minutesTotal = numSteps / stepsPerMinute;
   caloriesTotal = minutesTotal * calPerMinuteWalking;
   return caloriesTotal;
}
   
int StepsToMiles(int numSteps) {
   float feetPerStep = 2.5;
   float feetPerMile = 5280;
   float milesTotal;
   
   milesTotal = numSteps * feetPerStep * (1.0 / feetPerMile);
   return milesTotal;
}
   
int main() {
   int stepsWalked;
   cout << "Enter a number: ";
   cin >> stepsWalked;
   
   cout << "Miles walked: ";
   cout << StepsToMiles(stepsWalked);
   cout << "\n";
   cout << "Calories ";
   cout << StepsToCalories(stepsWalked);
   cout << "\n";
   return 0;
}