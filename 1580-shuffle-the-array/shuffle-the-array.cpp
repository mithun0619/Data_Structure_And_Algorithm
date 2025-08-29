class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(nums.size(),0);
        int i=0;
        int j=nums.size()/2;
        int k=0;

        while(i<j){
            ans[k]=nums[i];
            k+=2;
            i++;
        }
        k=1;

        while(j<nums.size()){
            ans[k]=nums[j];
            j++;
            k+=2;

        }
        return ans;
    }
};