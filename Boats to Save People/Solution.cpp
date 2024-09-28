class Solution {
public:
//Time complexity:O(NlogN)
//Space complexity:O(1)
    int numRescueBoats(vector<int>& people, int limit) {
        int people_count=people.size();
        long long int boat=0;
        int left=0,right=people_count-1;
        sort(people.begin(),people.end());
        while(left<=right)
        {
            // Check if the lightest and heaviest person on the same boat can fit
            if(people[left]+people[right]<=limit)
            {
                // If they can, move on to the next lightest person
                left++;
            }
            // Else Move on to the next heaviest person
                right--;
             // Add a boat for the current group of people  
                boat++;
            
        }
        return boat;
    }
};
