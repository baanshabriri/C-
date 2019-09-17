#include<iostream>
using namespace std;
int arr[1000];
int DumbSum(int sum )
{
    int i;
    int c;
    int t=0;
    if (sum==0)
        return 1;
    for(i=1;i<=3;i++)
	{
        if (sum-i<0)
        break;
        if(arr[sum-i])
        c = arr[sum-i];
        else
        c = DumbSum(sum-i) ;
        if(i==1)
        c = (c*2);
        t=(t+ c);
    }
    arr[sum] = t;
    return t;
}
int main()
{
    int t,n;
    cin>>t;
    while (t--){
        cin>>n;
        cout<<DumbSum(n)<<endl;
    }
    return 0;
}
