#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t,i,n;
    cin>>t;
    vector<int>arr;
    long int j,a[101],p,q,count=0,k=1,sum=0;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        for(j=1;j<=n;j++)
            cin>>a[j];
        for(p=1;p<=n;p++)
        {
            for(q=1;q<=n-p;q++)
            {
                if(a[q]>a[q+1])
                {
                    int temp=a[q];
                    a[q]=a[q+1];
                    a[q+1]=temp;
                }
            }
        }
        count=0;k=1;sum=0;
        for(j=1;j<=n;j++)
        {
            if(a[j]==a[j+1])
            {
                count=count+k+k;
                j++;
                if(a[j]!=a[j+1])
                    k++;
            }
            else
            {
                count=count+k;
                k++;
            }
        }
        arr.push_back(count);
    }
    q=1;
    for(auto i=arr.begin();i!=arr.end();i++)
    {
        cout<<"Case #"<<q<<": "<<*i<<"\n";
        q++;
    }
}