#include<iostream>
using namespace std;
int A[1000];
int Dumb(int sum )
{
    int i,count;
    int total = 0;
    if (sum==0)
        return 1;
    for(i=1;i<=3;i++)
	{
        if (sum-i<0)
        break;
        if(A[sum-i])
        count = A[sum-i];
        else
        count = Dumb(sum-i) ;
        if(i==1)
        count = (count*2);
        total =(total + count);
    }
    A[sum] = total;
    return total;
}
int main()
{
    int tests,input;
    cin>>tests;
    while (tests--){
        cin>>input;
        cout<<Dumb(input)<<endl;
    }
    return 0;
}

