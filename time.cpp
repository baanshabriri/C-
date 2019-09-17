#include<iostream>
using namespace std;
class time{
	int hour;
	int minutes;
	public:
		inline void gettime(int h,int m){
			hour=h; minutes=m;}
		inline void puttime(){
			cout<<hour<<"hours and "<<minutes<<"minutes";
		}
		void sumtime(time,time);
};
void time::sumtime(time t1,time t2){
	minutes=t1.minutes+t2.minutes;
	hour=minutes/60;
	minutes=minutes%60;
	hour=hour+t1.hour+t2.hour;
}
int main()
{
	time T1,T2,T3;
	T1.gettime(2,45);
	T2.gettime(3,50);
	T3.sumtime(T1,T2);
	cout<<"\nT1= ";T1.puttime();
	cout<<"\nT2= ";T2.puttime();
	cout<<"\nT3= ";T3.puttime();
	return 0;
}
			
