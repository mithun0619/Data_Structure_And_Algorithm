class Solution {
public:
    int findMin(vector<int>& arr) {
        int l=0;
        int r=arr.size()-1;

        while(l<r){
            int mid=l+(r-l)/2;

            if(arr[mid]<arr[r]){
                r=mid;
            }else{
                l=mid+1;
            }
        }
        return arr[l];
    }
};