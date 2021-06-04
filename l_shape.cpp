#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    vector<int>arr;
    vector<int>arr1;
    for(i=1;i<=t;i++)
    {
        long int r,c,mat[1001][1001],j,k;
        int count=0;
        cin>>r>>c;
        for(j=1;j<=r;j++)
            for(k=1;k<=c;k++)
                cin>>mat[j][k];
        for(j=1;j<=c;j++)
        {
            count=0;
            for(k=1;k<=r;k++)
            {
                if(mat[j][k]==0)
                    count++;
            }
            if(count==0)
                arr.push_back(j);
        }
    }
}