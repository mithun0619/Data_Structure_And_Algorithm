class Solution {
public:
    bool isAnagram(string s, string t) {
        int a[256]={0};

        for(int i=0;i<s.size();i++){
            a[s[i]]++;
           
        }

        for(int i=0;i<t.size();i++){
            a[t[i]]--;
           
        }

        for(int i=0;i<256;i++){
            if(a[i]!=0){
                return false;
            }
        }
        return true;
    }
};