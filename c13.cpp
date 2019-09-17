#include<iostream>
using namespace std;

template<class t>
t add(t num1, t num2){
	t sum;
	sum = num1 + num2;
	return sum;
}

main(){
	cout<<add(1,3)<<endl;
	cout<<add(1.0,7.0)<<endl;
	cout<<add('A','B')<<endl;
}
