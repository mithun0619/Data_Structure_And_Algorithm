class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())return false;

        int frq[26]={0};

        for(int i=0;i<s.length();i++){
            frq[s[i]-'a']++;
            frq[t[i]-'a']--;
        }

        for(int i=0;i<26;i++){
            if(frq[i]!=0)return false;
        }
        return true;
    }
};