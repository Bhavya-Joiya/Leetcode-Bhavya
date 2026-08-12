class Solution {
public:
    bool isPalindrome(string s) {
       int n = s.length();
       if(n<2){
        return true;
       }
       else{
        string s1;
        for(int i = 0; i < n; i++){
            if(isalnum(s[i])){
                s1.push_back(tolower(s[i]));
            }
        }
        int m = s1.length();
        int a;
        if(m%2!=0){
            for(int j = 0; j < (m-1)/2; j++){
                if(s1[j] == s1[m-j-1]){
                    a = 1;
                }
                else{
                    a = 0;
                    break;
                }
            }
        }
        else{
            for(int j = 0; j < m/2; j++){
                if(s1[j] == s1[m-j-1]){
                    a = 1;
                }
                else{
                    a = 0;
                    break;
                }
            }
        }
        if(a == 1){
            return true;
        }
        else{
            return false;
        }
       }
    }
};