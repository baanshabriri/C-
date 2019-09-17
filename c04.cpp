#include <iostream>
using namespace std;
int main()
{
	int n,k,i,x,j;
	cout << "Enter a row number for Pascal's Triangle: ";
	cin >> n;
	for(i=1;i<=n;i++)
	{
			for(k=n;k>=i;k--)
				cout<<" ";
			for(j=1;j<i;j++)
				cout<<j;
			for(x=i;x>=1;x--)
				cout<<x;
			
			cout <<"\n";
	}
return 0;
}
