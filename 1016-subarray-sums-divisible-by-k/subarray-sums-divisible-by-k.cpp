class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
vector<int> ans (nums.size(),0);
        int count=0;
        ans[0]=nums[0];
        for(int i=1;i<nums.size();i++){
ans[i]=ans[i-1]+nums[i];
        }
        unordered_map<int,int> m;
                for(int j=0;j<nums.size();j++){
            int val=(ans[j]%k+k)%k;
            if(val==0) count++;
            if(m.find(val)!=m.end())
            count+=m[val];
            m[val]++;
        }
       
        
        
        return count ;
    }
};