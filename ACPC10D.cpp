#include<bits/stdc++.h>
using namespace std;
signed int dp[100001][5],a[100001][3];
int min(int a,int b,int c,int d)
{
	if(a<=b && a<=c && a<=d)
	return a;
	else if(b<=a && b<=c && b<=d)
	return b;
	else if(c<=a && c<=b && c<=d)
	return c;
	else
	return d;
}
int main()
{
int n,i,j,k=0;
cin>>n;
k++;
while(n!=0)
{
	for(i=0;i<n;i++)
	{
		for(j=0;j<3;j++)
		cin>>a[i][j];
	}
	for(i=0;i<n;i++)
	{
	dp[i][0]=100000;
	dp[i][4]=100000;
    }
    dp[0][1]=100000;
    dp[0][2]=a[0][1];
    dp[0][3]=a[0][1]+a[0][2];
    for(i=1;i<n;i++)
    {
    	for(j=1;j<4;j++)
    	{
    		dp[i][j]= a[i][j-1]+ min(dp[i][j-1],dp[i-1][j-1],dp[i-1][j],dp[i-1][j+1]);
		}
	}
	cout<<k<<". "<<dp[n-1][2]<<endl;
	cin>>n;
	k++;
}
return 0;
}
