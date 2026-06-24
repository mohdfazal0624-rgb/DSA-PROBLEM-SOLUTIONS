class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z=0,one=0,two=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
            z++;
            if(nums[i]==1)
            one++;
            if(nums[i]==2)
            two++;
        }
        for(int i=0;i<nums.size();i++){
            if(z!=0){
            nums[i]=0;
            z--;}
            else if(one!=0){
                nums[i]=1;
                one--;
            }
            else 
            nums[i]=2;
        }
                }
            
};