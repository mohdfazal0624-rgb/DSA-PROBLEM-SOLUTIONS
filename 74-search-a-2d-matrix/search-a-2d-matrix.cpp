class Solution {
public:
bool ser(vector<vector<int>>& arr,int row,int target){
    int n=arr[0].size();
    int st=0,en=n-1;
    while(st<=en){
        int col=st+(en-st)/2;
        if(target==arr[row][col])
        return true;
        else if(target<arr[row][col])
        en=col-1;
        else 
        st=col+1;
    }
    return false;
}
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        int m=arr.size(),n=arr[0].size();
        int s=0,e=m-1;
        while(s<=e){
            int mid=s+(e-s)/2;
if(arr[mid][0]<=target&&arr[mid][n-1]>=target)
return ser(arr,mid,target);
else if(arr[mid][n-1]<=target){
    s=mid+1;}
    else{
        e=mid-1;
    }

        }
        return false;
    }
};