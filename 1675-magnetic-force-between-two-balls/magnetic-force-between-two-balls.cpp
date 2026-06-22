class Solution {
public:
int countballs(vector<int>& arr,int middy){
     int ball=1;
     
     
     
     int force=arr[0];
     for(int i=1;i<arr.size();i++){
        if ((arr[i]-force)>=middy){
            ball++;
            force=arr[i];
        }
        else continue;

     }
     return ball;

}
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int st=1;
        int end=position[position.size()-1]-position[0];
        int ans=end;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(countballs(position,mid)>=m){
                ans=mid;
                st=mid+1;
            }
            else 
            end=mid-1;
        }
        return ans ;
    }
};