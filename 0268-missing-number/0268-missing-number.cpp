class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        vector<int> hasher(n+1);
        for(int i = 0; i < n; i++){
            hasher[nums[i]]++;
        }
        int ans = 0;
        for(int i = 0; i < n+1; i++){
            if(hasher[i] == 0){
                ans = i;
            }
        }
        return ans;
    }
};