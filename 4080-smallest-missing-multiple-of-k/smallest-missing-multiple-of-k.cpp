class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
   int m = *max_element(nums.begin(), nums.end());
    int i=1;
    while(i*k<=m){
        if(find(nums.begin(),nums.end(),i*k)!=nums.end())
        i++;
        else
        return i*k;
    } 
    return i*k;
    }
};