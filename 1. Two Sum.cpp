// here is the c++ code for the "Two Sum" Problem of leetcode using unordered map

Code: 

1. Two Sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            if (m.count(target - nums[i])) {
                return {m[target - nums[i]], i};
            }
            m[nums[i]] = i;
        }
        return {}; //this returns an empty vector if no valid pair is found
    }
};
