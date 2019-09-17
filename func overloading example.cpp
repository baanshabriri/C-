#include<iostream>
using namespace std;
int vol(int);
double vol(double,int);
long vol(long,int,int);
int main()
{
	cout<<vol(5)<<endl;//cube
	cout<<vol(4.5,9)<<endl;//cylinder
	cout<<vol(100L,75,15)<<endl;//cuboid
	return 0;
}
int vol(int s){
	return (s*s*s);
}
double vol(double r,int h){
	return(3.14519*r*r*h);
}
long vol(long l,int b,int h){
	return(l*b*h);
}

