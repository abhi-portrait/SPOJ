#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001][2],a[1001];
int game(int i,int j,int n,int k)
{
	if(i>=n || j>=n || i<0 || j<0)
	return 0;
	if(i==j && k==0)
	return a[i];
	if(i==j && k==1)
	return 0;
	if(dp[i][j][k]!=-1)
	return dp[i][j][k];
	if(k==0)
	{
		dp[i][j][k]=max(a[i]+game(i+1,j,n,1),a[j]+game(i,j-1,n,1));
	}
	else
	{
		if(a[i]>=a[j])
		dp[i][j][k]=game(i+1,j,n,0);
		else
		dp[i][j][k]=game(i,j-1,n,0);
	}
	return dp[i][j][k];
}
int main()
{
	int n,i,t=0;
	long long  int sum=0;
	cin>>n;
	while(n!=0)
	{
		t++;
		sum=0;
	for(i=0;i<n;i++)
	{
	cin>>a[i];
	sum=sum+a[i];
}
	memset(dp,-1,sizeof(dp));
	int k=game(0,n-1,n,0);
	cout<<"In game "<<t<<", the greedy strategy might lose by as many as "<<abs(k-(sum-k))<<" points."<<endl;
	cin>>n;
	}
}
