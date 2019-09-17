#include<iostream>
using namespace std;
int main()
{
	int i,n,arr[20],large=-500;
	cout<<"Enter the number of elements in the array:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter element no. "<<i<<" : ";
		cin>>arr[i];
		if(arr[i]>large)
			large=arr[i];
	}
	cout<<"The largest number is: "<<large;
	return 0;
}
