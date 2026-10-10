class Solution {
public:
int dig(int a){
    int sum=0;
    while(a!=0){
        sum+=a%10;
        a=a/10;
    }
    return sum;
}
    int differenceOfSum(vector<int>& nums) {
        int se=0,sd=0;
        for(int i=0;i<nums.size();i++){
            se+=nums[i];
            if(nums[i]>=10)
            sd+=dig(nums[i]);
            else
            sd+=nums[i];
            
        }
        return abs(se-sd);
    }
};