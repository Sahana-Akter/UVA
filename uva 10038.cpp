#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,temp,a[4000],s[4000],c;
    while(cin>>n)
    {
       c=1;

        for(i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        for(i=1; i<n; i++)
        {
           s[i]=abs(a[i]-a[i+1]);

        }
        sort(s,s+i);
        for(i=1;i<n;i++)
        {
            if(s[i]!=i)
            {
                c=0;
                break;

            }
        }
        if(c==0)
        {
            cout<<"Not jolly"<<endl;
        }
        else
        {
            cout<<"Jolly"<<endl;
        }
    }
    return 0;

}
