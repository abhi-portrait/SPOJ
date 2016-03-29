#include<bits/stdc++.h>
using namespace std;
int dp[50][500];
char str[200];
int string_dp(int i,int sum,int n)
{
        if(dp[i][sum]!=-1)
        return dp[i][sum];

        if(i==n)
        return 1;
        if(i>n)
        return 0;

        int ans=0,x=0;
    for(int k=i;k<n;k++)
    {
        ans+=str[k]-'0';
        if(ans>=sum)
        {
            x= x+string_dp(k+1,ans,n);

         }
    }
    dp[i][sum]=x;
    return dp[i][sum];
}
int main()
{
    int i,t,n,p=0;

    cin>>str;

    while(str[0]!='b')
    {
       p++;
       n=strlen(str);
       memset(dp,-1,sizeof(dp));
       cout<<p<<". "<<string_dp(0,0,n)<<endl;
        cin>>str;
    }
}
