class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        res = defaultdict(list)

        for s in strs:
            values = [0] * 26
            for c in s:
                values[ord(c) - ord("a")] += 1
            res[tuple(values)].append(s)
        
        return list(res.values())
        