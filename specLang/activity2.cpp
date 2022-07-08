#include <iostream>
#include <cmath>
using namespace std;

int main() {
int stepsWalked;
float feetPerStep = 2.5;
int feetPerMile = 5280;
float stepsPerMinute = 70.0;
float calPerMinuteWalking;
float minutesTotal;
float caloriesTotal;
float milesWalked;

cout << "Enter a number: ";
cin >> stepsWalked;
milesWalked = stepsWalked * feetPerStep * (1.0 / feetPerMile);

cout << "Miles walked ";
cout << milesWalked;
cout << "\n";
minutesTotal = stepsWalked / stepsPerMinute;
caloriesTotal = minutesTotal * calPerMinuteWalking;

cout << "Calories: ";
cout << caloriesTotal;
cout << "\n";
}