#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;
int main()
{
    int t,i;
    long long int n,k;
    cin>>t;
    vector<int>arr;
    for(i=1;i<=t;i++)
    {
        long long int j,l;
        int count=0;
        cin>>n>>k;
        char s[200000];
        for(l=1;l<=n;l++)
            cin>>s[l];
        for(j=1;j<=n/2;j++)
        {
            if(s[j]!=s[n-j+1])
                count++;
        }
        arr.push_back(abs(count-k));
    }
    long int q=1;
    for(auto i=arr.begin();i!=arr.end();i++)
    {
        cout<<"Case #"<<q<<": "<<*i<<"\n";
        q++;
    }
}