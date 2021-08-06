class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        if(nums.size()==1){
            return;
        }
        
        
        int idx1;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                idx1=i;
                break;
            }
        }
        //if 5 4 3 2 1 then i<0 , it will go out of bound so reverse the array
        if(idx1<0){
            reverse(nums.begin(),nums.end());
        }else{
            
            int idx2=0;
            for(int i=nums.size()-1;i>=0;i--){
                if(nums[i]>nums[idx1]){
                    idx2=i;
                    break;
                }
            }
        
            swap(nums[idx1],nums[idx2]);
            //sort baki ke element
            sort(nums.begin()+idx1+1,nums.end());
            
            
        }
        
        
        
    }
};