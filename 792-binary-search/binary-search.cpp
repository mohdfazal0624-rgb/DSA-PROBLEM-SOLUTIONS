class Solution {
public:
int bin(vector<int>& nums, int target,int st,int end){
    int mid=st+(end-st)/2;
 if(st<=end){
    if(nums[mid]==target) return mid;
    else if (nums[mid]<target) return bin(nums,target,st+1,end);
    else
    return  bin(nums,target,st,end-1);
 }
 return -1;
}
    int search(vector<int>& nums, int target) {
        int st=0;
        int end=nums.size()-1;
        return bin(nums,target,st,end);
    }
};