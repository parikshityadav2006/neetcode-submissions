class Solution {
   public:
    bool isAnagram(string s, string t) {
        map<char, int> countS;
        map<char, int> countT;

        for (int i = 0; i < s.size(); i++) {
            countS[s[i]]++;
        }
        for (int i = 0; i < t.size(); i++) {
            countT[t[i]]++;
        }
        return countS == countT;
    }
};
