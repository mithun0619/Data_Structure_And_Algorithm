class Solution {
public:
    long long totalhr(vector<int> &piles,int hr){
        long long th=0;

        for(int a:piles){
            th+=(a+hr-1)/hr;
        }
        return th;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int maxpile=*max_element(piles.begin(),piles.end());
        int high=maxpile;
        
        while(low<=high){
            int mid=low+(high-low)/2;

            long long th=totalhr(piles,mid);

            if(th<=h){
            
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};