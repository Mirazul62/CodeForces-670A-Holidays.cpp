#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,min,max,ans,ex1,ex2,temp;
    cin>>n;
    temp=n/7;
    ans=n-temp*7;
    if(n%7==0)
    {
        max=(n/7)*2;
        min=(n/7)*2;
    }
    else if(ans==1)
    {
        max=temp*2+ans;
        min=temp*2;
    }
    else if(ans>=2 && ans<=5)
    {
        max=(temp+1)*2;
        min=(temp)*2;
    }
    else if(ans==6)
    {
         max=(temp+1)*2;
         min=max-1;
    }
    cout<<min<<" "<<max;
   /// cout<<temp<<" "<<ans;



}
