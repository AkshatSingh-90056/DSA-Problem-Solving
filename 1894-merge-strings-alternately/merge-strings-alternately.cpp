class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int len1 = word1.size();
        int len2 = word2.size();

        bool isWord1 = true;
        bool isWord2 = false;

        vector<char> newString;

        int ptr1 = 0;
        int ptr2 = 0;

        while (ptr1 < len1 && ptr2 < len2) {
            if (isWord1) {
                newString.push_back(word1[ptr1]);
                isWord1 = false;
                isWord2 = true;
                ptr1++;
            }
            else if (isWord2) {
                newString.push_back(word2[ptr2]);
                isWord1 = true;
                isWord2 = false;
                ptr2++;
            }
        }

        while (ptr1 < len1 || ptr2 < len2) {
            if (ptr1 < len1) {
                newString.push_back(word1[ptr1]);
                ptr1++;
            }
            else if (ptr2 < len2) {
                newString.push_back(word2[ptr2]);
                ptr2++;
            }
        }

        return string(newString.begin(), newString.end());
    }
};