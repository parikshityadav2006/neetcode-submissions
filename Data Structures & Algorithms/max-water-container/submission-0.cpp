class Solution {
public:
    int maxArea(vector<int>& heights) {
        
        map <pair<int,int>,int> area;
        for(int i=0;i<heights.size();i++){
            for(int j=i+1;j<heights.size();j++){
                int ar= min(heights[i],heights[j])*(j-i);
                area[{i,j}]=ar;
            }


        }
    int maxval =INT_MIN;
    for(auto& [key,val]:area){
        maxval=max(maxval,val);
    }
    return maxval;
    }
};
