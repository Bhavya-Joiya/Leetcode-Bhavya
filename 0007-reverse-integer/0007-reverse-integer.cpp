class Solution {
public:
    int reverse(int x) {
        int n = 0;
        long long rev = 0;
        while(x != 0) {
            n = x % 10;
            x /= 10;
            rev += n;
            if(x != 0) {
                rev *= 10;
            }
        }
        if(rev < -1 * (pow(2, 31)) || rev > (pow(2, 31) - 1)) {
            return 0;
        }
        else{
            return rev;
        }
    }
};