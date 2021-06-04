#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
int main()
{
    int t,i,k;
    cin>>t;
    for(k=1;k<=t;k++)
    {
        vector<int>arr;
        long int n,count=0,j;
        cin>>n;
        char str[200001];
        for(i=0;i<n;i++)
        {
            cin>>str[i];
        }
        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                count=1;
                arr.push_back(count);
            }
            else
            {
                count=0;
                if(str[i-1]==str[i] || str[i-1]>str[i])
                    count=1;
                else if(str[i-1]<str[i])
                {
                    j=i;
                    count++;
                    while(str[j-1]<str[j] && j>0)
                    {
                        count++;
                        j--;
                    }
                }
                arr.push_back(count);
            }
        }
        cout<<"Case #"<<k<<": ";
        for(auto q=arr.begin();q!=arr.end();q++)
        {
            cout<<*q<<" ";
        }
        cout<<"\n";
        arr.clear();
    }
}