#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll>v;
ll n,k;
ll search(ll x)
{
    ll i,count=0;
    for(i=0;i<n;i++)
    {
       if(v[i]/x>0)
          {
            count+=v[i]/x;
            if(count>=k)
                return 1;
          }
          else if(v[i]/x<=0 && count<k)
          {
             return 0;
          }

    }
    return 0;
}
int main()
{
  ll t,i,l,r,q,c=0;
  cin>>t;
  while(t--)
  {
      cin>>n>>k;
      c=0;
      for(i=0;i<n;i++)
      {
         cin>>q;
         c+=q;
         v.push_back(q);
      }
      if(c<k)
        cout<<"0"<<endl;
      else
      {


        sort(v.rbegin(),v.rend());

        l=1;
        r=v[0]+1;
        ll mid,temp;
       while(l<=r)
        {

           mid=(l+r)/2;
           temp=search(mid);
           if(temp==0 && search(mid-1)==1)
           {
               cout<<mid-1<<endl;
               break;
           }
           else if(temp==0)
            r=mid-1;
           else l=mid+1;

        }
      }
      v.clear();
  }
}
