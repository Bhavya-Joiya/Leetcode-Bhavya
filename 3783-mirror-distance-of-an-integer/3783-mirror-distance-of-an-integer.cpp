class Solution {
public:
    int mirrorDistance(int n) {
        long a = 0;
        long m = n;
        while(n > 0){
            a += n % 10;
            n /= 10;
            a *= 10;
        }
        a /= 10;
        return abs(m - a);
    }
};