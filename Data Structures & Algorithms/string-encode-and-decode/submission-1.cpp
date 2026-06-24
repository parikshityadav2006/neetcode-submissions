class Solution {
   public:
    string encode(vector<string>& strs) {
        string s = "";
        for (string str : strs) {
            int len = str.size();

            string temp = to_string(len) + "/" + str;
            s = s + temp;
            temp.clear();
        }

        return s;
    }

    vector<string> decode(string s) {
        vector<string> strs;

        string len = "";
        int i=0;
        while (i < s.size()) {
            if (s[i] != '/') {
                len = len + s[i];
                i++;
            } 
            else {
                i = i + 1;
                int size = stoi(len);
                len.clear();
                string temp = "";
                for (int j = i; j < i + size; j++) {
                    temp = temp + s[j];
                }
                strs.push_back(temp);
                temp.clear();
                i=i+size;

            }
        }
    return strs;
    };
};
