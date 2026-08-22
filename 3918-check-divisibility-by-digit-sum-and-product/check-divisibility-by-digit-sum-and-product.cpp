class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0,prd=1;
        int t=n;
        while(n!=0){
            sum+=n%10;
            prd*=n%10;
            n=n/10;
        }
        if(t%(sum+prd)==0)
        return true ;
        else 
        return false;
    }
};