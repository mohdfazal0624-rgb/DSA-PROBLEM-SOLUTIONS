class Solution {
public:
bool prim(int n){
    if(n<=1)
    return false;
    for(int i=2;i<=n/2;i++){
        if(n%i==0)
        return false;
    }
    return true;
}
    bool checkPrimeFrequency(vector<int>& nums) {
        unordered_map<int,int> m;
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i])!=m.end())
            m[nums[i]]++;
            else 
        m.insert({nums[i],1});
                }
                for(auto&a:m){
                    if(prim(a.second))
                    return true;
                    
                }
                return false;
    }
};