#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j=1,a[2000];
	stack<int>s_ans;
	stack<int>s_store;
	cin>>n;
	while(n!=0)
	{
			for(i=0;i<n;i++)
			cin>>a[i];
		j=1;
		for(i=0;i<n;)
		{

			if(a[i]==j)
			{

				s_ans.push(a[i]);
				j++;
				i++;
			}
		    else if(!s_store.empty() && s_store.top()==j )
			{
				s_store.pop();
				s_ans.push(j);
				j++;
			}
			else if(a[i]!=j && (s_store.empty() || s_store.top()!=j ))
			{
				s_store.push(a[i]);
				i++;

			}
		}
		while(!s_store.empty() && s_store.top()==j)
		{
		        s_store.pop();
				s_ans.push(j);
				j++;
		}

		if(s_ans.top()==n)
		cout<<"yes"<<endl;
		else
		cout<<"no"<<endl;
		cin>>n;
		while(!s_ans.empty())
		s_ans.pop();
		while(!s_store.empty())
		s_store.pop();
	}
}
