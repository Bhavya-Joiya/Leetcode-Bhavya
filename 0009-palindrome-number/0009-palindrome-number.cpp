class Solution {
public:
    bool isPalindrome(int x) {
        int rep = 0;
        long long rev = 0;
        long long call = x;
        while(x != 0){
            rep = x % 10;
            rev = rev*10 + rep;
            x /= 10;
        }
        if(rev == call && rev >= 0) {
            return true;
        }  
        else{
            return false;
        }
    }
};