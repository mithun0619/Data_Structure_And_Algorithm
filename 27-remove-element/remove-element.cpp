class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        for(int i=0;i<n;){
            if(nums[i]==val){
            nums.erase(nums.begin()+i);
            n--;}
            else
            i++;
        }
        int k=nums.size();
        return k;
    }
};