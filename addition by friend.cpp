#include<iostream>
using namespace std;
class xyz;//prior declaration
class abc
{
	int data;
	public:
		void setvalue(int value){
			data=value;
		}
		friend int sum(abc,xyz);
};
class xyz{
	int data;
	public:
		void setvalue(int value){
			data=value;
		}
		friend int sum(abc,xyz);
};
int sum(abc d1,xyz d2){
	cout<<"sum ="<<d1.data+d2.data;
}
int main(){
	xyz x;
	abc a;
	x.setvalue(20);
	a.setvalue(54);
	sum(x,a);				
	return 0;
}
	

