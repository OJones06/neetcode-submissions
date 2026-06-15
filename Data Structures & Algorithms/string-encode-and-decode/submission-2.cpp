class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        for (string s : strs) {
            res += s;
            res += '\a';
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res = {};
        string word = "";
        for (char c : s) {
            if (c != '\a') {
                word += c;
            } else {
                res.push_back(word);
                word = "";
            }
            // res.push_back(word);
        }
        return res;
    }
};
