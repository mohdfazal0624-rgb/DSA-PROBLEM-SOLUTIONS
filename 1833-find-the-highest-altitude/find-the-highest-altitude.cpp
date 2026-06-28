class Solution {
public:
    int largestAltitude(vector<int>& gain) {

        // Convert gain[] into altitude[]
        int curr = 0;
        for (int i = 0; i < gain.size(); i++) {
            curr += gain[i];
            gain[i] = curr;
        }

        int maximum = 0;   // Start altitude is 0

        for (int i = 0; i < gain.size(); i++) {
            if (gain[i] > maximum)
                maximum = gain[i];
        }

        return maximum;
    }
};