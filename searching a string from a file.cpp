#include<iostream.h>
#include<fstream.h>
#include<string.h>
int main(){
	char str[50];
	fstream file;
	cout<<"Enter a string:";
	cin>>str;
	int len=strlen(str);
	file.open("Text",ios::in|ios::out|ios::trunc);
	for(int i=0;i<len;i++)
		file.put(str[i]);
	char line[50];
	file.seekg(0);
	while(file){
		file.getline(line,50);
		cout<<line<<endl;
	}
	file.close();
	file.open("Text",ios::in);
	file.seekg(8);
	while(file){
		file.getline(line,15);
		cout<<line<<endl;
	}
	file.close();
	return 0;
}

	
