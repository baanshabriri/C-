#include<iostream.h>
#include<fstream.h>
#include<stdlib.h>
int main(){
	ifstream fin1,fin2;
	char line[50];
	fin1.open("country");
	fin2.open("capital");
	for(int i=0;i<10;i++){
		if(fin1.eof()!=0){
			cout<<"exit\n";
			exit(1);
		}
		fin1.getline(line,50);
		cout<<"capital of"<<line;
		if(fin2.eof()!=0){
			cout<<"exit";
			exit(1);
		}
		fin2.getline(line,50);
		cout<<line<<"\n";
	}
	return 0;
}

					
	
