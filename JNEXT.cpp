
#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
{
 int i,n,t,temp;
 cin>>t;
 while(t--)
 {
     cin>>n;
     for(i=0;i<n;i++)
     {
         cin>>temp;
         v.push_back(temp);
     }
     int pos=-1;
     for(i=n-1;i>0;i--)
     {
         if(v[i-1]<v[i])
         {
             pos=i-1;
             break;
         }

     }
     vector<int>::iterator it,ik;
     ik=v.begin()+pos;
     int c;

     if(pos!=-1)
     {
         sort(v.begin()+pos+1,v.end());
         it=upper_bound(v.begin()+pos+1,v.end(),v[pos]);

         c=*it;
         *it=v[pos];
         v[pos]=c;
         sort(v.begin()+pos+1,v.end());
          for(i=0;i<n;i++)
        cout<<v[i];
     cout<<endl;
     }
     else
        cout<<"-1"<<endl;


     v.clear();
 }

}
