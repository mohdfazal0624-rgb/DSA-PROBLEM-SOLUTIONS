// class Solution {
// public:
//     int pivotInteger(int n) {
        // if(n == 1) return 1;
        // vector<int> prefix(n, 0);
        // vector<int> suffix(n, 0);
        
        // prefix[0] = 1;
        // for(int i = 1; i < n; i++){
        //     prefix[i] = prefix[i-1] + (i + 1); 
        // }
        
        // suffix[n-1] = n;
        // for(int i = n-2; i >= 0; i--){ 
        //     suffix[i] = suffix[i+1] + (i + 1); 
        // }
        
        // for(int i = 0; i < n; i++){
        //     if(prefix[i] == suffix[i])
        //         return i + 1;
        // }
        // return -1;
        class Solution {
public:
    int pivotInteger(int n) {
        int total_sum = n * (n + 1) / 2;
        int x = sqrt(total_sum);
        
        if (x * x == total_sum) {
            return x;
        }
        
        return -1;
    }
};

