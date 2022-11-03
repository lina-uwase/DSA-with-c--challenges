#include <iostream>
using namespace std ;
int main(){
	int max ;
	int nums[] =  {14,3,6,7,41,56,11,25,9} ;
		int min  = nums[0];

	for(int i = 0 ; i < (sizeof(nums) / 4 ); i++ )
	{
		if(nums[i] > max)
			max = nums[i];
	}
	
	for(int i = 0 ; i < (sizeof(nums) / 4 ); i++ )
	{
		if(nums[i] < min)
			min = nums[i];
	}
	cout << "The minimum is " << min <<  " and  the maximum is " << max  << endl ;
	return 0 ;
}