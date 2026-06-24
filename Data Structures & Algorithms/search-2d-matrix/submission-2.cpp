class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int low=0;
       int high=matrix.size()-1;
    
        while(low<=high){
           int mid= low+ (high-low)/2;
           
           if(matrix[mid][0]<=target && matrix[mid][matrix[mid].size()-1]>=target){
            auto it=lower_bound(matrix[mid].begin(),matrix[mid].end(),target);
            return (it!=matrix[mid].end() && *it==target) ? true:false;
           }
            else if(matrix[mid][0]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
    return false;
    }
};
