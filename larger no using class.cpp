#include<iostream>
using namespace std;
class set
{
	int m,n;
	public:
		int largest();
		void input();
		void display();
};
int set::largest()
{
	if(m>=n)
		return m;
	else 
	return n;
}
inline void set::input()
{
	cout<<"Enter the values of m and n: ";
	cin>>m>>n;
}
inline void set::display()
{
	cout<<"\nLarger value is : "<<largest()<<endl;
}
int main()
{
	set a;
	a.input();
	a.display();
	return 0;
}
