class Solution {
public:
    int maxArea(vector<int>& heights) {
        
        int i=0;
        int j=heights.size()-1;
        int max_area=0;

        while(i<j){
            
            int area=min(heights[i],heights[j])*(j-i);
            max_area=max(max_area,area);

            if(heights[i]<=heights[j]){
                i++;
            }
            else if(heights[i]>=heights[j]){
                j--;
            }
            
        }
    return max_area;}
};
