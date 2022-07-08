#include <iostream>
#include <cmath>
using namespace std;

int CircleArea(float circleDiameter) {  
   float circleArea;
   float circleRadius;
   float piVal = 3.14159265;
   circleRadius = circleDiameter / 2.0;
   circleArea = piVal * circleRadius * circleRadius;
   return circleArea;
}
   
int main() {
   float pizzaDiameter1 = 12.0;
   float pizzaDiameter2 = 14.0;
   float totalPizzaArea;
   float circleArea1;
   float circleArea2;
   
   circleArea1 = CircleArea(pizzaDiameter1);
   circleArea2 = CircleArea(pizzaDiameter2);
   
   totalPizzaArea = circleArea1 + circleArea2;
   
   cout << "A 12 and 14 inch pizza has ";
   cout << totalPizzaArea;
   cout << " inches squared combined. ";
}
