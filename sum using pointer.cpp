#include<iostream>
using namespace std;
int sum(int *p,int *q){
	int s;
	s=*p + *q;
	return s;
}
int main(){
	int *n1,*n2,s;
	cout<<"Enter:";
	cin>>n1>>n2;
	s=sum(n1,n2);
	cout<<"sum:"<<s;
	return 0;
}

