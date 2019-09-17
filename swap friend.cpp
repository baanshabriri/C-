#include<iostream>
using namespace std;
class c2;
class c1{
	int v1;
	public:
		void indata(){
			cout<<"Enter the 1st value:";
			cin>>v1;
		}
		void display(){
			cout<<"\n"<<v1<<"\n";
		}
		friend void swap(c1 &,c2 &);
};
class c2{
		int v2;
		public:
			void indata(){
				cout<<"Enter the 2nd value:";
				cin>>v2;
			}
			void display(){
			cout<<"\n"<<v2<<"\n";
}
friend  void swap(c1 &,c2 &);
};
void swap (c1 & x,c2 & y){
	int t;
	t=x.v1;
	x.v1=y.v2;
	y.v2=t;
}
int main(){
	c1 p;
	c2 q;
	p.indata();
	q.indata();
	p.display();
	q.display();
	cout<<"after swapping;";
	swap(p,q);
	p.display();
	q.display();
	return 0;
}

