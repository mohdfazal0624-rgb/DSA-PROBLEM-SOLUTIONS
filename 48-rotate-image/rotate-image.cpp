class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
         for (int i = 0; i < matrix.size(); i++) {
            // this will only traverse the above diagonal elements
    for (int j = i + 1; j < matrix.size(); j++) {
                swap(matrix[i][j],matrix[j][i]);
         }
         }
         int i=0;
         while(i!=matrix.size()/2){
            for(int j=0;j<matrix.size();j++){
                swap(matrix[j][i],matrix[j][matrix.size()-i-1]);
            }
            i++;
         }


    }
};