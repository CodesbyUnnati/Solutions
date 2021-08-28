class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
//         set<int>hashSet;
//         for(int i:nums){
//             hashSet.insert(i);
//         }
//         int longest_sequence=0;
        
//         for(int i:nums)
//         {
//             if(!hashSet.count(i-1)){
//                 int new_num=i;
//                 int present_sequence=1;
                
//                 while(hashSet.count(new_num+1))
//                 {
//                     new_num+=1;
//                     present_sequence+=1;   
                    
//                 }
//                 longest_sequence=max(longest_sequence,present_sequence);
//             }
//         }
//         return longest_sequence;
        unordered_set<int> s(begin(nums), end(nums));
	int longest = 0;
	for(auto& num : s) {
        if(s.count(num - 1)) continue;
		int j = 1;
		while(s.count(num + j)) j++;
		longest = max(longest, j);
	}
	return longest;
    }
    
};