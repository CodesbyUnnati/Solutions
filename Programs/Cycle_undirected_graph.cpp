// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution 
{
    public:
        bool dfs(int src,int parent,vector<int>adj[],vector<bool>& vis)
        {
            vis[src]=true; //make visited true
            for(auto x: adj[src]) //check adj nodes to src
          {
              if(!vis[x])
            {
                if(dfs(x,src,adj,vis)) return true;
            }
            else if(x!=parent) return true; //if ! parentnode then cycle, if yes then no cycle
           
          } 
           return false;
        }
        
	bool isCycle(int V, vector<int>adj[])
	{
	    vector<bool>vis(V,false);//making all as 0
	    for(int i=0;i<V;i++)
	    {
	        if(!vis[i])
	        {
	            bool b=dfs(i,-1,adj,vis); //-1 is parent of root
	            if(b) return true; //cycle
	            
	        }
	    }
	    return false;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isCycle(V, adj);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}  // } Driver Code Ends
