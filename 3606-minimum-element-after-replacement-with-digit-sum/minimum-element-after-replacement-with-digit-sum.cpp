class Solution {
public:
    int minElement(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            while(nums[i]>0){
            int a=nums[i]%10;
            sum+=a;
            nums[i]=nums[i]/10;
            }
            mini=min(sum,mini);
            sum=0;
        }
        return mini;
    }
    
};