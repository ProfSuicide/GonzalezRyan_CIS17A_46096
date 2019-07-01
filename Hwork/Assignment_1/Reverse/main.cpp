/*Read in a dynamic array.

Output the reverse sorted dynamic array by first sorting from smallest to largest.

Use the following functional prototypes.

int *getData(int &);               //Fill the array

int *sort(const int *,int)         //Sort smallest to largest

int *reverse(const int *,int);  //Sort in reverse order

void prntDat(const int *,int); //Print the array*/

#include <iostream>

using namespace std;

int *getData(int &);
int *sort(const int *,int);
int *reverse(const int *,int);
void prntDat(const int *,int);

int main(){
    int *array=nullptr;
    int size;
    int *revArray=nullptr;
    
    array=getData(size);
    array=sort(array,size);
    revArray=reverse(array,size);
    prntDat(revArray,size);
    
    delete []array;
    delete []revArray;
    array=nullptr;
    revArray=nullptr;
    
    return 0;
}

int *getData(int &size){
    
    int *array=new int [size];
    
    cin>>size;
    
    for(int i=0; i<size; i++){
        cin>>array[i];
    }
    return &size, array;
}
int *sort(const int *array,int size){
    int temp;
    int *tArray=new int [size];
    
    for(int i=0;i<size;i++){
        tArray[i]=array[i];
    }
    
    for(int i=0;i<size;i++){
        for(int j=0;j<size-1;j++){
            if(tArray[j]>tArray[j+1]){
                temp=tArray[j];
                tArray[j]=tArray[j+1];
                tArray[j+1]=temp;
            }
        }
    }
    for(int i=0;i<size;i++){
        if(i==0){
            cout<<tArray[i];
        }
        else{
        cout<< " " <<tArray[i];
        }
    }
    cout << "\n";
    return tArray;
}
int *reverse(const int *array,int size){
    int *revArray=new int [size];
    for(int i=0; i<size; i++){
        revArray[i]=array[(size-1)-i];
    }
    return revArray;
}
void prntDat(const int *revArray,int size){
    for(int i=0; i<size; i++){
        if(i==0){
            cout<<revArray[i];
        }
        else{
        cout<< " " <<revArray[i];
        }
    }
}