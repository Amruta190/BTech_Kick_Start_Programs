#include<iostream>
#include<vector>
using namespace std;
int main()
{
    long int t,j;
    cin>>t;
    vector<int>a;
    for(j=1;j<=t;j++)
    {
        long int arr[101],i,n,count=0;
        cin>>n;
        for(i=1;i<=n;i++)
            cin>>arr[i];
        for(i=2;i<n;i++)
        {
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
                count++;
        }
        a.push_back(count);
    }
    long int q=1;
    for(auto i=a.begin();i!=a.end();i++)
    {
        cout<<"Case #"<<q<<": "<<*i<<"\n";
        q++;
    }
}