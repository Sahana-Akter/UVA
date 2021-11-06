#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum,i,avg,j,x[100],m,a=1;
    while(cin>>n)
    {


        if(n==0)
        {
            break;
        }
        sum=0;
        m=0;
        avg=0;
        for(i=0; i<n; i++)
        {
            cin>>x[i];
            sum=sum+x[i];
        }
        avg=sum/n;
        for(j=0; j<n; j++)
        {
            if(x[j]>avg)
            {
                m=m+(x[j]-avg);
            }
        }
        cout<<"Set #"<<a<<endl<<"The minimum number of moves is "<<m<<"."<<endl;
        a++;
        cout<<endl;

    }
    return 0;

}
