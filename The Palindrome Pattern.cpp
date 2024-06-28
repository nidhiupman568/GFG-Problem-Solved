class Solution {
public:
    string pattern(vector<vector<int>> &arr) {
        int n = arr.size();
        vector<int> rs; 
        vector<int> cs;
        for (int i = 0; i < n; i++) {
            bool rowSym = true;
            bool colSym = true;
            int x = 0, y = n - 1;
            while (x < y) { 
                if (arr[i][x] != arr[i][y]) {
                    rowSym = false;
                }
                if (arr[x][i] != arr[y][i]) {
                    colSym = false;
                }
                if (rowSym==false && colSym==false){ 
                    break;
                }
                x++;
                y--;
            }
            if (rowSym) {
                rs.push_back(i);
            }
            if (colSym) {
                cs.push_back(i);
            }
        }
        string ans = "";
        if (!rs.empty()) {
            ans += to_string(rs.front()); 
            ans += ' ';
            ans += 'R';
        } else if (!cs.empty()) {
            ans += to_string(cs.front());
            ans += ' ';
            ans += 'C';
        } else {
            ans = "-1";
        }
        return ans;
    }
};
