#include<iostream>
using namespace std;
int main()
{
	int n,i,arr[250],small=5000,pos=-1;
	cout<<"Enter the no. of elements in the array: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"\nEnter "<<i<<"element: ";
		cin>>arr[i];
		if(arr[i]<small)
			small=arr[i];
			pos=i;
	}
	cout<<"\nThe smallest number is: "<<small;
	cout<<"\nPosition is :"<<pos;
	return 0;
}
