class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>res;
        int row=matrix.size();
        int col=matrix[0].size();
        int top=0;
        int left=0;
        int bottom=row-1;
        int right=col-1;
        while(left<=right && top<=bottom)
        {
            for(int i=left;i<=right;i++)
            {
                res.push_back(matrix[top][i]);
            }
            top++;
            for(int j=top;j<=bottom;j++)
            {
                res.push_back(matrix[j][right]);
            }
            right--;
            if(top<=bottom)
            {
                for(int k=right;k>=left;k--)
                {
                    res.push_back(matrix[bottom][k]);
                }
            }
            bottom--;
            if(left<=right)
            {
                for(int p=bottom;p>=top;p--)
                {
                    res.push_back(matrix[p][left]);
                }
            }
            left++;
        }
        return res;
        
    }
};