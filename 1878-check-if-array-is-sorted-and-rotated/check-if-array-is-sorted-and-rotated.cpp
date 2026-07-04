class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        int j=0;
        for(int i=1;i<n;i++){
            if(nums[i]<nums[j]){
                c++;
               
            }
            j++;
        }
        if(nums[0]<nums[n-1])c++;

        return c<=1;
    }
};