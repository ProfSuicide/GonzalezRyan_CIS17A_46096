/*Calculate the Median by creating a dynamic float array 2 larger in size than the dynamic integer array.

If you don't know how to calculate the median, google it.

Output the results with 2 decimal places.

Create the following functions and use them, here are the prototypes

int *getData(int &);         //Return the array size and the array

void prntDat(int *,int);    //Print the integer array

float *median(int *,int);  //Fill the median Array with the Float array size, the median, and the integer array data

void prntMed(float *);     //Print the median Array
*/
#include <iostream>
#include <iomanip>

using namespace std;

int *getData(int &);
void prntDat(int *,int);
float *median(int *,int);
void prntMed(float *);


int main(){
    int *array=nullptr;
    int size;
    float *medAry=nullptr;
    
    array=getData(size);
    prntDat(array,size);
    medAry=median(array,size);
    prntMed(medAry);
    delete []array;
    delete []medAry;
    array=nullptr;
    medAry=nullptr;
    return 0;
}
int *getData(int &size){
    
    cin>>size;
    int *array=new int[size];
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    return &size,array;
}
void prntDat(int *array,int size){
    for(int i=0;i<size;i++){
        if(i==0){
            cout << array[i];
        }
        else{
        cout<< " " << array[i];
        }
    }
    cout<< "\n";
    
}
float *median(int *array,int size){
    int temp;
    float *medAry=new float [size+2];//copies "array" to the new "medAry"
    for(int i =0; i<size; i++){
        medAry[i+2]=array[i];   //Uses plus two to allow "medAry" to have room
                                //for the size of the array and the median of 
                                // the array
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<size-1;j++){
            if(array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    
    medAry[0]=size+2;
    if((size%2)==1){
        medAry[1]=array[(size)/2];
    }
    else{
       medAry[1]=(array[size/2]+array[(size/2)-1])/2.0; 
    }
    return medAry;
}
void prntMed(float *medAry){
    int total=medAry[0];
    
    for(int i=0;i<medAry[0];i++){
        if(i==0){
            cout << total;
        }
        else{
        cout << fixed;
        cout << setprecision(2);
        cout << " " << medAry[i];
        }
    }
}