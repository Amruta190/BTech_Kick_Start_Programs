#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    vector<int>ar;
    for(i=1;i<=t;i++)
    {
        vector<int>a;
        long int n,arr[300001],j;
        cin>>n;
        for(j=0;j<n;j++)
            cin>>arr[j];
        a.clear();
        for(j=1;j<n;j++)
        {
            a.push_back(arr[j-1]-arr[j]);
        }
        if(equal(a.begin()+1,a.end(),a.begin()))
            ar.push_back(n);
        else
        {
            long int p=0;
            vector<int>:: iterator k;
            for(k=a.begin();k!=a.end();k++)
            {
                p++;
                if(*k!=*(k+1))
                {
                    arr[p+1]=(arr[p-1]-arr[p])+arr[p];
                    break;
                }
            }
            a.clear();
            for(j=1;j<n;j++)
            {
                a.push_back(abs(arr[j-1]-arr[j]));
            }
            p=0;
            for(auto q=a.begin();q!=a.end();q++)
            {
                p++;
                if(*q!=*(q+1))
                    break;
            }
            ar.push_back(p+1);
        }
    }
    int q=1;
    for(auto i=ar.begin();i!=ar.end();i++)
    {
        cout<<"Case #"<<q<<": "<<*i<<"\n";
        q++;
    }
}