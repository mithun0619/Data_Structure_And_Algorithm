class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int maxlen=0;
        int hash[256];
        int l=0,r=0;

        for(int i=0;i<256;i++){
            hash[i]=-1;
        }

       while(r<n){
            if(hash[s[r]]!=-1){
                l=max(hash[s[r]]+1,l);
            }
            int len=r-l+1;
            maxlen=max(maxlen,len);
            hash[s[r]]=r;
            r++;
        }
      
        return maxlen;
    }
};