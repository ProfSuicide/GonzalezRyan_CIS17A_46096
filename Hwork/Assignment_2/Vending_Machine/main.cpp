/* 
 * File:   main.cpp
 * Author: Professor
 *
 * Created on July 7, 2019, 2:37 PM
 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct beverage{
    string name;
    int amount;
    int price;
};
void printDat(int SIZE, struct beverage soda[]){
    for(int i=0;i<SIZE;i++){
        cout << fixed;
        cout << left << setw(11)<< soda[i].name; 
        cout << soda[i].price << "  ";
        cout << soda[i].amount << endl;
    }
    cout << "Quit\n";
}
void check(int &userCash, string userDrink, int &userChange,int &total,struct beverage soda[]){
    if(userDrink=="Cola"){
        userCash=userCash-soda[0].price;
        soda[0].amount=soda[0].amount-1;
        total=total+soda[0].price;
    }
    if(userDrink=="Root Beer"){
        userCash=userCash-soda[1].price;
        soda[1].amount=soda[1].amount-1;
        total=total+soda[1].price;
    }
    if(userDrink=="Lemon-Lime"){
        userCash=userCash-soda[2].price;
        soda[2].amount=soda[2].amount-1;
        total=total+soda[2].price;
    }
    if(userDrink=="Grape Soda"){
        userCash=userCash-soda[3].price;
        soda[3].amount=soda[3].amount-1;
        total=total+soda[3].price;
    }
    if(userDrink=="Cream Soda"){
        userCash=userCash-soda[4].price;
        soda[4].amount=soda[4].amount-1;
        total=total+soda[4].price;
    }
    if(userCash<0){
        while(userCash<0){
            cout << "Please insert more cash" << endl;
            cin >>userCash;
        }
    }
    userChange=userCash;
    cout << userChange<< endl;
    
}

void vend(int SIZE, struct beverage soda[]){
    string userDrink="no";
    int userCash=0;
    int userChange=0;
    int total=0;
    
      while(userDrink!="Quit"){
          
        getline(cin,userDrink);
        if(userDrink=="Quit"){
            break;
        }
        if(userDrink!="Cola" && userDrink!="Root Beer" && userDrink!="Lemon-Lime" && userDrink!="Gape Soda" && userDrink!="Cream Soda" && userDrink!="Quit"){
            while(userDrink!="Cola" && userDrink!="Root Beer" && userDrink!="Lemon-Lime" && userDrink!="Gape Soda" && userDrink!="Cream Soda" && userDrink!="Quit"){
                cout << "Please enter a valid beverage" << endl;
                printDat(SIZE,soda);
                cin.ignore();
                getline(cin,userDrink);
            }
        }
        cin>>userCash;
        if(userCash<0||userCash>100){
            while (userCash<0||userCash>100){
                cout << "Invalid amount of cash, please enter again." << endl;
                cin>>userCash;
            }
        }
        check(userCash, userDrink, userChange,total, soda);
        printDat(SIZE,soda);
        cin.ignore();
        
    }
    cout << total << endl;
}

const int SIZE=5;

int main(){
    
    
    
    int temp;
    beverage soda[SIZE];
    soda[0].name="Cola";
    soda[0].amount=20;
    soda[0].price=75;
    soda[1].name="Root Beer";
    soda[1].amount=20;
    soda[1].price=75;
    soda[2].name="Lemon-Lime";
    soda[2].amount=20;
    soda[2].price=75;
    soda[3].name="Grape Soda";
    soda[3].amount=20;
    soda[3].price=80;
    soda[4].name="Cream Soda";
    soda[4].amount=20;
    soda[4].price=80;
    printDat(SIZE,soda);
    vend(SIZE,soda);

    
	return 0;
}
