#include <iostream>
using namespace std;

template<class t>
class Stack{
	t arr[10];
	int count;
	public:
		Stack(){
			count = 0;
		}
		void push(t num){
			if ( count < 10 ){
				cout<<"\nPush: "<<num;
				arr[count] = num;
				count++;
			}
			else
				cout<<"\nStack Overflow";
		}
		void top(){
			cout<<"\nTop Item : "<<arr[count-1];
		}
		void pop(){
			if ( count > 0 ){
				cout<<"\nPop: "<<arr[count-1];
				arr[count-1] = '\0';
				count--;
			}
			else
				cout<<"\nStack Underflow";
		}
		void isEmpty(){
			if ( count == 0 )
				cout<<"\nStack is Empty";
			else
				cout<<"\nStack is non Empty";
		}
};

main(){
	Stack<char> myStack;
	int i;
	for ( i = 65 ; i < 95 ; i++ ){
		myStack.push(i);
	}
	cout<<"\n";
	myStack.top();
	cout<<"\n";
	for ( i = 65 ; i < 95 ; i++ ){
		myStack.pop();
	}
	cout<<"\n";
	myStack.isEmpty();
}
		
