class Solution {
public:
    int maxProduct(int n) {
        vector<int > a;
        while(n!=0){
            a.push_back(n%10);
        n=n/10;
    }
    sort(a.begin(),a.end());
    return a[a.size()-1]*a[a.size()-2];
        
    }
};