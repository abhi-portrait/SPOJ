#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[100005];
int main()
{
ll t,n,c,i,mid;
cin>>t;
while(t--)
{
    cin>>n>>c;
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    ll l=0,h=a[n-1]-a[0];
    int count2=INT_MAX;
    while(l<h)
    {
     mid=l+(h-l)/2;
     if (count2==mid)
        break;
     else
        count2=mid;
     //cout<<l<<" "<<h<<" "<<mid<<endl;
     ll count=1;
     ll ans=a[0];
     for(i=1;i<n;i++)
     {
      if(a[i]-ans>=mid)
      {
        count++;
        ans=a[i];
      }
     }
     if(count>=c)
        l=mid;
     else
        h=mid;
    //cout<<l<<" "<<h<<endl;
    }
    cout<<l<<endl;
}
}
