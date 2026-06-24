class Solution {
   public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for (int i = 0; i < matrix.size(); i++) {
            if (matrix[i][0] <= target && matrix[i][matrix[i].size() - 1] >= target) {
                auto it = lower_bound(matrix[i].begin(), matrix[i].end(), target);
                return (it != matrix[i].end() && *it == target) ? true : false;
            }
        }
        return false;
    }
};
