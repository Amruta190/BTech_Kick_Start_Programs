#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t,i,z=0;
    cin>>t;
    vector<char>arr;
    vector<char>ap[26];
    for(i=1;i<=t;i++)
    {
        int n,a[101],j,k;
        ++z;
        cin>>n;
        for(j=1;j<=n;j++)
            cin>>a[j];
        char ch='A';
        ap[z].push_back(ch);
        for(j=1;j<=n;j++)
        {
            if(j%2==0)
            {
                char ch='Y';
                for(k=1;k<=a[j];k++)
                {
                    ap[z].push_back(ch);
                    ch--;
                }
            }
            else
            {
                arr.clear();
                char ch='Z';
                for(k=1;k<=a[j];k++)
                {
                    arr.push_back(ch);
                    ch--;
                }
                reverse(arr.begin(),arr.end());
                for(auto q=arr.begin();q!=arr.end();q++)
                    ap[z].push_back(*q);
            }
        }
    }
    int q=1;
    for(int l=1;l<=z;l++)
    {
        for(auto i=ap[l].begin();i!=ap[l].end();i++)
        {
            cout<<"Case #"<<q<<": "<<*i<<"\n";
            q++;
        }
    }
}