class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int sum=0;
        int j=1;
        for(int j=1;j<=nums.size();j++){
            if(nums.size()%j==0){
                sum+=nums[j-1]*nums[j-1];
            }
        }
        return sum;
    }
};