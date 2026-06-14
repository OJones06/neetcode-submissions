class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::map<int, int> numMap;

        for (int n : nums) {
            if (numMap.find(n) != numMap.end()) {
                numMap[n] += 1;
            } else {
                numMap[n] = 1;
            }
        }
        
        std::vector<std::pair<int, int>> sortedPairs(numMap.begin(), numMap.end());
        std::sort(sortedPairs.begin(), sortedPairs.end(), [](const auto& a, const auto& b) {
            return a.second > b.second;
        });

        std::vector<int> retval;
        for (int i = 0; i < k; ++i) {
            retval.push_back(sortedPairs[i].first);
        }
        return retval;
    }
};