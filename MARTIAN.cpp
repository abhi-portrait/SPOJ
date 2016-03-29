#include<bits/stdc++.h>
using namespace std;
int y[501][501],b[501][501],dp[501][501];
int martian(int i,int j)
{
	int x,sum_b=0,sum_y=0;
	if(i<0 || j<0)
	return 0;
	if(dp[i][j]!=-1)
	return dp[i][j];
	for(x=i;x>=0;x--)
	sum_b=sum_b+b[x][j];
	for(x=j;x>=0;x--)
	sum_y=sum_y+y[i][x];
	dp[i][j]=max(sum_y+martian(i-1,j),sum_b+martian(i,j-1));
	return dp[i][j];
}
int main()
{
int n,m,i,j;
cin>>n>>m;
while(n!=0 && m!=0)
{
	for(i=0;i<n;i++)
	for(j=0;j<m;j++)
	cin>>y[i][j];
	for(i=0;i<n;i++)
	for(j=0;j<m;j++)
	cin>>b[i][j];
	dp[0][0]=max(y[0][0],b[0][0]);
	memset(dp,-1,sizeof(dp));
	cout<<martian(n-1,m-1)<<endl;
	cin>>n>>m;
}
}
