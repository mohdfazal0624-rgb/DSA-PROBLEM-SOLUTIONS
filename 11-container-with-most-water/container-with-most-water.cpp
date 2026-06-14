class Solution {
public:
    int maxArea(vector<int>& height) {
        int minp=0,maxp=0;
        int area;
int s=0,end=height.size()-1;
        for(int i=0;i<height.size();i++){
            int w=end -s;
                minp=min(height[s],height[end]);
                area=minp*w;
                maxp=max(maxp,area);
                if(height[s]<height[end])
                s++;
                else 
                end--;
                
            }
         

        

    return maxp;

    }
};