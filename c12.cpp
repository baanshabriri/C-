#include<iostream>
using namespace std;
class shape
{
	protected:
		float l,b;
	public:
		shape(){
			l = 0;
			b = 0;
		}
		virtual void area();
		virtual void perimeter();
		void getdata()
		{
			cout<<"\nEnter l & b : ";
			cin>>l>>b;
		}
};

class rectangle:public shape
{
	public:
		void area()
		{
			cout<<"\nArea of rectangle= "<<l*b;
		}
		void perimeter()
		{
			cout<<"\nPerimeter of rectangle: "<<2*(l+b);
		}
};
class triangle: public shape
{
	public:
		void area()
		{
			cout<<"\nArea of triangle: "<<0.5*l*b;
		}
		void perimeter()
		{
			cout<<"\nPerimeter of triangle: "<<l+b;
		}
};
class circle: public shape
{
	public:
		void area()
		{
			cout<<"\nArea of circle: "<<3.14*l*l;
		}
		void perimeter()
		{
			cout<<"\nPerimeter of circle: "<<2*3.14*l;
		}
};
int main()
{
	shape *s;
	rectangle r;
	triangle t;
	circle c;
	s = &r;
	s->getdata();
	s -> area();
	s -> perimeter();
	
	s = &t;
	s->getdata();
	s -> area();
	s -> perimeter();
	
	s = &c;
	s->getdata();
	s -> area();
	s -> perimeter();
	
	return 0;
}
