#include<iostream>
using namespace std;
void swap(int *a, int *b)
{   
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void sort(int k, int arr[],int mat[][2])
{
    int i,j;
    for(i=0;i<k;i++)
    {
        for (j=0;j<k-i-1;j++)
        {
            if (mat[j][0] > mat[j+1][0]) 
            {
                swap(&arr[j],&arr[j+1]);
                swap(&mat[j][0],&mat[j+1][0]);
                swap(&mat[j][1],&mat[j+1][1]);
            }
        }
    }
}
int main()
{
    int t;
    cin>>t;
    for(int p=0;p<t;p++)
    {
        int n,c,cnt=1,q=2;
        cin>>n>>c;
        int cnt1=n;
        int mat[n][2],arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>mat[i][0]>>mat[i][1];
            arr[i]=mat[i][1]-mat[i][0];
        }
        sort(n,arr,mat);
        int max=9999999999999;
        for(int i=0;i<n;i++)
        {
            if(max<mat[i][1])
                max=mat[i][1];
        }
        // int k=mat[0][0];
        while(cnt<c)
        {
            for(int k=mat[0][0];k<=max;k++)
            {
                int flag=0;
                for(int i=0;i<n;i++)
                {
                    if(arr[i]>=q && mat[i][0]<=k)
                    {
                        flag=1;
                        cnt1+=1;
                        mat[i][0]=k;
                        arr[i]-=1;
                    }
                }
                if(flag==1)
                    cnt+=1;
            }
            // k++;
        }
        cout<<"Case #"<<p+1<<": "<<cnt1<<"\n";
    }
}