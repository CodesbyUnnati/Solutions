#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        int min=INT32_MAX;
        int n=strs.size(); //size
        if(n==0)
        {
            return "";
        }
        if(n==1)
        {
            return strs[0];
        }
        //to calculate min size of str 
        for(int i=0;i<n;i++)
        {
            int size=strs[i].size();
            if(size<min)
            {
                min=size;
            }
        }
        string res="";
        for(int i=0;i<min;i++)
        {
            char c=strs[0][i]; //check every char of each word by taking first str as reference. A[0][i]
            /*
            abc A[0][i]...i=1,2,3... till size of first word
            abb A[1] 
            abcf A[2]
            abd  A[3]
            */
           for(int j=1;j<n;j++)
           {
               if(c!=strs[j][i]) // i will be 0...then 1...2
               {
                   return res;
               }
           }
           res+=c;
        }
        return res;
    }
};
int main()
{
    vector<string> vect;
    vect.push_back("app");
    vect.push_back("apps");
    vect.push_back("apple");
    Solution obj;
   cout<<obj.longestCommonPrefix(vect);
    return 0;
}
