class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        vector <vector<int>> res;
        
        for (int k = 0; k < nums.size(); k++) {
            int i = k+1 ;
            int j = nums.size() - 1;
            
            
            while (i < j) {
                
                if(nums[i] + nums[j] + nums[k]==0 && i!=k && j!=k ){
                    if(find(res.begin(),res.end(),vector <int> {nums[k],nums[i],nums[j]})==res.end()){
                        res.push_back({nums[k],nums[i],nums[j]});
                        }
                    i++;
                    j--;
                }
                else if (nums[i] + nums[j] + nums[k] < 0) {
                    i++;
                }
                else if(nums[i] + nums[j] + nums[k] > 0){
                    j--;
                }
            }
        }
    return res;}
};
