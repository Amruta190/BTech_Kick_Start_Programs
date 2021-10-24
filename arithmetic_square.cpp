#include<iostream>
using namespace std;
int max(int a,int b)
{
    return (a>b)?a:b;
}
int check(int a,int b)
{
    if((a+b)%2==0)
        return true;
    else
        return false;
}
int grid[3][3];
int ap()
{
    int a1=((grid[0][1]-grid[0][0])==(grid[0][2]-grid[0][1]))?1:0;
    int a2=((grid[1][0]-grid[0][0])==(grid[2][0]-grid[1][0]))?1:0;
    int a3=((grid[2][1]-grid[2][0])==(grid[2][2]-grid[2][1]))?1:0;
    int a4=((grid[1][2]-grid[0][2])==(grid[2][2]-grid[1][2]))?1:0;
    return a1+a2+a3+a4;
}
int ap2()
{
    int a1=((grid[1][1]-grid[0][0])==(grid[2][2]-grid[1][1]))?1:0;
    int a2=((grid[1][1]-grid[1][0])==(grid[1][2]-grid[1][1]))?1:0;
    int a3=((grid[1][1]-grid[2][0])==(grid[0][2]-grid[1][1]))?1:0;
    int a4=((grid[1][1]-grid[0][1])==(grid[2][1]-grid[1][1]))?1:0;
    return a1+a2+a3+a4;
}
int ap1()
{
    int cnt=0;
    int b1=check(grid[0][0],grid[2][2]);
    if(b1==true)
    {
        grid[1][1]=(grid[0][0]+grid[2][2])/2;
        cnt=ap2();
    }
    int b2=check(grid[2][0],grid[0][2]);
    if(b2==true)
    {
        grid[1][1]=(grid[2][0]+grid[0][2])/2;
        cnt=max(cnt,ap2());
    }
    int b3=check(grid[1][0],grid[1][2]);
    if(b3==true)
    {
        grid[1][1]=(grid[1][0]+grid[1][2])/2;
        cnt=max(cnt,ap2());
    }
    int b4=check(grid[0][1],grid[2][1]);
    if(b4==true)
    {
        grid[1][1]=(grid[0][1]+grid[2][1])/2;
        cnt=max(cnt,ap2());
    }
    return cnt;
}
int main()
{
    int t;
    cin>>t;
    for(int p=0;p<t;p++)
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(i==1 && j==1)
                    continue;
                else
                    cin>>grid[i][j];
            }
        }
        int k=ap();
        int k1=ap1();
        cout<<"Case #"<<p+1<<": "<<k+k1<<"\n";
    }
}