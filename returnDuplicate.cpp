#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int i;
    int maxCount;
    int mostFrequent;
    int numbers[]={4,2,3,4,2,3,4,2,4,3,4};
    int len = size(numbers);

    cout<< len;


    for(i=0;i<len;i++){
        int count = 0;
        for(int j=0;j<len;j++){
            count ++;
        }
        if(count>maxCount){
            // maxCount = count;
            mostFrequent = numbers[i];
        }

        return mostFrequent;
    }

    cout<<mostFrequent;

    


}