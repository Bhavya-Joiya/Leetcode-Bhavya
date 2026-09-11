class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int l = k % n;
        vector<int> temp;
        for(int i = n-l; i < n; i++){
            temp.push_back(nums[i]);
        }
        for(int i = 0; i < n-l; i++){
            temp.push_back(nums[i]);
        }
        int i =0;
        int j = 0;

        while(i<n){
            swap(nums[i],temp[j]);
            i++,j++;
        }
    }
}; 