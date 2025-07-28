class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> lastSeen;
        int maxLength = 0;
        int start = 0;

        for (int i = 0; i < s.length(); ++i) {
            char c = s[i];

            // If character is already seen and inside the current window
            if (lastSeen.count(c) && lastSeen[c] >= start) {
                start = lastSeen[c] + 1;
            }

            lastSeen[c] = i;
            maxLength = max(maxLength, i - start + 1);
        }

        return maxLength;
    }
    int main() {
    Solution sol;
    cout << sol.lengthOfLongestSubstring("abcabcbb") << endl; // Output: 3
    cout << sol.lengthOfLongestSubstring("bbbbb") << endl;    // Output: 1
    cout << sol.lengthOfLongestSubstring("pwwkew") << endl;   // Output: 3
    cout << sol.lengthOfLongestSubstring(" ") << endl;        // Output: 1
    return 0;
}

};
