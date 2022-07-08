#include <iostream>
#include <cmath>
using namespace std;

void PrintPizzaVolume(float pizzaDiameter, float pizzaHeight) {
   float piVal = 3.14159265;
   float pizzaRadius;
   float pizzaArea;
   float pizzaVolume;
   
   pizzaRadius = pizzaDiameter / 2.0;
   pizzaArea = piVal * pizzaRadius * pizzaRadius;
   pizzaVolume = pizzaArea * pizzaHeight;
   cout << pizzaDiameter;
   cout << " x ";
   cout << pizzaHeight;
   cout << " inch pizza is ";
   cout << pizzaVolume;
   cout << "inches cube.\n";
}
   
int main() {
   PrintPizzaVolume(12.0, 0.3);
   PrintPizzaVolume(12.0, 0.8);
   PrintPizzaVolume(16.0, 0.8);
   return 0;
}