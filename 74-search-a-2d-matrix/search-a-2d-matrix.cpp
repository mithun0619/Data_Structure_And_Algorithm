class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(vector<int>arr: matrix)
        {
            if (target < arr[0] || target > arr[arr.size() - 1]) continue;
            int left=0;
            int right=arr.size()-1;
            while(left<=right)
            {
                int mid=left+(right-left)/2;
                if(arr[mid]==target) return true;
                if(arr[mid]>target) right=mid-1;
                else left=mid+1;
            }
        }
        return false;
    }
};