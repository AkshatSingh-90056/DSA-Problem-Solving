class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        if (n == 1)
            return 0;

        int end = -1, start = -2;
        int maxEle = nums[0];
        int minEle = nums[n - 1];
    

        for (int i = 1; i < n; i++) {
            maxEle = max(maxEle, nums[i]);

            if (nums[i] < maxEle)
                start = i;
        }

        for (int i = n - 2; i >= 0; i--) {
            minEle = min(minEle, nums[i]);

            if (nums[i] > minEle)
                end = i;
        }
        
        return  start - end + 1;
    }
};