class Solution {
public:
// bruteforce
int sum(int a){
    int sum=0;
    while(a!=0){
        sum+=a%10;
        a=a/10;
    }
    return sum;
}
    int addDigits(int num) {
        
        while(num>9){
            num=sum(num);
        }
        return num;
        
    }
};