class Solution {
  public:
    int LCIS(vector<int> &a, vector<int> &b) {
        int n = (int)a.size();
        int m = (int)b.size();

        // lcis[j] = length of LCIS that ends with b[j]
        vector<int> lcis(m, 0);

        for (int i = 0; i < n; ++i) {
            
            int current = 0; // best LCIS length for a[0,...,i-1]
            
            for (int j = 0; j < m; ++j) {
                if (a[i] == b[j]) {
                    
                    if (lcis[j] < current + 1)
                        lcis[j] = current + 1;  // LCIS = previous best LCIS + 1, for current a[i]
                        
                } else if (a[i] > b[j]) {   // update current only for smaller b[j] than a[i]
                    
                    if (lcis[j] > current)
                        current = lcis[j];  // update current to best LCIS for a in less than i
                        
                }
            }
            
        }

        return *max_element(lcis.begin(), lcis.end());
    }
};
