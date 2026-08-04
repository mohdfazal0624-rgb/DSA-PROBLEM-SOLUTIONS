class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        vector<int> l;
        while(i!=nums.size()-1){
            if(nums[i]+1==nums[i+1]){
                i++;
            }
            else{
                l.push_back(nums[i]+1);

            nums[i]=nums[i]+1;
            i=i;}
        }
        return l;
    }
};