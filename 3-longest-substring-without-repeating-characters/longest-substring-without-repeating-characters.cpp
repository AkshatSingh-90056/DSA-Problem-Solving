class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if (n == 0)
            return 0;
        if (n == 1)
            return 1;
        int l = 0, r = 1, maxlength = 0;
        while (r < n) {
            int i = l;
            while (i < r) {
                if (s[i] != s[r]) {
                    i++;
                } else {
                    l = i+1;
                    break;
                }
            }
            maxlength = max(maxlength, r - l + 1);
            r++;
        }
        return maxlength;
    }
};