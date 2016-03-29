#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll dp[50][50],p[50],n,a,b,c;
ll min(ll k,ll r)
{
	if(k<r)
	return k;
	else
	return r;
}
ll budget(ll i,ll t)
{
	ll k,l,mini;
	if(i>n-1)
	return 0;
	if(dp[i][t]!=-1)
	return dp[i][t];
	if(p[i]>=t)
	{
	k=p[i]-t;
	mini=k*a + p[i]*b + budget(i+1,p[i]);
	}
	else if(p[i]==t)
	mini=p[i]*b + budget(i+1,t);
	else
	{
	k=t-p[i];
	mini=t*b+budget(i+1,t);
    for(l=1;l<=k;l++)
	{
		mini=min(mini,(t-l)*b + l*c + budget(i+1,t-l));
	}
	}
	dp[i][t]=mini;
	return dp[i][t];
}
int main()
{
	ll i,ans,ci=0;
	cin>>n;

	while(n!=0)
	{
	ci++;
	cin>>a>>b>>c;
	for(i=0;i<n;i++)
	cin>>p[i];
	memset(dp,-1,sizeof(dp));

	ans=budget(0,0);
	cout<<"Case "<<ci<<", cost "<<"= $"<<ans<<endl;
//	for(i=0;i<n;i++)
//	cout<<dp[i]<<"  ";
	cin>>n;
}
}
