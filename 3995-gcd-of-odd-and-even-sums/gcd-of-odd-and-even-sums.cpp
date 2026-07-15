class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int evesum=0;
        int oddsum=0;
    int gcd=1;
        evesum=n*(n+1);
        oddsum=evesum-n;
     for(int i=1;i<=oddsum;i++){
         if(evesum%i==0&&oddsum%i==0){
            gcd=i;}
     }
     return gcd;
   
            }
};