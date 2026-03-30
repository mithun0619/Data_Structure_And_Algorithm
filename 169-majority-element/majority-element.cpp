class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int ans=0;

        for(auto a:nums){
            if(count==0){
                ans=a;
            }
            if(a==ans)count++;
            else{
                count--;
            }
        }
        return ans;
    }
};