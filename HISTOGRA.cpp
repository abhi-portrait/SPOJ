#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[100005],min_f[100005],min_b[100005];
stack<ll>s;
int main()
{
    ll n,i;
    cin>>n;
    while(n!=0)
    {
        for(i=0;i<n;i++)
            cin>>a[i];
            ll k;
            for(i=0;i<n;i++)
            {
                if(s.empty())
                    {s.push(i);continue;}
                 k=s.top();
                if(a[i]>=a[k])
                s.push(i);
                else
                {

                    min_f[k]=i-1;
                    s.pop();
                    i--;
                }
            }
            while(!s.empty())
            {
                ll k=s.top();
                min_f[k]=n-1;
                s.pop();
            }
             for(i=n-1;i>=0;i--)
            {
                if(s.empty())
                    {s.push(i);continue;}
                 k=s.top();
                if(a[i]>=a[k])
                s.push(i);
                else
                {

                    min_b[k]=i+1;
                    s.pop();
                    i++;
                }
            }
            while(!s.empty())
            {
                ll k=s.top();
                min_b[k]=0;
                s.pop();
            }

                ll m=INT_MIN;
                 for(i=0;i<n;i++)
               {
                   m=max(m,(min_f[i]-min_b[i]+1)*a[i]);
               }
               cout<<m<<endl;
               cin>>n;
    }
}
