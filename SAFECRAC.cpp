#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long int ll;
ll dp[10][100005];
int main()
{
ll n,i,j,l,t;
for(i=0;i<=9;i++)
dp[i][1]=1;
for(i=2;i<=100002;i++)
{
	    dp[0][i] = dp[7][i-1];
        dp[1][i] = (dp[2][i-1 ] + dp[4][i-1])%MOD;
        dp[2][i] = (dp[1][i-1 ] + dp[3][i-1] +  dp[5][i-1])%MOD;
        dp[3][i] = (dp[2][i-1 ] + dp[6][i-1])%MOD;
        dp[4][i] = (dp[1][i-1 ] + dp[5][i-1] +  dp[7][i-1])%MOD;
        dp[5][i] = (dp[2][i-1 ] + dp[4][i-1] +  dp[6][i-1] + dp[8][i-1])%MOD;
        dp[6][i] = (dp[3][i-1 ] + dp[5][i-1] +  dp[9][i-1])%MOD;
        dp[7][i] = (dp[0][i-1 ] + dp[4][i-1] +  dp[8][i-1])%MOD;
        dp[8][i] = (dp[5][i-1 ] + dp[7][i-1] +  dp[9][i-1])%MOD;
        dp[9][i] = (dp[6][i-1 ] + dp[8][i-1])%MOD;

}
cin>>t;
while(t--)
{

cin>>n;
ll sum=0;
for(i=0;i<=9;i++)
	{

	sum=sum+dp[i][n];
	sum=sum%MOD;

	}
cout<<sum%MOD<<endl;
}
}
