class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();

        unordered_map<int,int> mp;

        for(int i=0;i<n;i++){
            int cp=target-nums[i];
            if(mp.count(cp)){
                return {mp[cp],i};
            }
            mp[nums[i]]=i;
        }

        return {};
    }
};