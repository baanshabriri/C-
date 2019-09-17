#include<iostream>
using namespace std;
class code{
	int id;
	public:
		code(){}
		code(int a){
		id=a;
		}
		code(code &x){
		id=x.id;
		}
		void display(){
		cout<<id;
		}
};
int main(){
	code A(100);
	code B(A);
	code C=A;
	code D;
	D=A;
	cout<<"\n id of a is: "<<A.display();
	cout<<"\n id of b is :"<<B.diplay();
	cout<<"\nc="<<C.display();
	cout<<"\n d="<<D.display();
	return 0;
}
