class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size()/2;
        map<int,int> mpp;

        for(int i=0;i<2*n;i++){
            mpp[nums[i]]++;
        }

        int ans=0;
        for(auto &it:mpp){
            if(it.second==n){
                ans=it.first;
                break;
            }
        }
        return ans;
    }
};