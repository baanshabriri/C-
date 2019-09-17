#include<stdio.h>
#include<conio.h>
top=-1;
int st[MAX];
#define MAX 20
int pop{
	int val;
	if(top==-1)
	{
		printf("Stack underflow");
		retrun -1;
	}
	else
	{
			val=st[top];
			top--;
			return val;
	}
}
void push{int st[],int val)
{
	if(top==MAX-1)
		printf("Stack Overflow");
	else
	{
		top++;
		st[top]=val;
	}
}
void display(int st[])
{
	int i;
	if(top==-1)
		printf("Stack empty");
	else 
	{
		for(i=top;i>=0;i--)
			printf("\n%d",st[i]);
	}
}
			
	
