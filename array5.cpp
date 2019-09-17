#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,nod,digits[20],i;
	cout<<"Enter the number of digits: ";
	cin>>nod;
	for(i=0;i<nod;i++)
	{
		cout<<"Enter digits";
		cin>>digits[i];
	}
	i=0;
	while(i<nod)
	{
		n=n+digits[i]*pow(10,1);
		i++;
	}
	cout<<"The number is: "<<n;
	return 0;
}
