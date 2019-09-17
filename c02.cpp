#include<iostream>
using namespace std;
int prime(int number)
{
	int i, count;
	for ( i = 2 ; i < number ; i++ )
	{
		if ( number % i == 0 )
			count++;
	}
	return count;
	
}
int main()
{
	int arr[10] ,i ,j;
	cout<<"\nEnter the nos one by one: ";
	for(i=0;i<10;i++)
	{
		cin>>arr[i];
		j = prime(arr[i]);
		if(j != 0)
		{
			arr[i] = arr[i] * arr[i];
		}	
		else
		{
			arr[i] = 0;
		}
		
	}
	for(i=0;i<10;i++)
	{
		if(arr[i] != 0)
		{
			cout<<"\n"<<arr[i]<<"\n";
		}
	}
	
	
	return 0;
}
