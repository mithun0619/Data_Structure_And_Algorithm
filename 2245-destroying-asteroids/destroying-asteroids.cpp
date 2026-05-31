class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& nums) {
        long long currmass=mass;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(currmass>=nums[i]){
                currmass+=nums[i];
            }else{
                return false;
            }
        }
        return true;
    }
};