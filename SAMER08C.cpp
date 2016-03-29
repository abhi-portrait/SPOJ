#include<bits/stdc++.h>
using namespace std;
int dp[100002],a[100002],b[100002];
int fun(int x[],int j,long int m)
{
	if(j>=m)
	return 0;
	if(dp[j]!=-1)
	return dp[j];
	dp[j]=max(x[j]+fun(x,j+2,m),fun(x,j+1,m));
	return dp[j];
}
int main()
{
	long int i,m,j,n;
	cin>>m>>n;

	while(m!=0 && n!=0)
	{
	for(i=0;i<m;i++)
	{
		;
		for(j=0;j<n;j++)
		cin>>a[j];
		fill(dp,dp+n,-1);
		b[i]=fun(a,0,n);
	}
	fill(dp,dp+m,-1);
    cout<<fun(b,0,m)<<endl;
    cin>>m>>n;
   }
}
