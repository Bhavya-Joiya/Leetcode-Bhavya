class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2*n, 0);
        for(int i = 0; i < n; i++){
            ans[2*i] = nums[i];
        }
        for(int j =0; j < n; j++){
            ans[2*j+1] = nums[n+j];
        }
        return ans;
    }
};