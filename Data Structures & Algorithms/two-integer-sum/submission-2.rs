impl Solution {
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
        let mut numMap: HashMap<i32, i32> = HashMap::new();

        for (i, n) in nums.iter().enumerate() {
            let diff = target - *n;
            if let Some(&prev_i) = numMap.get(&diff) {
                return vec![prev_i, i as i32];
            } else {
                numMap.insert(*n, i as i32);
            }
        }
        unreachable!()
    }
}
