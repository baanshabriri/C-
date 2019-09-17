#include <iostream>
using namespace std;

long sum(long);
int check(long);
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,i,count=0;
        cin>>a>>b;
        for ( i=a ; i <= b ; i++ ){
            if ( check(i)==1 ){
                count++;
            }
        }
        cout<<count<<endl;
    }   
    return 0;
}

int check ( long num ){
    while ( num != 0 && num != 2 && num != 3 && num != 4 && num != 5 && num != 6 && num != 8 && num != 9 ){
        num=sum(num);
        if (num==1 || num==7 || num==10 )
            return 1;
    }
    return 0;
}

long sum(long n)
{
    long t=0,r,q;
    q=n;
    do
	{
      r=q%10;
      t=t+r*r;
      q=q/10;
    }
    while(q);
    return t;
}
