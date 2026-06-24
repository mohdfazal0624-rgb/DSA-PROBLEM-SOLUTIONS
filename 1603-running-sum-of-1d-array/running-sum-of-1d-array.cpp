class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int curr = 0;

        for (int i = 0; i < nums.size(); i++) {
            curr += nums[i];
            nums[i] = curr;
        }

        return nums;
    }
};