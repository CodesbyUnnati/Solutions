class Solution {
public:
    int majorityElement(vector<int>& nums) {
//array[]/7 7 5 5| 7 6|5 5 7 7| 7 7 7
//candid//7 7 7 7  7 7 5 5 5 5  7 7 7 
//count// 1 2 1 0  1 0 1 2 1 0  1 2 3   
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