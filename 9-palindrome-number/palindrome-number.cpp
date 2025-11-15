class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        int t=x;
        long long s=0;
        while(x>0){
            int n=x%10;
            s=s*10+n;
            x=x/10;
        }
        if(t==s)
            return true;
            return false;
    }
};