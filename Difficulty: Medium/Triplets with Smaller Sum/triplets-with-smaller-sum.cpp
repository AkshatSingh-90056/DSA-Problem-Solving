class Solution {
	public:
	int countTriplets(int sum, vector<int>& arr) {
		int n = arr.size();
		int ans = 0;
		sort(arr.begin(), arr.end());
		for (int i = 0 ; i<n - 2; i++) {
			int left = i + 1;
			int right = n - 1;
			while (left<right) {
				if (arr[i]+arr[left]+arr[right] < sum) {
					ans += right - left;
					left++;
				}
				else {
					
					right--;
				}
			}
		} return ans;
		
	}
};
