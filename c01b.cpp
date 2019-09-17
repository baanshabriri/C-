#include<iostream>
using namespace std;
int main()
{
	int n,i,j=2,k=3,l,m;
	cout<<"\nEnter the value of n: ";
	cin>>n;
	cout<<"\n2\t3\t";
	for(i=1;i<=n-2;i++)
	{
		l = j*k;
		j=k;
		k=l;
		cout<<l<<"\t";
	}
	return 0;
}
