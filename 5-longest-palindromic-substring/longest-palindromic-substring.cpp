class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        if(n==0) return "";

        int start=0;
        int maxL=1;

        for(int i=0;i<n;i++){
            //odd palindrome
            int l=i;
            int r=i;
            while(l>=0 && r<n && s[l]==s[r]){
                if(r-l+1>maxL){
                start=l;
                maxL=r-l+1;
                }
                l--;r++;            
            }

            //even palindrome
            l=i;r=i+1;
            while(l>=0 && r<n && s[l]==s[r]){
                 if(r-l+1>maxL){
                start=l;
                maxL=r-l+1;
                }
                l--;r++;    
            }
        }
        return s.substr(start,maxL);
    } 
};