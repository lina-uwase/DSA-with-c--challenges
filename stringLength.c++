#include <iostream>
using namespace std;
 
int main()
{
      
	char str[30];
	int i,length=0;

	
	cout<<"Enter the string:";
	cin>>str;
	

	for(i=0;str[i]!='\0';++i)
	{
	length++;
	}
	
	cout<<"Length of the string is:"<<length<<endl;
 
	return 0;
}