class Solution {
public:
    long long totalhour(vector<int>& piles, int speed) {
        long long hour = 0;

        for (int pile : piles) {
            hour += (pile + speed - 1) / speed;
        }

        return hour;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            long long hour = totalhour(piles, mid);

            if (hour <= h) {
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