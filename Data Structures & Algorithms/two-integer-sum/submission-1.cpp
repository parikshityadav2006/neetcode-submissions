class Solution {
   public:
    int y;
    int z;

    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            auto x = find(nums.begin()+i+1, nums.end(), target - nums[i]);
            if (x != nums.end()) {
                y = i;
                z = x - nums.begin();
                break;
            }
        }
        vector<int> result;
        if (z > y) {
            result.push_back(y);
            result.push_back(z);
        } else {
            result.push_back(z);
            result.push_back(y);
        }
        return result;
    }
};
