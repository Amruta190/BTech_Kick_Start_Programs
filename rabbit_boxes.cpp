#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    vector<int>arr;
    for(i=1;i<=t;i++)
    {
        long long int gij[301][301],count=0;
        long int r,c,j,k;
        cin>>r>>c;
        for(j=1;j<=r;j++)
            for(k=1;k<=c;k++)
                cin>>gij[j][k];
        for(j=1;j<=r;j++)
        {
            for(k=1;k<=c;k++)
            {
                if(gij[j][k]!=0)
                {
                    if(j==r && j==1)
                    {
                        if(k!=c)
                        {
                            if(abs(gij[j][k]-gij[j][k+1])!=1)
                                count=count+(abs(gij[j][k]-gij[j][k+1])-1);gij[j][k+1]=abs(gij[j][k]-gij[j][k+1])-1;
                        }
                    }
                    else if(k==c && k==1)
                    {
                        if(j!=r)
                        {
                            if(abs(gij[j][k]-gij[j+1][k])!=1)
                                count=count+(abs(gij[j][k]-gij[j+1][k])-1);gij[j+1][k]=abs(gij[j][k]-gij[j+1][k])-1;
                        }
                    }
                    else if(j==1 || j==r)
                    {
                        if(k==1 && k!=c)
                        {
                            if(abs(gij[j][1]-gij[j][2])!=1)
                                count=count+(abs(gij[j][1]-gij[j][2])-1);gij[j][2]=abs(gij[j][1]-gij[j][2])-1;
                            if(j==1 && j!=r)
                            {
                                if(abs(gij[j][1]-gij[j+1][1])!=1)
                                    count=count+(abs(gij[j][1]-gij[j+1][1])-1);gij[j+1][1]=abs(gij[j][1]-gij[j+1][1])-1;
                            }
                            if(j==r && j!=1)
                            {
                                if(abs(gij[j][1]-gij[j-1][1])!=1)
                                    count=count+(abs(gij[j][1]-gij[j-1][1])-1);gij[j-1][1]=abs(gij[j][1]-gij[j-1][1])-1;
                            }
                        }
                        else if(k==c && k!=1)
                        {
                            if(abs(gij[j][c]-gij[j][c-1])!=1)
                                count=count+(abs(gij[j][c]-gij[j][c-1])-1);gij[j][c-1]=abs(gij[j][c]-gij[j][c-1])-1;
                            if(j==1 && j!=r)
                            {
                                if(abs(gij[j][c]-gij[j+1][c])!=1)
                                    count=count+(abs(gij[j][c]-gij[j+1][c])-1);gij[j+1][c]=abs(gij[j][c]-gij[j+1][c])-1;
                            }
                            if(j==r && j!=1)
                            {
                                if(abs(gij[j][c]-gij[j-1][c])!=1)
                                    count=count+(abs(gij[j][c]-gij[j-1][c])-1);gij[j-1][c]=abs(gij[j][c]-gij[j-1][c])-1;
                            }
                        }
                        else
                        {
                            if(abs(gij[j][k]-gij[j][k-1])!=1)
                                count=count+(abs(gij[j][k]-gij[j][k-1])-1);gij[j][k-1]=abs(gij[j][k]-gij[j][k-1])-1;
                            if(abs(gij[j][k]-gij[j][k+1])!=1)
                                count=count+(abs(gij[j][k]-gij[j][k+1])-1);gij[j][k+1]=abs(gij[j][k]-gij[j][k+1])-1;
                            if(j==1 && j!=r)
                            {
                                if(abs(gij[j][k]-gij[j+1][k])!=1)
                                    count=count+(abs(gij[j][k]-gij[j+1][k])-1);gij[j+1][k]=abs(gij[j][k]-gij[j+1][k])-1;
                            }
                            if(j==r && j!=1)
                            {
                                if(abs(gij[j][k]-gij[j-1][k])!=1)
                                    count=count+(abs(gij[j][k]-gij[j-1][k])-1);gij[j-1][k]=abs(gij[j][k]-gij[j-1][k])-1;
                            }
                        }
                    }
                    else
                    {
                        if(k!=1)
                        {
                        if(abs(gij[j][k]-gij[j][k-1])!=1)
                            count=count+(abs(gij[j][k]-gij[j][k-1])-1);gij[j][k-1]=abs(gij[j][k]-gij[j][k-1])-1;
                        }
                        if(k!=c)
                        {
                        if(abs(gij[j][k]-gij[j][k+1])!=1)
                            count=count+(abs(gij[j][k]-gij[j][k+1])-1);gij[j][k+1]=abs(gij[j][k]-gij[j][k+1])-1;
                        }
                        if(abs(gij[j][k]-gij[j+1][k])!=1)
                            count=count+(abs(gij[j][k]-gij[j+1][k])-1);gij[j+1][k]=abs(gij[j][k]-gij[j+1][k])-1;
                        if(abs(gij[j][k]-gij[j-1][k])!=1)
                            count=count+(abs(gij[j][k]-gij[j-1][k])-1);gij[j-1][k]=abs(gij[j][k]-gij[j-1][k])-1;
                    }
                }
            }
        }
        arr.push_back(count);
    }
    long int q=1;
    for(auto i=arr.begin();i!=arr.end();i++)
    {
        cout<<"Case #"<<q<<": "<<*i<<"\n";
        q++;
    }
}