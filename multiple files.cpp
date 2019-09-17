#include<iostream.h>
#include<fstream.h>
int main(){
	ofstream ofile;
	ofile.open("country");
	ofile<<"usa\n";
	ofile<<"india\n";
	ofile.close();
	ofile.open("capital");
	ofile<<"washington\n";
	ofile<<"delhi\n";
	ofile.close();
	char line[50];
	ifstream fin;
	fin.open("country");
	cout<<"contents of country file:";
	while(fin){
		fin.getline(line,50);
		cout<<line;
	}
	fin.close();
	fin.open("capital");
	cout<<"Contents of capital file are:\n";
	while(fin){
		fin.getline(line,50);
		cout<<line;
	}
	fin.close();
	return 0;
}

	
