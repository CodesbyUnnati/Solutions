class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        int n=envelopes.size();
        if(n==0)
            return 0;
        //sort in ascending order of both width and height
        sort(envelopes.begin(),envelopes.end());
        int[] dp=new int[envelopes.length];
        int max=1;
        for(int i=1;i<n;i++)
        {
            dp[i]=1;
            for(int j=0;j<i;j++)
            {
                if(envelopes[i][0]!=envelopes[j][0] && envelopes[i][1]>envelopes[j][1] && 1+dp[j]>dp[i])
                    dp[i]=max(dp[i],dp[j]+1);
                
            
            }
            max=max(max,dp[i]);
        }
        return max;
    }
};
