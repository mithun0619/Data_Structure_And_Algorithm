class Solution {
public:
    int scoreOfString(string s) {
        int sum=0;
        int n=s.length();
        for(int i=1;i<n;i++){
            sum+=abs(int(s[i])-int(s[i-1]));
        }
        return sum;
    }
};