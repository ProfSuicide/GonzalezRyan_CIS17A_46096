/*Write a program that uses a structure named MovieData to store the following information about a movie:

Title

Director

Year Released

Running Time (in minutes)

The program should read the number of movies, then create MovieData structure 
variables, store values in their members, and pass each one, in turn, to a 
function that displays the information about the movie in a clearly 
formatted manner. */


#include <iostream>
#include <string>
using namespace std;

struct movieData{
    string title;
    string director;
    int r_year;
    int length;
};

void printDat(int amount, struct movieData m[]){
    for(int i=0;i<amount;i++){
        cout<<"Title:     " << m[i].title << endl;
        cout<<"Director:  " << m[i].director << endl;
        cout<<"Year:      " << m[i].r_year << endl;
        cout<<"Length:    " << m[i].length << endl;
        if(i<amount-1){
        cout << "\n";
    }
    }
}

const int SIZE=80;

int main(){
    int amount;
    movieData movie[SIZE];
    cout<<"This program reviews structures"<< endl;
    cout<<"Input how many movies, the Title of the Movie, Director, Year Released, and the Running Time in (minutes)." << endl;
    cout<< "\n";
    cin>> amount;
    
    
    for(int i=0;i<amount;i++){
        cin.ignore();
        getline(cin,movie[i].title);
        getline(cin,movie[i].director);
        cin>>movie[i].r_year;
        cin>>movie[i].length;
    }
    printDat(amount, movie);
    
    
	return 0;
}
