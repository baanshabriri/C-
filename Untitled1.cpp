#include<iostream>
#include<cmath>
using namespace std;
class rect;
class polar{
	int r;
	int o;
	public:
		friend rect convertp2r(polar);
		friend polar convertr2p(rect);
		void get_data(int a,int b){
			r=a;
			o=b;}
		void display(){
			cout<<"Magnitude-"<<r<<"Angle-"<<o<<"\n";
		}
};
class rect{
	int x;
	int y;
	public:
		friend rect convertp2r(polar);
		friend polar convertr2p(rect);
		void get_data(int a,int b){
			x=a;
			y=b;
		}
		void display(){
			cout<<x<<"+i"<<y<<"\n";
		}
};
rect convertp2r(polar l){
	double x,y;
	l.r=sqrt((pow(x,2))+(pow(y,2)));
	l.o=atan(y/x);
	cout<<"The polar coordinates are: Magnitude-"<<r<<"angle-"<<o<<"\n";
}
polar convertr2p(rect l){
	l.x=r*cosine(l.o);
	l.y=r*sine(l.o);
	cout<<x<<"+i"<<y<<"\n";
}
int main(){
	polar p;
	rect r;
	r.get_data(2,3);
	p.get_data(5,45);
	p.convertr2p;
	r.convertp2r;
	return 0;
}

