#include<bits/stdc++.h>
using namespace std;
int b[50005],h[50005],w[50005],d[50005],maxi=-1,n,v;
double search(double k)
{
    double volume=0.0;
    for(int i=0;i<n;i++)
    {
        if(k>b[i] && k-b[i]<=h[i])
      {
        volume+=w[i]*d[i]*(k-b[i]);
      }
       else if(k>b[i] && k-b[i]>h[i])
            {volume+=w[i]*d[i]*(h[i]);

            }
    }

        return volume;
}
double binary()
{
   int x=0;
        double l=0.0,temp;
        double r=maxi;
        double mid;
        while(l<=r)
        {
            x++;
            mid=(l+r)/2.0;
            temp=search(mid);
            if(temp+.000000001>v)
                r=mid;
            else l=mid;
            if(x>32)
            {

                break;
            }
        }
        return l;
}
int main()
{
    int t,i;
    double p,l,r,mid,temp,c=0;
    ios_base::sync_with_stdio(false);
    cin>>t;
    while(t--)
    {
        cin>>n;
        c=0;
        maxi=-1;
        for(i=0;i<n;i++)
        {
            cin>>b[i]>>h[i]>>w[i]>>d[i];
            c+=h[i]*w[i]*d[i];
            maxi=max(maxi,b[i]+h[i]);
        }
        cin>>v;
        if(c<v)
            cout<<"OVERFLOW"<<endl;
        else
        {
           double z=binary();
           cout<<setprecision(2)<<fixed<<z<<"\n";

        }

    }
}
