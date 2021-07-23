//I
class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        vector<int>ans(n);
        if(n>=1)ans[0]=nums[0];
        if(n>=2) 
            ans[1]=max(nums[0],nums[1]);
        for(int i=2;i<n;i++)
        {
            ans[i]=max(ans[i-1],ans[i-2]+nums[i]);
        }
        return ans[n-1];
    }
};

// II

class Solution {
public:
    int solve(vector<int>nums) {
        int n=nums.size();
        if(n==0) return 0;
        vector<int>ans(n);
        if(n>=1)
            ans[0]=nums[0];
        if(n>=2)
            ans[1]=max(nums[0],nums[1]);
        for(int i=2;i<n;i++)
        {
            ans[i]=max(ans[i-1],ans[i-2]+nums[i]);
        }
        return ans[n-1];
    }
    
    int rob(vector<int>& nums)
    {
        int n=nums.size();
        if(n==0) return 0;
        if(n==1) return nums[0];
        
        return max(solve(vector<int>(nums.begin(),nums.end()-1)), solve(vector<int>(nums.begin()+1,nums.end())));
    }
};

// III

class Solution {
public:
    unordered_map<TreeNode*, int>mp;
    int rob(TreeNode* root) {
        if(root==NULL) return 0;
        
        if(mp.count(root))
            return mp[root];
        
        int total=0;
        if(root->left)
        {
            total+=rob(root->left->left)+rob(root->left->right);
        }
        if(root->right)
        {
            total+=rob(root->right->left)+rob(root->right->right);
        }

        return mp[root]=max(root->val+total, rob(root->left)+rob(root->right));
        
    }
};
