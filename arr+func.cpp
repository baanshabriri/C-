#include<iostream>
using namespace std;
void display(const int const1=5)
{
	int i;
	const int const2=5;
	int arr1[const1];
	int arr2[const2];
	for(i=0;i<5;i++){
		arr1[i]=i;
		arr2[i]=i*10;
		cout<<arr1[i]<<"  "<<arr2[i]<<endl;
	}
}
void main(){
	display(5);
}
