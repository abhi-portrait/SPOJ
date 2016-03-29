#include<bits/stdc++.h>
using namespace std;
char str[300];
int n,dp[300];
int sweet(int i)
{
    if(dp[i]!=-1)
        return dp[i];
        if(i==n-1 && str[i]-'0'==1)
            return 1;
        if(i==n-1 && str[i]-'0'==0)
            return 0;
            if(i==n)
                return 0;
    int k,l=0,m=INT_MIN;
    for(k=i;k<n;k++)
    {
        l+=str[k]-'0';
        if(l>(k-i+1)/2)
            m=max(m,k-i+1+sweet(k+1));
        else
            m=max(m,sweet(k+1));
    }
    dp[i]=m;
    return dp[i];
}
int main()
{
    int t;

    cin>>t;
    while(t--)
    {
        memset(dp,-1,sizeof(dp));
        cin>>n;
        cin>>str;

        cout<<sweet(0)<<endl;

    }
}
