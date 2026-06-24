class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set <int> seen(nums.begin(),nums.end());
        return seen.size()<nums.size();
    }
};