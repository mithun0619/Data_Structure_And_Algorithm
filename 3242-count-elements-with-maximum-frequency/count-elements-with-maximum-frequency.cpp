class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> f(101,0);

        for(int i=0;i<nums.size();i++){
            f[nums[i]]++;
        }

        int maxfreq=0;
        for(int v:f){
            maxfreq=max(maxfreq,v);
        }

        int sum=0;
        for(int v:f){
            if(v==maxfreq){
                sum+=v;
            }
        }
        return sum;
    }
};