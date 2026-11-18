class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> newarr;
        newarr.reserve(nums.size());

        for (int i = 0; i < nums.size(); ++i) {

            int remain = target - nums[i];
            if (newarr.find(remain) != newarr.end()) {
                return {newarr[remain], i};
            }

            newarr[nums[i]] = i;
        }

        return {};
    }
};