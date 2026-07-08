class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int pt=0;
       int f=0;
       int a=0;
     for(int i=0;i<nums.size();i++){
       if(nums[pt]==nums[i]){
       f++;
       if(f<3)
       nums[a++]=nums[i];
       else{
       continue; }
       }
       else {
        nums[a++]=nums[i];
        pt=i;
        f=1;
       }
         
     }
     return a;   
    }
};