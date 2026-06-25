class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pv=-1;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                pv=i;
                break;
            }}
            if(pv==-1){
                reverse(nums.begin(),nums.end());
                return;
            }

            for(int i=nums.size()-1;i>=0;i--){
                if(nums[i]>nums[pv]){
                swap(nums[i],nums[pv]);
                break;
                }

            }
            int i=pv+1;
            int j=nums.size()-1;
            while(i<=j){
                swap(nums[i],nums[j]);
                i++;
                j--;
            }

            


        
    }
};