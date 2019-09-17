#include<iostream.h>
#include<fstream.h>
int main(){
	char string[50];
	fstream file;
	file.open("Text",ios::out|ios::in|ios::trunc);
	cout<<"Enter the string:";
	cin>>string;
	int len=strlen(string);
	for(int i=0;i<len;i++)
		file.put(string[i]);
	file.seekg(0);
	char line[50];
	cout<<"The entered word was:";
	file.getline(line,50);
	cout<<line;
	file.close();
	return 0;
}

