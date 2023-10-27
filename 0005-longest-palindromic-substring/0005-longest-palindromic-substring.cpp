class Solution {
public:

    string expandAroundCenter(string s, int left, int right) {
    int n = s.length();
    while (left >= 0 && right < n && s[left] == s[right]) {
        left--;
        right++;
    }
    return s.substr(left + 1, right - left - 1);
}


    string longestPalindrome(string s) {
        int n = s.length();
    if (n == 0) {
        return "";
    }

    string longest = s.substr(0, 1);  // The longest palindromic substring found so far

    for (int i = 0; i < n - 1; i++) {
        string oddPalindrome = expandAroundCenter(s, i, i);
        if (oddPalindrome.length() > longest.length()) {
            longest = oddPalindrome;
        }

        string evenPalindrome = expandAroundCenter(s, i, i + 1);
        if (evenPalindrome.length() > longest.length()) {
            longest = evenPalindrome;
        }
    }

    return longest;
    }
};