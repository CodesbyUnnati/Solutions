
#include <bits/stdc++.h>

using namespace std;

void change(int V)
{
    int deno[]={1,2,5,10,20,50,100,200,500,2000};
    int n=10;
    vector<int>ans;
    for(int i=n-1;i>=0;i--)
    {
        while(V>=deno[i])
        {
            V-=deno[i];
            ans.push_back(deno[i]);
        }
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}


int main()
{
    int V;
    cin>>V;
    change(V);

    return 0;
}
