class Solution {
public:
    int solve(vector<int>&arr,int k)
    {
           
        if(k==0) return 0;
        
        int n=arr.size();
       
        int distinct_elements=0;
        int total=0;
        int j=0;
        vector<int>count(200002);
        for(int i=0;i<n;i++)
        {
            if(count[arr[i]]==0)
            {
                distinct_elements++;
                count[arr[i]]++;    
            }
            else
            {
                count[arr[i]]++;
            }
            if(distinct_elements<=k)
            {
                total+=(i-j+1);
            }
            else
            {
                while(j<n && j<=i && distinct_elements>k)
                {
                    count[arr[j]]--;
                    if(count[arr[j]]==0)
                    distinct_elements--;
                    
                    j++; //move forward pointer
                }
                total+=(i-j+1);
            }
        }
        return total;
    }
    
    
    
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return solve(nums,k)-solve(nums,k-1);
    }
    
    
};