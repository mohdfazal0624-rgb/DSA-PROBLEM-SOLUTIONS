class Solution {
public:
void pr(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& ansfinal){
    if(i==nums.size()){
        ansfinal.push_back(ans);
        return ;
    }
    ans.push_back(nums[i]);
    pr(nums,ans,i+1,ansfinal);

    ans.pop_back();
    pr(nums,ans,i+1,ansfinal);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ansfinal;
        vector <int> ans;
        pr(nums,ans,0,ansfinal);
        return ansfinal;
        
    }
};