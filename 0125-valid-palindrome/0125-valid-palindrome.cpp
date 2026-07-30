class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        string z;

        for(int j = 0; j < n; j++) {
            if(isalnum((unsigned char)s[j])) {
                z += tolower((unsigned char)s[j]);
            }
        }

        int m = z.length();
        string orig = z;

        for(int i = 0; i < m / 2; i++) {
            swap(z[i], z[m - i - 1]);
        }

        return orig == z;
    }
};