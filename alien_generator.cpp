#include<iostream>
using namespace std;
int fun(int j,int g)
{
    int cnt=0,sum=0;
    for(int i=j;sum<g;i++)
    {
        sum+=i;
    }
    if(sum==g)
        return 1;
    else
        return 0;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int g,cnt=0;
        cin>>g;
        for(int j=1;j<=g;j++)
        {
            int k=fun(j,g);
            if(k==1)
                cnt++;
        }
        cout<<"Case #"<<i+1<<": "<<cnt<<"\n";
    }
}