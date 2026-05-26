class Solution {
public:
    int numberOfSpecialChars(string word) {
        int count=0;

        for(char ch='a';ch<='z';ch++){
            if(word.find(ch)!=string::npos && word.find(toupper(ch))!=string::npos){
                count++;
            }
        }
        return count;
    }
};