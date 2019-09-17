#include<iostream>
using namespace std;
const int m=50;
class items
{
	int itemCode[m];
	float itemCost[m];
	int count;
	public:
		int i;
		void cnt(){count=0;}
		void getItem();
		void removeItem();
		void displayItem();
		void displaySum();
		};
void items::getItem()
{
	cout<<"Enter item code: ";
	cin>>itemCode[count];
	cout<<"\nEnter item price: ";
	cin>>itemCost[count];
	count++;
}
void items::removeItem()
{
	int a,i;
	cout<<"\nEnter Item code to be removed: ";
	cin>>a;
	for(i=0;i<count;i++)
		if(itemCode[i]==a)
			itemCost[i]=0;
}
void items::displaySum()
{
	float sum=0;
	cout<<"Enter Item code to be displayed:";
	for(i=0;i<count;i++)
		sum=sum+itemCost[i];
	cout<<"\n Total price is: "<<sum;
}
void items::displayItem()
{
	for(i=0;i<count;i++)
	{
		cout<<"\n"<<itemCode[i];
		cout<<"\t"<<itemCost[i];
	}
	cout<<"\n";
}
void main()
{
	items order;
	order.cnt();
	int x;
	do
	{
		cout<<"\nEnter appropriate number:";
		cout<<"\n1: Add an item";
		cout<<"\n2: Delete an item";
		cout<<"\n3: Display total value";
		cout<<"\n4: Display all items";
		cout<<"\nQuit";
		cin>>x;
		switch(x)
		{
			case 1:order.getItem();break;
			case 2:order.removeItem();break;
			case 3:order.displaySum();break;
			case 4:order.displayItem();break;
			case 5:break;
			default : cout<<"Error in input!!";
		}
	}
		while(x!=5);
		return 0;
	
}

