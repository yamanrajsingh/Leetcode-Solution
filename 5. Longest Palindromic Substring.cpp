class Solution {
public:
   string longestPalindrome(string s) {
    int n = s.size();
    vector<vector<bool>> dp(n, vector<bool>(n, false));
    int start = 0, maxLength = 1;

    // Single character is always a palindrome
    for (int i = 0; i < n; i++) {
        dp[i][i] = true;
    }

    // Check for palindromic substrings of length 2 and above
    for (int i = n - 2; i >= 0; i--) {
        for (int j = i + 1; j < n; j++) {
            if (s[i] == s[j]) {
                if (j - i <= 2 || dp[i + 1][j - 1]) {
                    dp[i][j] = true;
                    int currLength = j - i + 1;
                    if (currLength > maxLength) {
                        maxLength = currLength;
                        start = i;
                    }
                }
            }
        }
    }

    return s.substr(start, maxLength);
}

};