class Solution {
public:
    int maximumGap(string skill, string station) {
        int n = skill.length();
        int m = station.length();

        if (n == 1)
            return 0;

        vector<int> first(n);
        int j = 0;
        for (int i = 0; i < n; ++i) {
            while (station[j] != skill[i]) {
                j++;
            }
            first[i] = j;
            j++;
        }

        vector<int> last(n);
        j = m - 1;
        for (int i = n - 1; i >= 0; --i) {
            while (station[j] != skill[i]) {
                j--;
            }
            last[i] = j;
            j--;
        }

        int max_gap = 0;

        for (int i = 1; i < n; ++i) {
            int current_gap = last[i] - first[i - 1];
            if (current_gap > max_gap) {
                max_gap = current_gap;
            }
        }

        return max_gap;
    }
};