/* 
 * File:   main.cpp
 * Author: Ryan Gonzalez
 * Description: This program will print out numbers 1-5
 */

#include <iostream>
using namespace std;
int main() {
    int values[5], count;
    for (count = 0; count < 5; count++){
        values[count]=count + 1;
    }
    for (count = 0; count < 5; count++){
        cout << values[count] << endl;
    }
    return 0;
}
