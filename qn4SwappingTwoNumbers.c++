#include <iostream>
using namespace std;

int main(){
    int a, b, swap; 

    cout<<"Enter the two numbers to swap: ";
    cin>>a>>b;

    cout<<"Before swap: "<<"\n";
    cout<<"a = "<<a<<","<<"b ="<<b;

    swap = a;
    a = b;
    b = swap;

    cout<<"\nAfter swapping"<<"\n";
    cout<<"a = "<<a<<","<<"b = "<<b<<"\n";

}