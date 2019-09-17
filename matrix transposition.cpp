#include<iostream>
#include<conio.h>
using namespace std;
class matrix{
	int m[3][3];
	public:
		void read(){
			int i,j;
			cout<<"Enter the elements of the matrix: ";
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					cout<<"m["<<i<<"] ["<<j<<"] =";
					cin>>m[i][j];
				}
			}
		}
			void display();
			friend matrix trans(matrix);
};
void matrix::display(){
	int i,j;
	for(i=0;i<3;i++){
		cout<<"\n";
		for(j=0;j<3;j++)
			cout<<m[i][j];
	}
}
matrix trans(matrix m1){
	matrix m2;
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			m2.m[i][j]=m1.m[j][i];
			return (m2);
	}
}
int main(){
	matrix n1,n2;
	n1.read();
	cout<<"\nYou entered the following matrix: ";
	n1.display();
	n2=trans(n1);
	cout<<"\n Transposed matrix";
	n2.display();
	return 0;
}
	
