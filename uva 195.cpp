#include<bits/stdc++.h>
using namespace std;
int main()
{
    char word[1000];
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>word;
        sort(word,word+strlen(word),comparator);
        cout<<word<<endl;

        while(next_permutation(word,word+strlen(word),comparator))
        {
             cout<<word<<endl;
        }

    }
    return 0;
}
