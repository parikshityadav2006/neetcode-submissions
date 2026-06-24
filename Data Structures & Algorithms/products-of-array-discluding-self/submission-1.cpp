class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector <int> res;
        for(int i=0;i<nums.size();i++){
            int temp=1;
            for(int j=0;j<nums.size();j++){
                if(j!=i){
                    temp=temp*nums[j];
                }
               else{
                    continue;}
        }
        res.push_back(temp);
        temp=1;
        }
    return res;
    }
};
