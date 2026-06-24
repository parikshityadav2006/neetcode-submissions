class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        map <int,int> freq;
        int S=nums.size();

        for(int i=(S-1);i>-1;i--){
            freq[nums[i]]++;
        }

        vector <pair<int,int>> vec;
        
        for(auto& a: freq){
        vec.push_back(a);
        }
        sort(vec.begin(),vec.end(),[](pair<int,int>& a,pair<int,int>& b){
            return a.second>b.second;
        });
        vector <int> ans;
        
        for(int j=0;j<k;j++){
            ans.push_back(vec[j].first);

        }
    
        return ans;
    }
};
