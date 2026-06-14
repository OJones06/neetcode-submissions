class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::map<std::vector<int>, std::vector<std::string>> map;

        for (std::string s : strs) {
            std::vector<int> word(26, 0);
            for (char c : s) {
                word[c - 'a']++;
            }
            map[word].push_back(s);
        }
        vector<vector<string>> result;
        for (auto& [key, group] : map) {
            result.push_back(group);
        }

        return result;
    }
};
