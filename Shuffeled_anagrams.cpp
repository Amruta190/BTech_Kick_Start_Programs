#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<string> v;
void permute(string str,string out)
{
    if(str.size()==0)
    {
        v.push_back(out);
        return;
    }
    for(int i=0;i<str.size();i++)
    {
        permute(str.substr(1),out+str[0]);
        rotate(str.begin(),str.begin()+1,str.end());
    }
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int flag=0;
        string st,str;
        cin>>st;
        str=st;
        permute(str,"");
        for(int k=0;k<v.size();k++)
        {
            string r=v[k];
            int j;
            for(j=0;j<r.size();j++)
            {
                if(st[j]==r[j])
                    break;
            }
            if(j==r.size())
            {
                cout<<"Case #"<<i+1<<": "<<r<<"\n";
                v.empty();
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"Case #"<<i+1<<": IMPOSSIBLE\n";
    }
}