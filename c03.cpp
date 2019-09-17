#include<iostream>
using namespace std;
int main()
{
	int i,arr[5], odd=0, even = 0;
	cout<<"\nEnter the nos: ";
	for(i=0;i<5;i++)
	{
		cin>>arr[i];
		if(arr[i]%2 == 0)
			even++;
		else
			odd++;
	}
	cout<<"\nNo of odd nos: "<<odd;
	cout<<"\nNo of even nos: "<<even;
	return 0;
}
