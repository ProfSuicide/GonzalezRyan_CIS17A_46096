/* 
 * File:   main.cpp
 * Author: Professor
 *
 * Created on July 8, 2019, 11:31 AM
 */

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct weather{
    string month;
    int totalRain;
    int highTemp;
    int lowTemp;
    float avgTemp;
}; 

void getDat(struct weather []);
float calc_avgRain(struct weather []);
float calc_avgTemp(struct weather []);
int find_lowTemp(struct weather []);
int find_highTemp(struct weather []);
void printDat(struct weather [], float, float, int, int);

int main(){
    float avgRain=0.0;
    float avgTempyear=0.0;
    int high=0;
    int low=0;
    
    weather year[12];
    
    getDat(year);

    avgRain=calc_avgRain(year);
    avgTempyear=calc_avgTemp(year);
    low=find_lowTemp(year);
    high=find_highTemp(year);
    
    printDat(year,avgRain,avgTempyear,low,high);
    
    
	return 0;
}


void getDat(struct weather year[]){
    for(int i=0;i<12;i++){
        cin>>year[i].month>>year[i].totalRain>>year[i].lowTemp>>year[i].highTemp;
    }
}

float calc_avgRain(struct weather year[]){
    float temp=0.0;
    for(int i=0;i<12;i++){
        temp=temp+year[i].totalRain;
    }
    temp=temp/12;
    return temp;
}
float calc_avgTemp(struct weather year []){
    float temp=0.0;
    for(int i=0;i<12;i++){
        year[i].avgTemp=(year[i].lowTemp+year[i].highTemp)/2;
    }
    for(int i=0;i<12;i++){
        temp=temp+year[i].avgTemp;
    }
    temp=temp/12;
    return temp;
}

int find_lowTemp(struct weather year []){
    int min=year[0].lowTemp;
    int temp=0;
    for(int i=0;i<12;i++){
        if(min>year[i].lowTemp){
             min=year[i].lowTemp;
             temp=i;
    }
}
    return temp;
}

int find_highTemp(struct weather year []){
    int max=year[0].lowTemp;
    int temp=0;
    for(int i=0;i<12;i++){
        if(max<year[i].lowTemp){
             max=year[i].lowTemp;
             temp=i;
    }
}
    return temp;
}

void printDat(struct weather year [], float avgRain, float avgTempyear, int low, int high){
    
    cout << "Average Rainfall " << fixed << setprecision(1) << avgRain << " inches/month" << endl;
    cout << "Lowest  Temperature " << year[low].month << "  " << year[low].lowTemp << " Degrees Fahrenheit" << endl;
    cout << "Highest Temperature " << year[high].month << "  " << year[high].highTemp << " Degrees Fahrenheit" << endl;
    cout << "Average Temperature for the year " << fixed << setprecision(0) << avgTempyear << " Degrees Fahrenheit" << endl;
}