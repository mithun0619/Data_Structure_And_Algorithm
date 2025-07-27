class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> m;

        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }

        n=n/3;
        vector<int>r;
        for(auto x:m){
            if(x.second>n){
                r.push_back(x.first);
            }
        }
        return r;
    }
};