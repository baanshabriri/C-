#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream f;
  	int n,x,a, c, k;
	f.open("C:\abc.txt",ios::out);
  	cout<<"Enter an integer in decimal number system";
  	cin>>x;
  	n=x;
  	cout<<"Binary Value OF Given Number Is: ";

 	for( a=1;n!=0;a++)
  	{
     	n=n/2;

  	}

  	a=a-2;
  	for (c = a; c >= 0; c--)
  	{
    	k = x >> c;

    	if(k & 1)
    	{
      		cout<<"1";
      		f<<1;
      	}
    	else
      	{
      		cout<<"0";
      		f<<0;
      	}
    }
    f.close();
  return 0;
}

