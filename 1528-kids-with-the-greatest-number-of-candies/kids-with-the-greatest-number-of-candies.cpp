class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> finalAns;
        
        int currentMax = *max_element(candies.begin(), candies.end());

        for (int i = 0; i < candies.size(); i++) {
            finalAns.push_back(candies[i] + extraCandies >= currentMax);
        }

        return finalAns;
    }
};