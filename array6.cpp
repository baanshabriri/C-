#include<iostream>
#include<conio>
using namespace std;
int main(){
	int no=0,digit[30],nod,i;
	clrscr();
	cout<<"Enter the number of digits:";
	cin>>nod;
	for(i=0;i<nod;i++)
	{
		cout<<"Enter digits:";
		cin>>n;
	}
	i=0;
	while(i<nod){
		no=no+digit[i]*pow(10,i);
		i++;
	}
	cout<<"The number is "<<no;
	return 0;
}
		
