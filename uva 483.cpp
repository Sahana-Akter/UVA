#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,j;
    getline(cin,s);
    for(i=0;i<s.size();i++)
    {
        if(s[i]==' ')
        {
            for(j=i;i>s[i];j--)
            {
               cout<<s;
            }
        }
    }


}
