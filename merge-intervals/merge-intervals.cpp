class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
       vector<vector<int>>ans; 
        if(intervals.size()==0) return ans;
        
        sort(intervals.begin(),intervals.end());// first sort the interval
        vector<int>first_element_Interval=intervals[0]; //a vector of size 2 is put into this vector
        
        for(auto it_second:intervals)
        {
            if(it_second[0]<=first_element_Interval[1])// check if 2nd intervals 1st is lesser than 1st intervals 2nd
               
            {
                first_element_Interval[1]=max(it_second[1],first_element_Interval[1]); //if yes merge it, or write max of both upper bound
            }
            else   
            {
                //push back in answer
                ans.push_back(first_element_Interval);
                first_element_Interval=it_second; //update it
            }
        }
        ans.push_back(first_element_Interval);
        return ans;
    }
};