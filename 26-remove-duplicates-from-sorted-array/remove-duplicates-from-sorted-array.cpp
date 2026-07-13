class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int n = nums.size();
        if (n == 0)
            return i;
        if (n == 1)
            return i = 1;
        for (int j = 1; j < n; j++) {
            if (nums[i] == nums[j]) {

                continue;
            } else {
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
};