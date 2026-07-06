class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
      vector<int> ans;
      int n=grid.size();
      int actsum=0;
      int b=0,a=0;
      unordered_set<int> s;
      for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
            actsum+=grid[i][j];
            if(s.find(grid[i][j])!=s.end()){
                 a=grid[i][j];
                ans.push_back(grid[i][j]);
            }
            s.insert(grid[i][j]);
         }
      }  
       b=((n*n)*(n*n+1)/2) +a - actsum;
      ans.push_back(b);
      return ans;
           
       
    }
};