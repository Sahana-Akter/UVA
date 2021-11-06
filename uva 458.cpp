#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000],c;
    int i,len,n;
    while(cin>>s)
    {

        len=strlen(s);
        for(i=0; i<len; i++)
        {
            n=s[i];
            c=n-7;
            cout<<c;

        }
        cout<<endl;
    }
    return 0;

}
