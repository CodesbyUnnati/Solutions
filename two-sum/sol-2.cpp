string twoSum(vector<int> nums, int target) {
        int n=nums.size();
        int left=0; int right=n-1;
        sort(nums.begin(),nums.end());
        while(left<right)
    {
        int sum=nums[left]+nums[right];
        if(sum==target){
            return "yes";
        }
        else if(sum>target)
        {
            right--;
        }
        else 
        left++;
        }
        return "no";

    }
};

// Time Complexity= O(N)+O(N LOG N)
//Space= O(1) without storing array, but if you are storing array= O(N)
