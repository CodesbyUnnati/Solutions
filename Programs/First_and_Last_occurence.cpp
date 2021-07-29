class Solution {
public:
    int lower_bound(vector<int>& nums, int target) {
    int l = 0, r = nums.size()-1;
    while (l <= r) {
        int mid = (r+l)/2;
        if (nums[mid] < target)
            l = mid+1;
        else
            r = mid-1;
    }
    return l;
}
    
    vector<int> searchRange(vector<int>& nums, int target) // this nums is pointing to main function nums, a pointer is created, which is pointing to the start of an array, that has been declared in main.
    {
        int idx1 = lower_bound(nums, target);
    int idx2 = lower_bound(nums, target+1)-1;
    if (idx1 < nums.size() && nums[idx1] == target)
        return {idx1, idx2};
    else
        return {-1, -1};
    }
};
