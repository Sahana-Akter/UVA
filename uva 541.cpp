#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[200][200],i,j,sum,rc,pr,cc,pc;
    while(cin>>n)
    {
        if(n==0)
        {
           break;
        }
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                cin>>a[i][j];
            }
        }
        rc=0;
        for(i=1; i<=n; i++)
        {
            sum=0;
            for(j=1; j<=n; j++)
            {
                sum=sum+a[i][j];
            }
            if(sum%2!=0)
            {
                rc++;
                pr=i;
            }
        }
        cc=0;
        for(j=1;j<=n;j++)
        {
            sum=0;
            for(i=1; i<=n; i++)
            {
                sum=sum+a[i][j];
            }
            if(sum%2!=0)
            {
                cc++;
                pc=j;
            }
        }
        if(rc==0&&cc==0)
        {
            cout<<"OK"<<endl;
        }
        else if(rc==1&&cc==1)
        {
            cout<<"Change bit ("<<pr<<","<<pc<<")"<<endl;

        }
        else
        {
            cout<<"Corrupt"<<endl;
        }
    }
    return 0;

}
