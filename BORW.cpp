#include<bits/stdc++.h>
using namespace std;
int dp[300][300][300],a[300],n;
int fun(int inc,int dec,int i)
{
    if(i>n)
            return 0;
    if(dp[i][inc][dec]!=-1)
        return dp[i][inc][dec];

            dp[i][inc][dec]=INT_MAX;
            if((inc==0 || a[i]>a[inc]) && (dec==0 || a[i]<a[dec]))
             dp[i][inc][dec]=min(min(fun(i,dec,i+1),1+fun(inc,dec,i+1)),fun(inc,i,i+1));
        else if(inc==0 || a[i]>a[inc])
        dp[i][inc][dec]=min(fun(i,dec,i+1),1+fun(inc,dec,i+1));
        else if(dec==0 || a[i]<a[dec])
        dp[i][inc][dec]=min(1+fun(inc,dec,i+1),fun(inc,i,i+1));
        else
         dp[i][inc][dec]=1+fun(inc,dec,i+1);

    return dp[i][inc][dec];
}
int main()
{
int i,j,p,q;
cin>>n;
while(n!=-1)
{
for(i=1;i<=n;i++)
cin>>a[i];
memset(dp,-1,sizeof(dp));
p=fun(0,0,1);
cout<<p<<endl;
cin>>n;

}
}
