class Solution {
   public:
    
    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        set <string> seen;
        int x = strs.size();
        vector<map<char, int>> wordmap(x);

        for (int i = 0; i < strs.size(); i++) {
            for (char j : strs[i]) {
                wordmap[i][j]++;
            }
        }

        vector<vector<string>> result;
        vector<string> group;

        for (int i = 0; i < wordmap.size(); i++) {
            if(seen.count(strs[i])==0){
            group.push_back(strs[i]);

            
            for (int j = i + 1; j < wordmap.size(); j++) {
                if (wordmap[i] == wordmap[j]) {
                   
                    group.push_back(strs[j]);
                    seen.insert(strs[j]);
                }
            }
            if(group.empty()!=true){
                result.push_back(group);
            }
            group.clear();
            }
        }
    
    return result;
    }
};
