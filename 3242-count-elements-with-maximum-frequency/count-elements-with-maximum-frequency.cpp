class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int> mp;

        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        int maxfreq=0;
        for(auto &v:mp){
            maxfreq=max(maxfreq,v.second);
        }

        int sum=0;
        for(auto &v:mp){
            if(v.second==maxfreq){
                sum+=v.second;
            }
        }
        return sum;
    }
};