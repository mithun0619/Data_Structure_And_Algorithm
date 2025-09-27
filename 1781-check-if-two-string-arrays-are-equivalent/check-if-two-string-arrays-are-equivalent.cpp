class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1, s2;

        for (auto &st : word1) {
            for (char c : st) {
                s1.push_back(c);
            }
        }
        for (auto &st : word2) {
            for (char c : st) {
                s2.push_back(c);
            }
        }

        return s1 == s2;
    }
};
