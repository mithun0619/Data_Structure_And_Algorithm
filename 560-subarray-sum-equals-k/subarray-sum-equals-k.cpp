class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        int sum=0;
        for(int st=0;st<n;st++){
            for(int end=st;end<n;end++){
                sum=sum+nums[end];
                if(sum==k){
                    count++;
                }
            }
            sum=0;
        }
        return count;
    }
};