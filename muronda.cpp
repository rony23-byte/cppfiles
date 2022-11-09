#include <iostream>
using namespace std;
 
int main()
{
   int quarters, dimes, nickels = 0;
   float amount = 0;
   cout << "\nEnter number of quarters:";
   cin >> quarters;
   cout << "\nEnter number of dimes:";
   cin >> dimes;
   cout << "\nEnter number of nickels:";
   cin >> nickels;
   amount = (quarters * .25) + (dimes * .1) + (nickels * .05);
   cout << "\nTotal amount of change $" << amount;
   return 0;
}