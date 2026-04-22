class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        int n=s.size();
        if(s.empty())return "";
        string prefix=s[0];

        for(int i=1;i<n;i++){
            int j=0;
            while(j<prefix.size() && j<s[i].size() && prefix[j]==s[i][j]){
                j++;
            }
            prefix=prefix.substr(0,j);
            if(prefix.empty())return "";
        }
        return prefix;
    }
};