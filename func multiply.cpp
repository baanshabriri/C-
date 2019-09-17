#include<iostream>
using namespace std;
int multiply(int x,int y)
{
	int prdct;
	prdct=x*y;
}
int main()
{
	int a,b,c;
	cout<<"Enter the two numbers to be multiplied: ";
	cin>>a>>b;
	c=multiply(a,b);
	cout<<"\nThe product is : "<<c;
	return 0;
}
