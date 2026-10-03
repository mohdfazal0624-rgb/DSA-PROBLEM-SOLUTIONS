class Solution {
public:
    bool isPowerOfFour(int n) {
        // if((n/2)%2==0){
        if(n>0&&((n-1)&n)==0&&(n%3==1))
        return true ;
        // }
        return false;
    }
};