class Solution {
public:
    int findMissing(vector<int> &arr) {
        int n = arr.size();
        int d = (arr[n-1] - arr[0]) / n;
        int actual_d = arr[1] - arr[0];
        bool isCompleteAP = true;
        for (int i = 1; i < n; i++) {
            if (arr[i] - arr[i-1] != actual_d) {
                isCompleteAP = false;
                break;
            }
        }
        if (isCompleteAP) {
            return arr[n-1] + actual_d;
        }
        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int expected = arr[0] + mid * d;
            if (arr[mid] == expected) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return arr[0] + low * d;
    }
};
