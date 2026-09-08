class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        // for(int i=0;i<mat.size();i++){
        //     for(int j=0;j<mat[i].size();j++){
        //         if(i==j||((i+j)==(mat.size()-1)))
        //         sum+=mat[i][j];
        //     }
        // }
        for(int i=0;i<mat.size();i++){
            sum+=mat[i][i];
            if(i+i!=mat.size()-1)
            sum+=mat[i][mat.size()-1-i];
        }
        
        // if(mat.size()%2!=0)
        // return (sum-mat[mat.size()/2][mat.size()/2]);
        // else 
        return sum;
    }
};