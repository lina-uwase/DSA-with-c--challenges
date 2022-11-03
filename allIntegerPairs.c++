#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int i;
    int k;

	int hypotenuse,hypotenuseSquared;
	
	for(int i=1;i<100;i++){
		for(int k=1;k<100;k++){
			hypotenuseSquared=(pow(k,2)+pow(i,2));
			hypotenuse=sqrt(hypotenuseSquared);
			
			if((pow(hypotenuse,2)) == hypotenuseSquared){
				cout<<"("<<k<<", "<<k<<")"<<endl;
			}
		}
	}
}