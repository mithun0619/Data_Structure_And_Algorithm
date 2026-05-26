class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set<char> lower,upper;

        for(char c:word){
            if(islower(c)){
                lower.insert(c);
            }else{
                upper.insert(tolower(c));
            }
        }
        int count=0;

        for(char ch:lower){
            if(upper.find(ch)!=upper.end()){
                count++;
            }
        }
        return count;
    }
};