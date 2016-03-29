#include<bits/stdc++.h>
using namespace std;
int main()
{
	char str[5005];
	int i,count=0;
	cin>>str;
	while(str[0]!='0')
	{
	count=0;
	int n=strlen(str);
	for(i=0;i<n;i++)
	{
		if(str[i]=='0' && str[i+1]=='0')
		count=1;
	}
	if( str[0]=='0' && count==1 )
	cout<<"0"<<endl;
	else
	{

	int dp[n+1];
	dp[0]=1;
	dp[1]=1;

	for(i=2;i<=n;i++)
	{
		if(str[i-1]=='0' && (str[i-2]-'0')*10 + str[i-1]-'0'<=26)
		{
		dp[i]=dp[i-2];
		if(i!=n)
		{
		dp[i+1]=dp[i];
		i++;
	    }
     	}
		else if(str[i-1]=='0' && (str[i-2]-'0')*10 + str[i-1]-'0'>26)
		{
			dp[n]=0;
			break;
		}
		else if((str[i-2]-'0')*10 + str[i-1]-'0'<=26 && str[i-1]!='0')
		dp[i]=dp[i-1]+dp[i-2];
		else if((str[i-2]-'0')*10 + str[i-1]-'0'>26 && str[i-1]!='0')
		dp[i]=dp[i-1];
	}
	cout<<dp[n]<<endl;
    }
    	cin>>str;
}
}
