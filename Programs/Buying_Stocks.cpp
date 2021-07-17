#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    v.push_back({a[i],i+1});
    sort(v.begin(),v.end());
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int price=v[i].first;
        int stock=v[i].second;
        if(price*stock<=k)
        {
            ans+=stock;
            k-=(price*stock);
        }
       else
       {
           ans+=(k/price);
           k-=price*(k/price);
       }
       
    }
    cout<<ans;
   return 0;
}
