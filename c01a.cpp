#include<iostream>
using namespace std;
int main()
{
	int i,j,n,k=1;
	cout<<"\nEnter the value of n: ";
	cin>>n;
	cout<<"\n";
	for(i=1;i<=n;i=i+2)
	{
		for(j=1;j<=i;j++)
		{
			cout<<k;
		}
		cout<<"\t";
	}
	
}
