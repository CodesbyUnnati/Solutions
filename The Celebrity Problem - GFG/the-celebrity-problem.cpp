// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        int celebrity=0; //asuming it as 1st ele
        for(int i=1;i<n;i++)
        {
            if(M[celebrity][i]==1)
            {
                celebrity=i; //it means 0 index is not celebrity, because 
    //it knows the next person            
            }
        }
        for(int i=0;i<n;i++)
        { //this means i is not even one time traversed, so it is a celeb
            if(i!=celebrity && (M[celebrity][i]==1 || M[i][celebrity]==0)) return -1;
        }
       return celebrity;
        // int in[n] = {0} ; int out[n] = {0} ;
        
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<n;j++)
        //     {
        //         if(M[i][j]==1)
        //         {
        //             in[j]++;
        //             out[i]++;
        //         }
        //     }
        // }
        // for(int i=0;i<n;i++)
        // {
        //     if(in[i]==n-1 && out[i]==0)
        //     return 1;
        // }
        // return -1;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}
  // } Driver Code Ends