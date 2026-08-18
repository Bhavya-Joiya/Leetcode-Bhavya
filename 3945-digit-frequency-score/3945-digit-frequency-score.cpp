class Solution {
public:
    int digitFrequencyScore(int n) {
        vector<int> freq(10);
        while(n != 0){
            int a = n%10;
            n/=10;
            freq[a]++;
        }
        int i = 0;
        int ans = 0;
        while(i < 10){
            ans += i*freq[i];

            i++;
        }
        return ans;
    }
};