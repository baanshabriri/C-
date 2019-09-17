#include<iostream>
using namespace std;
class employ{
	char name[20];
	float age;
	public:
		void getdata();
		void putdata();
};
void employ::getdata(){
	cout<<"Enter name: ";
	cin>>name;
	cout<<"\nEnter age: ";
	cin>>age;
}
void employ::putdata(){
	cout<<"Name:"<<name<<endl;
	cout<<"Age: "<<age<<endl;
}
const int size=3;
int main(){
	int i;
	employ manager[size];
	for(i=0;i<size;i++){
		cout<<"Details of manager"<<i+1<<endl;
		manager[i].getdata();
	}
	cout<<"Output";
	for(i=0;i<size;i++)
	{
		cout<<"manager "<<i+1<<endl;
		manager[i].putdata();
	}
	return 0;
}

	
