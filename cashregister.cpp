#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double purchase;
    double received;
    double  change;

    cout << "Enter purchase amount: ";
    cin >> purchase;
    cout << "\n";
    cout << "Enter amount received: ";
    cin >> received;
    cout << "\n";

    change = received - purchase;
    cout << "Total Change: $" << change << endl;
    cout << "\n";

    int dollars = change/1;
    cout << "dollars " <<dollars<< endl;
    change = fmodf(change, 1) * 100;

    int quarters = change/25;
    cout << "quarters " <<quarters<< endl;
    if (quarters != 0){
        change -= quarters*25;
    }

    int dimes = change/10;
    cout << "dimes " <<dimes<< endl;
    if (dimes != 0){
        change = change - (dimes*10);
    }

    int nickels = abs(change/5);
    cout << "nickels " <<nickels<< endl;
    if (nickels != 0){
        change -= nickels*5;
    }

    int pennies = abs(change+0.5);
    cout << "pennies "<<pennies<<endl;
    if (pennies != 0){
        change -= pennies+0.5;
    }

}