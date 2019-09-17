#include<iostream>
using namespace std;
class matrix{
	int m[3][3];
	public:
		void read(){
			cout<<"Enter elements of 3x3 matrix:"<<"\n";
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
					cout<<"m["<<i+1<<"]["<<j+1<<"]:";
					cin>>m[i][j];
				}
			}
		}
		void display(){
			for(int i=0;i<3;i++){
				cout<<"\n";
				for(int j=0;j<3;j++)
					cout<<m[i][j]<<"\t";
			}
		}
		friend matrix trans(matrix);
};
matrix trans(matrix m1){
	matrix m2;
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			m2.m[i][j]=m1.m[j][i];
	return (m2);
}
int main(){
	matrix mat1,mat2;
	mat1.read();
	cout<<"your matrix is:";
	mat1.display();
	mat2=trans(mat1);
	cout<<"Transposed matrix is:\n";
	mat2.display();
	return 0;
}

					
					
