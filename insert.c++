#include <iostream>
using namespace std;

int main(){
int i;
int scores[]={52, 78, 75, 68, 88, 63, 75, 90,78};
int item =10;
int k =3;
int len =9;
int j = len -1;

while(j>=k){
	scores[j+1] = scores[j]; 
	j=j-1;
}

scores[k] = item ;

for(i=0; i<len+1; i++){
	cout << scores[i] << endl;
}
return 0;
}


// #include <iostream>
// #include <cmath>
// using namespace std;

// int main(){
//     int i;
//     int marks[]={25,24,78,7,4,};
//      marks[3] = 9;
 
//  for(i=0;i<=marks.length;i++){

//     cout<<"Enter the value you want to store at the nth position";
//     cin>>marks[2];

//     cout<<"Enter the value you want to store at the last position";
//     cin>>marks[i-1];

//     cout<< marks[0];
//     cout<<marks[i-1];

//  }

// }