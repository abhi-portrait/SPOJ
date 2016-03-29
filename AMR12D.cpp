#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,l,i,j;
    char str[100];
    cin>>t;
    while(t--)
    {
        int flag=0;
        cin>>str;
        l=strlen(str);
        for(i=0,j=l-1;i<j;i++,j--)
        {
            if(str[i]!=str[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
