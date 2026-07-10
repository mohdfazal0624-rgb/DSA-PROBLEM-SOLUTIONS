class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        vector<int> presum(nums.size(),0);
    int count =0;
    presum[0]=nums[0];
    for(int i=1;i<nums.size();i++){
        presum[i]=presum[i-1]+ nums[i];
    }
    unordered_map<int ,int > m;
    for(int j=0;j<nums.size();j++){
        if(presum[j]==k)
        count++;
    int val=presum[j]-k;
    if(m.find(val)!=m.end()) 
    count +=m[val];
    if(m.find(presum[j])==m.end())
    m[presum[j]] =0;
    m[presum[j]]++;
    }
return count ;
    }
};