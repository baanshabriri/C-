#include<iostream>

using namespace std;

class student
{
	int roll;
	char name[15],branch[30];
	public:
		void getdata();
		void display();
};
void student::getdata()
{
	cout<<"\nEnter Roll No. : ";
	cin>>roll;
	cout<<"\nEnter Name: ";
	cin>>name;
	cout<<"\nEnter Branch: ";
	cin>>branch;
}
void student::display()
{
	cout<<"\nRoll No :"<<roll;
	cout<<"\nName: "<<name;
	cout<<"\nBranch: "<<branch;
}

int main()
{
	student s;
	s.getdata();
	s.display();
	return 0;
}

