#include<iostream>
using namespace std;
void main()
{
	int n,i,arr[30],temp;
	int small=5000,small_pos=0;
	int large=-5000,large_pos=0;
	cout<<"Enter the number of elements: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"\nEnter "<<i<<" element: ";
		cin>>arr[i];
		if(arr[i]>large)
		{
			large=arr[i];
			large_pos=i;
		}
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]<small)
		{
			small=arr[i];
			small_pos=i;
		}
	}
	cout<<"\n before interchanging largest no: "<<large<<"\nposition of larget no.: "<<large_pos;
	cout<<"\n before interchanging smallest no: "<<small<<"\nposition of smallest no.:"<<small_pos;
	temp=arr[large_pos];
	arr[large_pos]=arr[small_pos];
	arr[small_pos]=temp;
	for(i=0;i<n;i++)
	{
		cout<<"\narrary ["<<i<<"]="<<arr[i];
	}
	return 0;
}
