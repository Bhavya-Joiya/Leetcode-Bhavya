class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> return_nums;
        for (int a = 0; a < nums.size(); a++) {
            for (int b = 0; b < a; b++) {
                if ( a != b) {
                    if ( nums[a] + nums[b] == target) {
                        return_nums.push_back(a);
                        return_nums.push_back(b);
                    }
                }
            }
        }
        return return_nums;
    }
};