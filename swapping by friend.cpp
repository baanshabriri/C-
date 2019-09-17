#include<iostream>
using namespace std;
class class2;
class class1{
	int v1;
	public:
	void setvalue(int a){v1=a;}
	void display(){cout<<v1<<"\n";}
	friend void exchange(class1 &,class2 &);
};
class class2{
	int v2;
	public:
		void setvalue(int a){v2=a;}
		void display(){cout<<v2<<"\n";}
		friend void exchange(class1 &,class2 &);
};
void exchange(class1 & x, class2 & y){
	int t;
	t=x.v1;
	x.v1=y.v2;
	y.v2=t;
}
int main(){
	class1 c1;
	class2 c2;
	c1.setvalue(50);
	c2.setvalue(60);
	cout<<"value before exchange: "<<endl;
	c1.display();
	c2.display();
	exchange(c1,c2);
	cout<<"\nValue after exchange:"<<endl;
	c1.display();
	c2.display();
	return 0;
}
	
	
