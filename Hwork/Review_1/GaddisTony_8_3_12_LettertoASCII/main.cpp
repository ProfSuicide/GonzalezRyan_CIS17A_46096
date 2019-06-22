/* 
 * File:   main.cpp
 * Author: Ryan Gonzalez
 *
 *
 */

#include <iostream>

using namespace std;


int main() {
    char letter;
    cout << "Please enter a letter : ";
    cin >> letter;
    cout << "Your letter in ASCII is : " << static_cast<int>(letter);
    return 0;
}

