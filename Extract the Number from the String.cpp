class Solution {
public:
    long long ExtractNumber(string sentence) {
        long long number = 0;
        long long maxi = -1;
        int i = 0;
        while (i < sentence.size()) {
            if (sentence[i] == ' ' && number > 0) {
                maxi = max(maxi, number);
                number = 0;
            }
            int n = sentence[i] - '0';
            if (n >= 0 && n <= 8) {
                number = number * 10 + n;
            } else if (n == 9) {
                number = 0;
                while (i < sentence.size() && sentence[i] != ' ') {
                    i++;
                }
            }
            i++;
        }
        if (number > 0) {
            maxi = max(maxi, number);
        }
        return maxi;
    }
};
