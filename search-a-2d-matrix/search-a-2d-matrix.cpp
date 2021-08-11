class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(!matrix.size()) return false;
        
        int n=matrix.size();
        int m=matrix[0].size();
        int low=0;
        int high=(n*m)-1;
        while(low<=high)
        {
            //make imaginary index from 0 till m*n to make the matrix as an array and do binary search on it
            int mid=(low+high)/2;
            if(matrix[mid/m][mid%m]==target)//calculate index
                return true;
            if(matrix[mid/m][mid%m]>target)
                high=mid-1;
            else
            {
                low=mid+1;
            }
        }
        return false;
        
    }
};


//  int i=0;int j=M-1;
// 	   while(i<N && j>=0)
// 	   {
// 	       if(mat[i][j]==X)
// 	       return 1;
	   
// 	   if(mat[i][j]>X)
// 	   {
// 	       j--;
// 	   }
// 	   else
// 	   {
// 	       i++;
// 	   }
// 	   }