#include<iostream>
#include<cstring>
using namespace std;
class employee{
	char name[80];
	public:
		void putname(char *n);
		void getname(char *n);
	private:
		double wage;
	public:
		void putwage(double w);
		double getwage();
};
void employee::putname(char *n){
		strcpy(name,n);
}
void employee::getname(char *n){
		strcpy(n,name);
}
void employee::putwage(double w){
		wage=w;
}
double employee::getwage(){
		return wage;
}
int main(){
		employee ted;
		char name[80];
		ted.putname("Abhinandan Das");
		ted.putwage(750000);
		ted.getname(name);
		cout<<name<<" makes $"<<ted.getwage()<<" per month."<<endl;
		return 0;
}
