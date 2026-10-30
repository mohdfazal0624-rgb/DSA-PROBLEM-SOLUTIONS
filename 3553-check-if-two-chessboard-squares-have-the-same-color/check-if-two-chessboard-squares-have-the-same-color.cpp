class Solution {
public:
    bool checkTwoChessboards(string s1, string s2) {
        int a=s1[0],b=s1[1]-'0',c=s2[0],d=s2[1]-'0';
        if((a%2==0&&b%2==0)||(a%2!=0&&b%2!=0)){
            if((c%2==0&&d%2==0)||(c%2!=0&&d%2!=0))
            return true;
            else
            return false;
        }
        else{
             if((c%2==0&&d%2==0)||(c%2!=0&&d%2!=0))
             return false;
             else 
             return true;
            

        }
        return false;
    }
};