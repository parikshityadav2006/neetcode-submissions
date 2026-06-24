class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]==nums[j]){
                    if(i==j){
                        continue;
                    }
                    else {
                        return true;
                    }
                }
            }
        };
    return false;
    };
};