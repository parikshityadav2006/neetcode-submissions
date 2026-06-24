class Solution {
public:
    bool isAnagram(string s, string t) {
        
        vector <char> x;
        vector <char> y;
        for(char i: s){
            x.push_back(i);
            
        }
         for(char i: t){
            y.push_back(i);
            
        }
       
        if(x.size()!=y.size()){
            return false;
        }
        sort(x.begin(),x.end());
        sort(y.begin(),y.end());
        
        for(int i=0;i<x.size();i++){
            if(x[i]==y[i]){
                continue;
            }
            else{
                return false;
            }
        }
        return true;
    }

};
