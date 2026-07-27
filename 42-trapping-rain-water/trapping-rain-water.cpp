class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n <= 2)
            return 0;

        int left = 0;
        int right = n - 1;

        int maxL = height[left];
        int maxR = height[right];

        int count = 0;

        while (left < right) {

            if (maxL <= maxR) {
                left++;

                if (height[left] > maxL)
                    maxL = height[left];
                else
                    count += (maxL - height[left]);

            } else {

                right--;

                if (height[right] > maxR)
                    maxR = height[right];
                else
                    count += (maxR - height[right]);
            }
        }

        return count;
    }
};