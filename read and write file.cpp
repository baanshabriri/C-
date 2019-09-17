#include<iostream.h>
#include<fstream.h>
int main(){
	ofstream myfile("Item");		// connect item file to myfile
	cout<<"Enter name:";
	char name[10];
	cin>>name;						//get name from keyboard
	myfile<<name<<"\n";				//write name to fie item 				
	cout<<"Enter item cost:";
	float cost;
	cin>>cost;
	myfile<<cost<<"\n";
	myfile.close();
	ifstream inf("Item");
	inf>>name;				//read name from file item
	inf>>cost;
	cout<<"\n";
	cout<<"Item name:"<<name<<endl;
	cout<<"Item cost:"<<cost<<endl;
	inf.close();
	return 0;
}

	
	
	

