#include<bits/stdc++.h>
using namespace std;
typedef long long int llt;
llt max(llt a,llt b)
{
	if(a>b)
	return a;
	else
	return b;
}
llt a[10001];
int main()
{
ios_base::sync_with_stdio(false);
llt t,i,j,n;
cin>>t;
llt k=1,maxi=0;
while(k<=t)
{
	cin>>n;
	if(n==0)
	cout<<"Case "<<k<<": "<<"0"<<endl;
	else
	{
	maxi=0;
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=1;i<n;i++)
	{
		for(j=0;j<i-1;j++)
		{
			if(a[j]+a[i]>maxi)
			maxi=a[i]+a[j];
		}
		a[i]=max(a[i],maxi);
	}
	llt m=-100;
	for(i=0;i<n;i++)
	{
	if(a[i]>m)
	m=a[i];
	}
	cout<<"Case "<<k<<": "<<m<<endl;
}
	k++;
}
return 0;
}
