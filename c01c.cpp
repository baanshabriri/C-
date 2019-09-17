#include<iostream>
using namespace std;
int main()
{
	int n,i,j=1,k=2,l,m;
	cout<<"\nEnter the value of n: ";
	cin>>n;
	cout<<"\n1\t2\t";
	for(i=1;i<=n-2;i++)
	{
		l = j*k;
		j=k;
		k=l;
		cout<<l<<"\t";
	}
	return 0;
}
