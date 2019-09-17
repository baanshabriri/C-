#include<iostream>
#include<string>
using namespace std;
class string{
	char *name;
	int len;
	public:
		string(){
			len=0;
			name=new char[len+1];
		}
		string(char *s){
			len=strlen(s);
			name=new char[len+1];
			strcpy(name,s);
		}
		void display(){
			cout<<name<<endl;
		}
		void join(string &a,string &b);
};
void string::join(string & a.string & b){
	len=a.len+b.len;
	delete name;
	name=new char[len+1];
	strcpy(name,a.name);
	strcat(name,n.name);
}
int main(){
	char *first,*second;
	cout<<"Enter first name:";
	cin>>first;
	cout<<"Enter last name:";
	cin>>second
	string n1(first),n2(second),s1;
	s1.join(n1,n2);
	s1.display();
	return 0;
}

