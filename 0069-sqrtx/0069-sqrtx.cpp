class Solution {
public:
    int mySqrt(int x) {
        // vector<float> arr;
        // if(x<2) return 1;
        // for(int i = 2; i < x; i++){
        //     if(x % i == 0){
        //         arr.push_back(i);
        //     }
        // }
        // int n = arr.size();
        // float ans = 0;
        // for(int j = 0; j < n; j++){
        //     if(x / arr[j] == arr[j]){
        //         ans = arr[j];
        //     }
        // }
        int ans = sqrt(x);
        return round(ans);
    }
};