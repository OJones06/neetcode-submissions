impl Solution {
    pub fn is_anagram(s: String, t: String) -> bool {
        let len = s.len();
        if len != t.len() {
            return false;
        }

        let mut charS = HashMap::new();
        let mut charT = HashMap::new();

        for (c1, c2) in s.chars().zip(t.chars()) {
            *charS.entry(c1).or_insert(0) += 1;
            *charT.entry(c2).or_insert(0) += 1;
        }

        return charS == charT;
    }
}
