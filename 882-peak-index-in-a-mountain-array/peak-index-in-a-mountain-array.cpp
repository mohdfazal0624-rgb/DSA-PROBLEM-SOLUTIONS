class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=1,e=arr.size()-2;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(arr[mid-1]<arr[mid]&&arr[mid+1]<arr[mid])
            return mid;
            if(arr[mid-1]>arr[mid])
            e=mid-1;
            if(arr[mid+1]>arr[mid])
            s=mid+1;
        }
        return -1;
    }
};