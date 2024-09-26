class Solution {
public:
// TC - O(N)
// SC - O(1)
    int maxArea(vector<int>& height) {
        //find area of container, i.e l x b
        int right=height.size()-1;
        int left=0;
        int ans=INT_MIN;
        while(left<right)
        {
            if(height[left]<height[right])
            {   ans=max( height[left] * (right-left), ans );
                left++;
            }
            else
            {
                ans=max( height[right]* (right-left), ans);
                right--;
            }

        }
        return ans;
    }
};
