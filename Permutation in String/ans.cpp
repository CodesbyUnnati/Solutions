// Time Complexity: O(m), where m is the length of s2.

// Building the frequency array takes O(n), where n is the length of s1.
// Sliding the window over s2 takes O(m - n) steps, and for each step, comparing two frequency arrays takes O(26), which is constant.
// Hence, the overall time complexity is O(m).

// Space Complexity: O(1), since the frequency arrays have a fixed size of 26.

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
    int n = s1.length();
    int m = s2.length();
    
    // If s1 is longer than s2, s1's permutation can't be a substring of s2
    if (n > m) {
        return false;
    }
    
    // Frequency arrays to count characters in s1 and the current window of s2
    vector<int> s1Freq(26, 0), s2Freq(26, 0);
    
    // Fill the frequency array for s1 and the first window of s2
    for (int i = 0; i < n; i++) {
        s1Freq[s1[i] - 'a']++;
        s2Freq[s2[i] - 'a']++;
    }
    
    // Sliding window: Check each window of size n in s2
    for (int i = 0; i <= m - n; i++) {
        // If the frequencies match, we found a permutation
        if (s1Freq == s2Freq) {
            return true;
        }
        
        // Slide the window: move one character to the right
        // Remove the first character of the current window from the count
        // Add the next character into the count
        if (i + n < m) {
            s2Freq[s2[i] - 'a']--;  // Remove the leftmost character
            s2Freq[s2[i + n] - 'a']++;  // Add the new rightmost character
        }
    }
    
    // If no permutation found, return false
    return false;
    }
};
