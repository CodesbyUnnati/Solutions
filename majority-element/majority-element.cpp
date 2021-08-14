class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int candi=0;
        int count=0;
        for(int i:nums)
        {
            if(count==0)
                candi=i;
            if(candi==i) count++;
            else count--;
            
        }
        return candi;
        
    }
};