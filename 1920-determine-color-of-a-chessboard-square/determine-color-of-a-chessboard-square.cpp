class Solution {
public:
    bool squareIsWhite(string s) {
        int a=s[0],b=s[1]-'0';
        if((a%2==0&&b%2==0)||(a%2!=0&&b%2!=0))
        return false;
        else 
        return true ;
    }
};