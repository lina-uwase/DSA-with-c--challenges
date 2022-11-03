
#include <bits/stdc++.h>
using namespace std;
  

bool isPrime(int n)
{
      
      if(n == 1 || n == 0) return false;
    
    
      for(int i = 2; i < n; i++)
      {
      
        if(n % i == 0) return false;
      }
     
      return true;
}
  
int main()
{
    int N = 100;
    int product;
  
      
      for(int i = 1; i <= N; i++)
      {
          
          if(isPrime(i)) 
          {
            product = i*i;

          }

    }
            cout<<"The product of prime numbers between 1 and 100 is: "<<product<<"\n";

  
    return 0;
}