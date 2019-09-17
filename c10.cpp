#include <iostream>
using namespace std;

long int prime( long int num ){
	long int largest = num, i, j, count = 0;
	for ( i = 2 ; i < num ; i++ ){
		if ( num%i == 0 ){
			for ( j = 2 ; j < i ; j++ ){
				if ( i%j == 0)
					count++;
			}
			if ( count == 0)
				largest = i;
		}
	}
	cout<<"\nLargest Prime Factor : "<<largest;
	return largest;
}

main(){
	long int num, min , max, count = 0;
	long int *arr;
	cout<<"\nEnter the min: ";
	cin>>min;
	cout<<"\nEnter the max: ";
	cin>>max;
	long int size = max - min; 
	int i;
	try{
		arr = new long int[size];
	}
	catch( std::bad_alloc ){
		cout<<"\nMemory Allocation Error";
	}
	for ( i = min ; i <= max ; i++ ){
		num = prime(i);
		arr[count] = num;
		count++;
	}
	cout<<"\nArray Elements are : "; 
	for ( i = 0 ; i < count ; i++ ){
		cout<<arr[i]<<" ";
	}
}
