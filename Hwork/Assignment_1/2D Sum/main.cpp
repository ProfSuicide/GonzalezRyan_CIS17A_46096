/*Total the elements in a 2-D Array.  Create the following functions to perform this task.

int **getData(int &,int &);        //Return the 2-D array and its size.

void prntDat(const int* const *,int,int);//Print the 2-D Array

void destroy(int **,int,int);       //Deallocate memory

int sum(const int * const *, int,int);    //Return the Sum
 */

#include <iostream>

using namespace std;

int **getData(int &,int &); 
void prntDat(const int* const *,int,int);
void destroy(int **,int,int);
int sum(const int * const *, int,int);

int main(){
    int **array=nullptr;
    int sumAry;
    int row;
    int col;

    array=getData(row,col);
    prntDat(array, row,col);
    sumAry=sum(array,row,col);
    cout<<sumAry;
    destroy(array,row,col);
    
	return 0;
}
int **getData(int &row,int &col){
    
    cin>>row>>col;
    
    int **array=new int*[row];
    for(int i=0;i<row;i++){
        array[i]=new int[col];
    }
      for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
        cin>>array[i][j];
        }
    }
    
    return &row,&col,array;
}

void prntDat(const int* const *array,int row,int col){
    
    for(int i=0;i<row;i++){
        if(i>0){
            cout<<"\n";
        }
        for(int j=0;j<col;j++){
            if(j==col){
                cout<<array[i][j];
            }
            if(j==0){
            cout<<array[i][j];
            }
            else{
            cout << " " << array[i][j];
            }
        }
    }
    cout<<"\n";
}
void destroy(int **array,int row,int col){
    delete []array;
    array=nullptr;
}

int sum(const int * const *array, int row,int col){
    int sumAry=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sumAry=sumAry+array[i][j];
            
        }
        
    }
    
    return sumAry;
}
