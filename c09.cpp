#include <iostream>
using namespace std;

void division( int divisor, int dividend ){
		if ( divisor != 0){
			cout<<"\nResult = "<<dividend/divisor;
		}
		else{
			throw( divisor );
		}
}

main(){
	int divisor, dividend;
	cout<<"\nEnter Dividend: ";
	cin>>dividend;
	cout<<"\nEnter Divisor: ";
	cin>>divisor;
	try{
		division( divisor, dividend );
	}
        catch( int i ){
                cout<<"\nException caught : Divide by Zero"<<endl;
        }
}

