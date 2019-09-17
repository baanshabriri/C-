#include<stdio.h>
#include<stdlib>
struct node
{
	int data;
	struct node* link;
}node* header;
//a=null if linked list is empty;
void insert(int x);
void prit():
int main()
{	
	int n,i,x;
	printf("How many numbers ?");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
			printf("enter the numbers:");
			scanf("%d",&x);
			insert(x);
			print();
	}
}A
void insert(int x)
{
	struct node* temp=(node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->link=header;	
	header=temp;
}
void print()
{
		struct node* temp;
		printf("The list is:");
		while(temp!=NULL)
		{
			printf("%d",temp->data);
			temp=temp->link;
		}
		printf("\n");
}

