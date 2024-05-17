class Solution {

public:

    int findPair(int n, int x, vector<int> &arr) {

        unordered_map<int, int> mp;

        

        for(auto num: arr) {

            if(mp.count(num - x) or mp.count(x + num))

                return 1;

                

            mp[num]++;

        }

        

        return -1;

    }

};
