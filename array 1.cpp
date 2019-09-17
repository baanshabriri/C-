#include<iostream>
using namespace std;
int main()
{
	int n,i,sum=0,arr[20];
	float mean=0.0;
	cout<<"Enter the no. of elements in the array: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"\nEnter "<<i<<"st element";
		cin>>arr[i];
		sum+=arr[i];
	}
	mean=sum/n;
	cout<<"\nSum is: "<<sum;
	cout<<"\nMean is: "<<mean;
	return 0;
} 
