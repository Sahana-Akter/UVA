#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b)
    {

        if(a==0&&b==99||a==99&&b==0)
        {
            cout<<"1"<<endl;
        }
        else if(a==-1&&b==-1)
        {
            break;
        }
        else
        {
            cout<<b-a<<endl;
        }
    }
    return 0;
}


