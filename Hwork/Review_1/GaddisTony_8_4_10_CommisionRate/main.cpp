/* 
 * File:   main.cpp
 * Author: Professor
 *
 * Created on June 21, 2019, 2:17 PM
 */

#include <iostream>

using namespace std;


int main() {
    int sales;
    double commissionRate;
    int bonus;
    cout << "Please enter the amount of sales : ";
    cin >> sales;
    if (sales>50000){
        commissionRate=.25;
        bonus=250;
        cout << "Your commission rate is " << commissionRate << " and earned a bonus of " << bonus << endl;
    }
    else {
        commissionRate=.15;
        cout << "Your commission rate is " << commissionRate << endl;
    }
    
    return 0;
}

