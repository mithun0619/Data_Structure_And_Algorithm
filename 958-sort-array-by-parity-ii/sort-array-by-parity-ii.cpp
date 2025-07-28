class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        vector<int> r(n);
        int odd=1;
        int even=0;

        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                r[even]=nums[i];
                even+=2;
            }else{
                r[odd]=nums[i];
                odd+=2;
            }
        }
        return r;
    }
};