class Solution {

    void dfs(vector<vector<int>>&graph,vector<vector<int>>&result,vector<int>&path,int u)
    {
        path.push_back(u);
        if(u==graph.size()-1) //traversed till last
            result.push_back(path);
        else
            for(auto i:graph[u]) dfs(graph,result,path,i);
        //so that it creates new path from start, not repeat it
        path.pop_back();
    }
    public:
    //Apply dfs to search all paths from source to destination
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int>path;
        vector<vector<int>>result;
        dfs(graph,result,path,0);
        return result;
    }
};