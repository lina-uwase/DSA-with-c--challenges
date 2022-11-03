#include <iostream>
#include <cmath>
using namespace std;

int minDistance(int arr[],int n,int x,int y){
    int i,j;    
    int min_distance ;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if((x==arr[i] && y==arr[j] || y==arr[i] && x==arr[j] && min_distance>abs(i-j))){
                min_distance = abs(i-j);
            }
        }
    }
    if(min_distance>n){
        return -1;
    }
    
    return min_distance;
}

int main(){

     int arr[] = { 3, 5, 4, 2, 6, 5, 6, 6, 5, 4, 8, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 8;
    int y = 2;
 
    cout << "Minimum distance between " << x << " and " << y
         << " is " << minDistance(arr, n, x, y) << endl;


}
