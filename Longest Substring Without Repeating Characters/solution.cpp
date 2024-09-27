class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        int ans = 0;
        int maxLength = 0;
        int freq[256] = {0};

        while (right < s.length()) {
            freq[s[right]]++;
            while (freq[s[right]] > 1) {
                freq[s[left]]--;
                left++;
            }
            ans = max(ans, right - left + 1);
            right++;
        }
        return ans;
    }
};
