#include<iostream>
using namespace std;
int main(){
	int i,x=0,y=1,n,z;
	cout<<"Enter terms:";
	cin>>n;
	cout<<x<<y;
	for(i=1;i<n;i++){
		z=x+y;
		cout<<z;
		x=y;
		y=z;
	}
	cout<<"\n";
	return 0;
}

	
	
