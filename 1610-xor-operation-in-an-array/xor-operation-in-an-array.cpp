class Solution {
public:
    int xorOperation(int n, int start) {
        // vector <int > ans(n,0);
        int a=0;
        for(int i=0;i<n;i++){
            // ans[i]=start+2*i;
            a=a^(start+2*i);
        }
        return a;
        
    }
};