// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

//WE ARE USING SMART BRUTE FORCE(MEMOIZATION)
class Solution {
  public:
  
  // THIS IS THE BOTTOM-UP METHOD
  //TOP DOWN METHOD IS RECURSIVE ONE(DFS)
  int mod=1e9+7;
    int uniquePaths(int n, int m, vector<vector<int>> grid) {
      int dp[n][m];
      memset(dp,0,sizeof(dp)); //declaring all elements as 0 till size of dp
      for(int i=0;i<m;i++)
      {
          if(grid[0][i]==1)
          {
              dp[0][i]=1;
          }
          else
          break;
      }
      for(int i=0;i<n;i++)
      {
          if(grid[i][0]==1)
          {
              dp[i][0]=1;
          }
          else
          break;
      }
        for(int i=1;i<n;i++)
      {
          for(int j=1;j<m;j++)
      {
          if(grid[i][j]==1)
          {
              dp[i][j]=(dp[i][j-1]%mod + dp[i-1][j]%mod) %mod;
          }
      }
      }
      return dp[n-1][m-1];
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,x;
        cin>>n>>m;
        
        vector<vector<int>> grid;
        
        for(int i=0; i<n; i++)
        {
            vector<int> col;
            for(int j=0; j<m; j++)
            {
                cin>>x;
                col.push_back(x);
            }
            grid.push_back(col);
        }

        Solution ob;
        cout << ob.uniquePaths(n,m,grid) << endl;
    }
    return 0;
}  // } Driver Code Ends
