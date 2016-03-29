#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll n,m,dp[201][201][2];
char a[201][201];
ll wood(ll i,ll j,ll flag)
{

	if(a[i][j]=='#' || i>=m || j>=n || i<0 || j<0)
	return 0;
	if(dp[i][j][flag]!=-1)
	return dp[i][j][flag];
	if(flag==1)
	{
		if(a[i][j]=='T')
	dp[i][j][flag]=max(1+wood(i,j-1,1),1+wood(i+1,j,0));
	else
	dp[i][j][flag]=max(wood(i,j-1,1),wood(i+1,j,0));
	}
	else
	{
		if(a[i][j]=='T')
	dp[i][j][flag]=max(1+wood(i,j+1,0),1+wood(i+1,j,1));
	else
	dp[i][j][flag]=max(wood(i,j+1,0),wood(i+1,j,1));
	}
	return dp[i][j][flag];
}
int main()
{
ll i,j,t;
cin>>t;
while(t--)
{
cin>>m>>n;
for(i=0;i<m;i++)
cin>>a[i];
memset(dp,-1,sizeof(dp));
cout<<wood(0,0,0)<<endl;

}
}
