class Solution {
  public:
    int getSingle(vector<int> &arr) {
        // code here
        int ones(0), twos(0);
        for(auto it: arr) {
            ones = (ones ^ it) & ~twos;
            twos = (twos ^ it) & ~ones;
        }
        return ones;
    }
};
