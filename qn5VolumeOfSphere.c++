#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float PI = 3.14159;
    int radius;
    float volume;

    cout<<"Enter the radius of the circle: ";
    cin>>radius;

    volume = 4/3*PI*pow(radius,2);

    cout<<"The volume of sphere is: "<<volume<<"\n";

}