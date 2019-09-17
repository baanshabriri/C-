#include<stdio.h>
int main()
{
	int n,nsave,rem,d,j=1,dec=0;
	printf("Enter a binary no.");
	scanf("%d",&n);
	nsave=n;
	while(n>0)
	{
		rem=n%10;
		d=rem*j;
		dec=dec+d;
		j=j*2;
		n=n/10;
	}
	printf("Binary no.=%d,decimal no.=%d",nsave,dec);
	return 0;
}
