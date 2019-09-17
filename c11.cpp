#include<iostream>
using namespace std;

int main()
{
	int arr[5],j,k,n,m;
	cout<<"\nEnter the array elements: ";
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	n=5;
	for(m=0;m<n-1;m++)
	{
		for(j=0;j<n-m-1;j++)
		{
			if(arr[j] > arr[j+1])
			{
				
				k = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = k;
		}
		}
	}
	for(m=0;m<5;m++)
	{
		cout<<arr[m]<<"\t";
	}
	return 0;
}
