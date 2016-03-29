#include<bits/stdc++.h>
using namespace std;
char a[101][101];
int visited[101][101],flag=0,r,c;
int d_x[8]={0,-1,-1,-1,0,1,1,1};
int d_y[8]={-1,-1,0,1,1,1,0,-1};
char b[10]={'A','L','L','I','Z','Z','W','E','L','L'};
void dfs(int i,int j,int k)
{
	if(k==9)
	{
	flag=1;
	return;
    }
    int p;
      for(p=0;p<8;p++)
     {
	if(i+d_x[p]>=0 && i+d_x[p]<r && j+d_y[p]>=0 && j+d_y[p]<c && a[i+d_x[p]][j+d_y[p]]==b[k+1] && visited[i+d_x[p]][j+d_y[p]]==0)
	{

		visited[i+d_x[p]][j+d_y[p]]=1;
		dfs(i+d_x[p],j+d_y[p],k+1);
       visited[i+d_x[p]][j+d_y[p]]=0;
	}
}
	visited[i][j]=0;
}
int main()
{

	int t,i,j;
	cin>>t;
	while(t--)
	{
		flag=0;
		cin>>r>>c;
		for(i=0;i<r;i++)
		cin>>a[i];
		memset(visited,0,sizeof(visited));
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
			if(a[i][j]=='A' && flag==0)
			{visited[i][j]=1;dfs(i,j,0);}
			else if(a[i][j]=='A' && flag==1)
			break;
			}
			if(a[i][j]=='A' && flag==1)
			break;
		}
	if(flag==1)
	cout<<"YES"<<"\n\n";
	else
	cout<<"NO"<<"\n\n";
	}

}
