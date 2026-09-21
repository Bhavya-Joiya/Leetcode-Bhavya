class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int large = 0;
        int noms = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == 1){
                noms++;
                if(noms > large){
                    large = noms;
                }
            }
            else{
                noms = 0;
            }
        }
        return large;
    }
};