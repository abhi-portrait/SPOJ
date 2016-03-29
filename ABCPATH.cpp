#include<bits/stdc++.h>
using namespace std;

int d_x[8]={0,-1,-1,-1,0,1,1,1};
int d_y[8]={-1,-1,0,1,1,1,0,-1};
char a[60][60];
int dp[300][300],n,m;
int valid(int i,int j)
{
	if(i>=0 && i<n && j>=0 && j<m)
	return 1;
	else
	return 0;
}
int fun(int i,int j)
{
	int flag=0,k,x,y;
	if(dp[i][j]!=-1)
	return dp[i][j];
    	for(k=0;k<8;k++)
		{
			x=i+d_x[k];
			y=j+d_y[k];
			if( valid(x,y) && (int)a[x][y]==(int)a[i][j]+1)
			{
			dp[i][j]=max(1+fun(x,y),dp[i][j]);
			flag=1;
		}
		}
		if(flag==0)
		return 1;
		else
		return dp[i][j];

}
int main()
{
	int i,j,k,p=0,count,x,y;

	cin>>n>>m;
	while(n!=0 && m!=0)
	{
	p++;
	memset(dp,-1,sizeof(dp));
	count=0;
	for(i=0;i<n;i++)
	cin>>a[i];
    int ans=0;
	for(i=0;i<n;i++)
	{
	for(j=0;j<m;j++)
	{
		if(a[i][j]=='A')
		ans=max(ans,fun(i,j));
		}
	}
	cout<<"Case "<<p<<": "<<ans<<endl;
	cin>>n>>m;
}
}
