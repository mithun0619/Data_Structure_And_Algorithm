class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
       vector<int> r(n);
       int p=0;
       int ne=1;

       for(int i=0;i<n;i++){
        if(nums[i]<0){
            r[ne]=nums[i];
            ne+=2;
        }else{
            r[p]=nums[i];
            p+=2;
        }
       }
       return r;
    }
};