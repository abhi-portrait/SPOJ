#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll a[100005];
int main()
{
ll t ,n,k,i;
ios_base::sync_with_stdio(false);
cin>>t;
while(t--)
{
	cin>>n>>k;
	ll sum=0,start=0,m=INT_MIN,amount=0;
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		if(sum>k)
		{
		    if(i-start>m)
		    {
			m=i-start;
			amount=sum-a[i];
			}
			else if(i-start==m)
			amount=min(amount,sum-a[i]);
			sum=sum-a[start]-a[i];
			start++;
			i--;
		}
		else if(sum<=k && i==n-1 )
		{
			if(i-start+1>m)
		    {
			m=i-start+1;
			amount=sum;
			}
			else if(i-start+1==m)
			amount=min(amount,sum);

		}

	}
	cout<<amount<<" "<<m<<endl;
	}
}
