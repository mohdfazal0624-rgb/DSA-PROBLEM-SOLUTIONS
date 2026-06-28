class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    vector<bool> arr(candies.size(), false);
      //bool arr[candies.size()];
      for(int i=0;i<candies.size();i++){
      if((candies[i]+extraCandies)>=*max_element(candies.begin(),candies.end()))
        arr[i]=true;
      }
      return arr;
    }
};