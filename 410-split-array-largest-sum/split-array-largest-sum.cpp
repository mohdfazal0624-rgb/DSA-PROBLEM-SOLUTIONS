class Solution {
public:

    int count(vector<int>& arr, int pages) {
        int stud = 1;
        int pagestud = 0;

        for (int i = 0; i < arr.size(); i++) {
            if (pagestud + arr[i] <= pages)
                pagestud += arr[i];
            else {
                stud++;
                pagestud = arr[i];
            }
        }

        return stud;
    }

    int minimum(vector<int>& mm) {
        int mx = mm[0];

        for (int i = 1; i < mm.size(); i++) {
            if (mm[i] > mx)
                mx = mm[i];
        }

        return mx;
    }

    int maximum(vector<int>& nn) {
        int sum = 0;

        for (int i = 0; i < nn.size(); i++) {
            sum += nn[i];
        }

        return sum;
    }

    int splitArray(vector<int>& nums, int k) {

        int n = nums.size();

        if (k > n)
            return -1;

        int low = minimum(nums);
        int high = maximum(nums);

        int ans = high;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            int st = count(nums, mid);

            if (st <= k) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return ans;
    }
};