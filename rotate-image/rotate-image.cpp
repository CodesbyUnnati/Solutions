class Solution {
public:
    //Time complexity= O(2N^2)
    //Space= O(1)
        void rotate(vector<vector<int>>& matrix) {
            int n=matrix.size();
            for(int i=0;i<n;i++)
            {
                //TRANSPOSE AND REVERSE
                for(int j=0;j<i;j++)
                {
                    swap(matrix[i][j],matrix[j][i]);
                }
            }
             for(int i=0;i<n;i++)
             {

            reverse(matrix[i].begin(),matrix[i].end());
             }
        }
};