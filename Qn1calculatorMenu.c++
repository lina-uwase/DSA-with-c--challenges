#include <iostream>
using namespace std;
#include <cmath>

int main(){
    int choice;
    int num1, num2;
    int result,sum,difference,product,quotient;
    double remainder;
    string permission;
    

   starting:
    cout <<"MENU\n";
    cout <<"\t1.ADD\n"<<"\t2.Subtract \n" <<"\t3.Multiply\n" <<"\t4.Divide\n" <<"\t5.Modulus\n";



    cout<<"Enter you're choice :";
    cin>>choice;


    

    cout<<"Enter you're two numbers :\n";
    cin>>num1>>num2;

    if(choice ==1){
        sum = num1+num2;
        cout <<"Result: "<<sum<<"\n";
    }
    else if(choice ==2){
       difference = num1-num2;
        cout <<"Result: "<<difference<<"\n";
    }
    else if(choice ==3){
         product = num1 * num2;
        cout <<"Result: "<<product<<"\n";
    }
    else if(choice == 4){
         quotient = num1/num2;
        cout <<"Result: "<<quotient<<"\n";
    }
    else if(choice ==5){
        remainder = num1%num2;
        cout <<"Result: "<<remainder<<"\n";
    }
    else{
        cout<<"Thank you for using this program!";
        
    }
    
    cout<<"continue? y\t";
    cin>>permission;

        if(permission == "y") goto starting;
}
