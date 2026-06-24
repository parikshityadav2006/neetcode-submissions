class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high= *max_element(piles.begin(),piles.end());
        int res;
        
        while(low<=high){
            int mid=low+(high-low)/2;
            int total_time=0;
            
            for(int p:piles){
            total_time+=ceil(static_cast<double>(p)/mid);
            }  
            if(total_time<=h){
                res=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }

        }
    return res;
    }
};
