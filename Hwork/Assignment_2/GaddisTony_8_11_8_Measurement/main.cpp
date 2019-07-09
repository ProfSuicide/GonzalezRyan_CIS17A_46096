/* 

 */

#include <iostream>

using namespace std;

struct Measurements{
    int miles;
    long meters;
};

struct Destination{
    string city;
    Measurements distance;
    
};
        
int main() {
    Destination place;
    place.city=Tupelo;
    place.distance.miles=375;
    place.distance.meters=603375;
    
    
    return 0;
}

