class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> v1;
        vector<int>v2;

        for(int i=0;i<n;i++){
            if(nums[i]>0){
                v1.push_back(nums[i]);
            }else{
                v2.push_back(nums[i]);
            }
        }

        vector<int> r(n);
        int p=0;
        int ne=0;
        int i=0;

        while(i<n){
            r[i++]=v1[p++];
            r[i++]=v2[ne++];
        }
        
        return r;  
    }
};