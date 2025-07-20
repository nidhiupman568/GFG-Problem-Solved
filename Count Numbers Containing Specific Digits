class Solution {
  public:
    int countValid(int n, vector<int>& arr) {
        // code here
        int totalNum = 1;
        for(int i = 1; i <= n; i++){
            if(i == 1){
                totalNum = totalNum * 9;
            } else {
                totalNum = totalNum * 10;
            }
        }
        
        int digits = arr.size();
        int not_containing = 1;
        for(int i = 1; i <= n; i++){
            if(i ==1){
                if(arr[0] == 0){
                    not_containing = not_containing * (9 - digits + 1);
                }else {
                    not_containing = not_containing * (10 - digits - 1);
                }
            } else {
                not_containing = not_containing * (10 - digits);
            }
        }
        
        return totalNum - not_containing;
    }
};
