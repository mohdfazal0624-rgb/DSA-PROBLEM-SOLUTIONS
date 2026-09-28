class Solution {
public:
    int findDuplicate(vector<int>& nums) {
     map<int,int > m;
     for(int i=0;i<nums.size();i++){
        if(m.find(nums[i])==m.end())
        m[nums[i]]++;
        else
        return nums[i];
     }
     return -1;
     }
};