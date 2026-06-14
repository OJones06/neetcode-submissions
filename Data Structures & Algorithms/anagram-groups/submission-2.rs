impl Solution {
    pub fn group_anagrams(strs: Vec<String>) -> Vec<Vec<String>> {
        let mut map : HashMap<Vec<i32>, Vec<String>> = HashMap::new();

        for s in strs {
            let mut word = vec![0; 26];
            for c in s.chars() {
                word[(c as usize) - ('a' as usize)] += 1;
            }
            map.entry(word).or_default().push(s);
        }
        let mut result : Vec<Vec<String>> = Vec::new();
        for (_key, group) in map {
            result.push(group);
        }
        return result;
    }
}
