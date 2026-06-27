class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int k=1,cur=0;
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                 cur=nums[i-1];
                   k++;
            }
            if(k==3)
            return cur;
           
        }
            return nums[nums.size()-1];
    }
};