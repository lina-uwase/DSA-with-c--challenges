#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int i, sum;

    for(i=1;i<=100;i++){
        if(i%2 == 0){
            sum +=i;
            
        }
    }
    cout<<"The sum of all even numbers less than 100 is: "<<sum<<"\n";
}

