#include<iostream.h>
#include<fstream.h>
#include<string.h>
int main(){
	char string[80];
	cout<<"Enter a string:";
	cin>>string;
	int len=strlen(string);
	fstream file;
	file.open("Text",ios::out|ios::in);
	for(int i=0;i<len;i++)
		file.put(string[i]);
	file.seekg(0);
	char ch;
	cout<<"Reading file contents:";
	while(file){
		file.get(ch);
		cout<<ch;
	}
	return 0;
	}
	
