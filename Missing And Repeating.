class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n = arr.size();
        int f = 0 , s = n;
        vector<int> temp (n+1 , 0);
        for(int it : arr) temp[it]++;
        for(int i = 1; i <= n ; i++){
            if(temp[i] == 2) f = i;
            if(temp[i] == 0) s = i;
        }
        return {f,s};
    }
};
