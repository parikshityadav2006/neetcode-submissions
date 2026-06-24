class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
       
        if(nums.empty()==true){
            return 0;
        }
        if(nums.size()==1){
            return 1;
        }

        int res=1;
        vector <int> seq;
        sort(nums.begin(),nums.end());
        
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1){
                res++;
            }
            else if(nums[i]==nums[i-1]){
                continue;
            }
            else{
                seq.push_back(res);
                res=1;
            }

        }
        seq.push_back(res);
        sort(seq.begin(),seq.end());
        return (seq.back());
    }
};
