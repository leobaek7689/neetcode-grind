class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        // First by columns, we check the last index within the same row.
        // The first index, and move accordingly.

        int row_size = matrix.size();
        int column_size = matrix[0].size();

        // Iterate through each rows
        for(int i = 0; i < row_size; i++)
        {
            // If the last element in the row is less than or equal to the target,
            // Iterate through that column as it should contain the target.
            if(target <= matrix[i][column_size - 1])
            {
                for(int j = 0; j < column_size; j++)
                {
                    if(matrix[i][j] == target)
                    {
                        return true;
                    }
                }
            }
        }

        return false;

    }
};
