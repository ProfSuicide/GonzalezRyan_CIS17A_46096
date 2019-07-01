/*Given an array.

Create a parallel array that represents the successive sum of preceding members in the array.

Use the following prototypes

int *getData(int &);             //Return the array size and the array from the inputs

int *sumAry(const int *,int);//Return the array with successive sums

void prntAry(const int *,int);//Print the array*/

#include <iostream>

using namespace std;

int *getData(int &);
int *sumAry(const int *,int);
void prntAry(const int *,int);

int main(){
    int size;
    int *array=nullptr;
    int *augArray=nullptr;
    
    array=getData(size);
    augArray=sumAry(array, size);
    prntAry(augArray,size);
    
    delete [] array;
    delete [] augArray;
    array=nullptr;
    augArray=nullptr;
    return 0;
}

int *getData(int &size){
    cin>> size;
    int *array=new int [size];
    for(int i=0; i<size; i++){
        cin>> array[i];
    }
    return &size,array;
}
int *sumAry(const int *array,int size){
    
    int *augArray=new int[size];
 
    for(int i=0;i<size;i++){
        if(i==0){
            augArray[i]=array[i];
        }
        else{
        augArray[i]=augArray[i-1]+array[i];
        }
    }
    return augArray;
}
void prntAry(const int *augArray,int size){
    int *array=new int [size];
    
    for(int i=0;i<size;i++){
        if(i==0){
            array[i]=augArray[i];
            cout << array[i];
        }
        else{
        array[i]=augArray[i]-augArray[i-1];
        cout << " " << array[i];
        }
        
    }
    cout << "\n";
    for(int i=0;i<size;i++){
        if(i==0){
          cout << augArray[i];  
        }
        else{
        cout << " " << augArray[i];
        }
    }
}