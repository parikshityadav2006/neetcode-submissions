class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set <int> visited;
        for(int i:nums){
            if(visited.count(i)==1){return true;}
            visited.insert(i);
        }
    return false;
}
};