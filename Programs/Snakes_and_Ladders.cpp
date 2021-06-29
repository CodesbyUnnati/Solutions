#include<bits/stdc++.h>
using namespace std;
int main()
{
    int snakes;
    int ladders;
    cin>>ladders;
    map<int,int>lad;//to check whether this position has ladder or not, so that we can
    //access it fast, otherwise we have to check for every ladder to determine its start pos.
    map<int,int>snak;
    for(int i=0;i<ladders;i++)
    {
       int u,v; cin>>u>>v; //u=start point of ladder   v= end point of ladder
       lad[u]=v;  //if we use ladder, we can go to v
    }
    cin>>snakes;
    for(int i=0;i<snakes;i++)
    {
        int u,v; cin>>u>>v;
        snak[u]=v;
    }
    int moves=0;
    queue<int>q;
    q.push(1);
    bool found=false;
    vector<int>vis(101,0);
    vis[1]=true;
    while(!q.empty() && !found)
    {
        int sz=q.size();
        while(sz--)
        {
           int t=q.front();
           q.pop();
           for(int die=1;die<=6;die++)
           {
               if(t+die==100)
               found=true;
               if(t+die<=100 and lad[t+die] and !vis[lad[t+die]])
               {
                   vis[lad[t+die]]=true;
                   if(lad[t+die]==100)
                   {
                       found=true;
                   }
                   q.push(lad[t+die]);
               }

               else if(t+die<=100 and snak[t+die] and !vis[snak[t+die]])
               {
                   vis[snak[t+die]]=true;
                   if(snak[t+die]==100)
                   {
                       found=true;
                   }
                   q.push(snak[t+die]);
               }
               else if(t+die<=100 and !vis[t+die] and !snak[t+die] and !lad[t+die])
               {
                   vis[t+die]=true;
                   q.push(t+die);
               }
           }
        }
        moves++;
    }
    if(found)
    cout<<moves;
    else
    {
        return -1;
    }
    

    return 0;
}
//Time Complexity=O(N), where n is the maximum number on the game board, because we are checking each condition till we reach the end.
//Space=O(N), because we are using queue to store all elements
