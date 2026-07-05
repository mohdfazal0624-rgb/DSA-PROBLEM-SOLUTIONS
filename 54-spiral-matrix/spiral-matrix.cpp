class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int sr=0,sc=0;
        vector<int> ans;
        int er=matrix.size()-1,ec=matrix[0].size()-1;
        while(sr<=er&&sc<=ec){
            for(int j=sc;j<=ec;j++){
            ans.push_back(matrix[sr][j]);
            }
            for(int i=sr+1;i<=er;i++){
                ans.push_back(matrix[i][ec]);
            }
            for(int j=ec-1;j>=sc;j--){
                if(sr==er)
                break;
                ans.push_back(matrix[er][j]);
            }
            for(int i=er-1;i>=sr+1;i--){
                if(ec==sc)
                break;
                ans.push_back(matrix[i][sc]);
            }
            sr++,sc++,er--,ec--;
        }
        return ans;
    }
};