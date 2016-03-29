#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define M 1000000007
typedef long long int ll;
ll dp[10007];
vector<ll>g[10007];
ll fun(ll i,ll d)
{
	ll c=0,k;
	if(dp[i]!=-1)
	return dp[i];
	if(i==d)
	return 1;
	k=g[i].size();
	if(i!=d && !k)
	return 0;
	for(ll j=0;j<k;j++)
	{

		c+=fun(g[i][j],d)%M;

	}
	dp[i]=c%M;
	return dp[i];
}
int main()
{
ll t,n,m,u,v,s,d;
cin>>t;
while(t--)
{
	cin>>n>>m>>s>>d;
	memset(dp,-1,sizeof(dp));

	for(ll i=0;i<m;i++)
	{
		cin>>u>>v;
		g[u].push_back(v);
	}
	ll k=fun(s,d);
	cout<<dp[s]<<endl;
	for(ll i=1;i<=n;i++)
	g[i].clear();
}
}
