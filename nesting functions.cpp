#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class binary{
	string s;
	public:
		void read(){
		cout<<"Enter a binary no.:";
		cin>>s;
		}
		void chk_bin(){
			for(int i=0;i<s.length();i++){
				if(s.at(i)!='0' && s.at(i)!='1'){
					cout<<"quitting";
					
					exit(0);
				}
			}
		}
void ones(){
	chk_bin();
	for(int i=0;i<s.length();i++){
		if(s.at(i)=='0')
			s.at(i)='1';
		else if(s.at(i)=='1')
			s.at(i)=='0';
		else 
		 	cout<<"fuck";
	}
}
void display(){
	ones();
	cout<<"compliment: "<<s;
}
};
int main(){
	binary b;
	b.read();
	b.display();
	
	return 0;
}

