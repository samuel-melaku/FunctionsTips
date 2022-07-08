#include <iostream>
#include <cmath>
using namespace std;

int EbayFee(float sellPrice) {
float feeTotal;

   // Base listing fee
   feeTotal = 0.50;
   
   if (sellPrice <= 50.00) {
      // $50.00 or lower
      feeTotal = feeTotal + (sellPrice * 0.13);
   }
   else if (sellPrice <= 1000.00) {
      // $50.01..$1000.00
      feeTotal = feeTotal + (50 * 0.13);
      feeTotal = feeTotal + ((sellPrice - 50) * 0.05);
   }
   else {
      // $1000.01 and higher
      feeTotal = feeTotal + (50 * 0.13);
      feeTotal = feeTotal + ((1000 - 50) * 0.005);
      feeTotal = feeTotal + ((sellPrice - 1000) * 0.02);
      return feeTotal;
   }
   return 0;
}
      
int main() {
   float sellingPrice;
   
   cout << "Enter a number: ";
   cin >> sellingPrice;
   
   cout << "eBay fee: $";
   cout << EbayFee(sellingPrice);
   return 0;
}