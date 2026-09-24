class Solution {
public:
bool issafe(vector<string>&board,int row,int col,int n){ 
    //checking if the next position for placing the queen is safe or not 
    // left side ,right side ,left upper diagnonal ,right upper diagonal
    // not checking the lower diaginals bcz no queens are placed there at the moment 
    for(int i=0;i<n;i++){
        if(board[i][col]=='Q')
        return false;
    }
    for(int j=0;j<n;j++){
        if(board[row][j]=='Q')
        return false;
    }
    for(int i=row,j=col; i>=0 && j>=0;i--,j--){
        if(board[i][j] =='Q')
        return false;

    }
    for(int i=row,j=col;i>=0 && j>=0;i--,j++){
        if(board[i][j]=='Q')
        return false;}
        return true ;

}


void nqueen(vector<string>&board,int row,int n,vector<vector<string>>& ans){

    if(row==n){ // successfully placed the n queens over n rows i.e got ont valid ans.
        ans.push_back(board);
        return;
    }
    for(int j=0;j<n;j++){
        //check if the position is safe 
        if(issafe(board,row,j,n)){
            // if yes then replace '.' with the 'Q'
        board[row][j]='Q';
        // recursive call
         nqueen(board,row+1,n,ans);
         // imp backtracking step
        board[row][j]='.';
    }
    }

}
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n , string(n,'.'));
        vector<vector<string>> ans;
        nqueen(board,0,n,ans);
        return ans ;
    }
};