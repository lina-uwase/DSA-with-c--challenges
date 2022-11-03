#include<iostream>
using namespace std;

void frequentNumbers(int numbers[], int size)
{
  int maxcount = 0;
  cout << "\nmost number occured: ";
  for (int i=0; i<size; i++)
  {
   int count=1;
   for (int j=i+1;j<size;j++)
       if (numbers[i]==numbers[j])
           count++;
   if (count>maxcount)
      maxcount = count;
  }

  for (int i=0;i<size;i++)
  {
   int count=1;
   for (int j=i+1;j<size;j++)
       if (numbers[i]==numbers[j])
           count++;
   if (count==maxcount)
       cout << numbers[i] << endl;
  }
 }
 
int main()
{
    int numbers[] = {4,2,3,2,4,7,4,4,3,2,8,8,8,8};
    int n = sizeof(numbers)/sizeof(numbers[0]);
    cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << numbers[i];
   frequentNumbers(numbers, n);
}