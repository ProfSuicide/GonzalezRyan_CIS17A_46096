/*Augment a 1-D array by 1 Element, place 0 in the first element and copy the rest from the original shifted by 1 index.

int *getData(int &);//Read the array

int *augment(const int *,int);//Augment and copy the original array

void prntAry(const int *,int);//Print the array
*/

#include <iostream>

using namespace std;

int *getData(int &);
int *augment(const int *,int);
void prntAry(const int *,int);


int main(){
    
    int *array=nullptr;
    int *augArray=nullptr;
    int size;
    
    array=getData(size);
    augArray=augment(array,size);
    prntAry(augArray,size);

    delete []array;
    delete []augArray;
    array=nullptr;
    augArray=nullptr;
    
    return 0;
}

int *getData(int &size){
    cin >> size;
    int *array=new int [size];
    for(int i=0; i<size; i++){
        cin>> array[i];
    }
    for(int i=0; i<size;i++){
        if(i==0){
        cout << array[i];
        }
        else{
            cout << " " <<array[i];
        }
       
    }
    cout<<"\n";
    return &size,array;
}

int *augment(const int *array,int size){
    int *augArray=new int [size+1];
    
    for(int i=0; i<size+1;i++){
        if(i==0){
            augArray[i]=0;
        }
        else{
        augArray[i]=array[i-1];
        }
    }
    return augArray;
}

void prntAry(const int *augArray,int size){
    
    for(int i=0;i<size+1;i++){
        if(i==0){
            cout << augArray[i];
        }
        else{
            cout<< " "<< augArray[i];
        }
    }
    
}