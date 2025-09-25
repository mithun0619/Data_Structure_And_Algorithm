class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> ans(nums.size());
        int left = 0, right = nums.size() - 1;

        for (int num : nums) {
            if (num < pivot) {
                ans[left++] = num;
            }
        }

        for (int i = nums.size() - 1; i >= 0; i--) {
            if (nums[i] > pivot) {
                ans[right--] = nums[i];
            }
        }

        while (left <= right) {
            ans[left++] = pivot;
        }

        return ans;
    }
};
