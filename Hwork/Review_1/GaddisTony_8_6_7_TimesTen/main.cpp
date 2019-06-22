/* 
 * File:   main.cpp
 * Author: Ryan Gonzalez
 *
 */

#include <iostream>
using namespace std;
int TimesTen(int);

int main() {
    int number;
    cout << "Please enter a number you wish to multiply by ten : ";
    cin >> number;
    cout << "This is your number times ten : " << TimesTen(number) << endl;
    return 0;
}
int TimesTen(int x){
    int ret;
    ret=x*10;
    return ret;
}
