#include<bits/stdc++.h>
using namespace std;
int main()
{
	int s,n,a[2002],b[2002],i,j,ans,x;
	cin>>s>>n;
	while(s!=0 && n!=0)
	{
	x=9999;
	for(i=0;i<n;i++)
	cin>>a[i]>>b[i];
	int dp[n+1][s+1];
	dp[0][0]=0;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=s;j++)
		{
			if(i==0 || j==0)
			dp[i][j]=0;
			else if(a[i-1]<=j)
			dp[i][j]=max(b[i-1]+dp[i-1][j-a[i-1]],dp[i-1][j]);
			else
			dp[i][j]=dp[i-1][j];

		}
	}
		ans=dp[n][s];
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=s;j++)
		{
		if(dp[i][j]==ans)
		{
			x=min(x,j);

		}

		}

	}
    cout<<x<<" "<<ans<<endl;
	cin>>s>>n;
}
}
