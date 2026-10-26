class Solution {
public:
    bool checkPerfectNumber(int num) {
        int n=0;
        for(int i=1;i<num;i++){
            if(num%i==0)
            n=n+i;
        }
        if(n==num)
        return true;
        else 
        return false;
    }
};