// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
	//Function to detect cycle in a directed graph.
	bool dfs(int src,vector<int>&vis,vector<int>&count,vector<int>adj[])
	{
	    vis[src]=1;
	    count[src]=1;
	    for(auto x:adj[src])
	    {
	        if(!vis[x])
	        {
	            bool check=dfs(x,vis,count,adj);
	            if(check) return true;
	        }
	        else if(count[x]) return true;
	    }
	    count[src]=0;
	    return false;
	}

	bool isCyclic(int V, vector<int> adj[]) 
	{
	   	vector<int>vis(V,0);
	   	vector<int>count(V,0);
	   	for(int i=0;i<V;i++)
	   	{
	   	    if(!vis[i])
	   	    {
	   	        bool c=dfs(i,vis,count,adj);
	   	        if(c)
	   	        return true;
	   	    }
	   	}
	   	return false;
	}
};

// { Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

  // } Driver Code Ends
