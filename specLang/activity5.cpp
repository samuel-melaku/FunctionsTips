#include <iostream>
#include <cmath>
using namespace std;

void PrintPizzaArea(float pizzaDiameter) {
   float piVal = 3.14159265;
   float pizzaRadius;
   float pizzaArea;
   pizzaRadius = pizzaDiameter / 2.0;
   pizzaArea = piVal * pizzaRadius * pizzaRadius;
   
   cout << pizzaDiameter;
   cout << " in. pizza is ";
   cout << pizzaArea;
   cout << " sq. in.\n";
}
   
int main() {
   PrintPizzaArea(6);
   return 0;
}