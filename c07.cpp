#include <iostream>
using namespace std;

struct node{
	int data;
	node *leftlink;
	node *rightlink;
}*head = NULL;

void createHead(int num){
	node *temp;
	temp = new node;
	temp->data = num;
	temp->leftlink=NULL;
	temp->rightlink=NULL;
	head = temp;
}

void addAtBeg(int num){
	node *temp;
	temp = new node;
	temp -> data = num;
	temp -> leftlink = NULL;
	temp -> rightlink = head;
	head = temp;
}

void append(int num){
	node *temp, *p=head;
	temp = new node;
	temp -> data = num;
	while( p-> rightlink!=NULL)
		p = p -> rightlink;
	p -> rightlink = temp;
	temp -> leftlink = p;
	temp -> rightlink = NULL;
}

void display(){
	node *temp=head;
	while( temp!=NULL){
		cout<<temp -> data<<"	";
		temp = temp -> rightlink;
	}
}

void deleteNode(int num){
	node *temp=head,*p=head;
	while ( temp != NULL ){
		if ( head->data == num ){
			head = head -> rightlink;
			head -> leftlink = NULL;
			temp -> leftlink = NULL;
			temp -> rightlink = NULL;
			delete temp;
			break;
		}
		else{
			p = temp -> leftlink;
			if ( temp -> data == num){
				p -> rightlink = temp -> rightlink;
				temp -> rightlink = NULL;
				temp -> leftlink = NULL;
				delete temp;
				break;
			}
		}
		p = temp;
		temp = temp -> rightlink;
	}
}

main(){
	createHead(0);
	int n=1, num;
	while (n!=0)
	{
		cout<<"\n\n1. Add at beginning\n2. Add at end\n3. Display\n4. Delete\nAnything else to exit\n\n: ";
		cin>>n;
		switch(n){
			case 1: cout<<"Enter The Data: ";
				cin>>num;
				addAtBeg(num);
				break;
			case 2: cout<<"Enter The Data: ";
				cin>>num;
				append(num);
				break;
			case 3: display();
				break;
			case 4: cout<<"Enter The Data: ";
				cin>>num;
				deleteNode(num);
				break;
			default: n = 0;
		}
	}
}
			
