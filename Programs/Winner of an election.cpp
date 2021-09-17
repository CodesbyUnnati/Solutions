// { Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends

class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        unordered_map<string,int>new_map;
        for(int i=0;i<n;i++)
        {
            new_map[arr[i]]++;
        }
        string name="";
        int max_val=0;
        for(auto it= new_map.begin(); it!=new_map.end();it++)
        {
            string key=it->first;
            int val=it->second;
            
            if(val>max_val)
            {
                max_val=val;
                name=key;
            }
            else if(val==max_val)
            {
               if(key<name)
               name=key;
            }
        }
        
        vector<string>ans;
        ans.push_back(name);
        string temp=to_string(max_val);
        ans.push_back(temp);
        
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}
  // } Driver Code Ends
