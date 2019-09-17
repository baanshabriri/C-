#include<iostream>
using namespace std;
class item
{
	int n;
	double c;
	public:
		void getdata(int,double); //prototype declaration,to be define outside class definition
		void putdata()	//Function defined inside class. Acts as an inline function. should be short.
		{
			cout<<"Number: "<<n<<endl;
			cout<<"Cost: "<<c<<endl;
		}
};
void item::getdata(int a,double b)
{
	n=a;
	c=b;
}
void main()
{
	item x,y;
	cout<<"\nObject x: "<<endl;
	x.getdata(100,39.5);
	x.putdata();
	y.getdata(200,69.9);
	y.putdata();
	return 0;
}
