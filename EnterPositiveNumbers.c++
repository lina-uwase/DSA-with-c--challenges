#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main(){
    int i;
    int numberOfPositiveNumbers;
    int numbers;
    int sum;
    float average;

    correct:
    cout <<"Enter number of postive numbers to get from the keyboard: ";
    cin >> numberOfPositiveNumbers;

    if(numberOfPositiveNumbers>0){
        for(i=1; i<=numberOfPositiveNumbers;i++){
            cout<< "Enter the value of numbers :";
            cin >> numbers; 
            if(numbers == 1){
                goto terminate;
            }
            sum += numbers;
            average = sum/numberOfPositiveNumbers;
        }
            terminate:
            cout<<"The sum is :"<<sum <<"\n";
            cout << "The average is:"<<average << "\n";
    }
    else{
        goto correct;
    }

 }