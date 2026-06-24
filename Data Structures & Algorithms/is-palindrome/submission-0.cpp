class Solution {
public:
    bool isPalindrome(string s) {
        for(int i=0;i<s.size();i++){
            if (s[i]>='A' && s[i]<='Z'){
                s[i]+=32;
            }
            if(isdigit(s[i])){
                continue;
            }
            if(s[i]<'A' || s[i]>'z' || (s[i]>'Z' && s[i]<'a')){
                for(int j=i;j<s.size()-1;j++){
                    s[j]=s[j+1];
                }
                s.resize(s.size()-1);
                i--;
            }
        }
        string x=s;
        reverse(s.begin(),s.end());
        if(x==s){
            return true;
        }
        else{
            return false;
        }
    }
};
