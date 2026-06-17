class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet;
        for (int num : nums) {
            numSet.insert(num);
        }
        int longest = 0;
        for (int num : nums) {
            if (numSet.contains(num - 1)) {
                continue;
            } else {
                int i = 1;
                int counter = 1;
                while(true) {
                    if (numSet.contains(num + i)) {
                        counter += 1;
                        i += 1;
                    } else {
                        break;
                    }
                }
                if (longest < counter) {
                    longest = counter;
                }
            }
        }
        return longest;

    }
};
