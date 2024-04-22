class Solution {
  public:
    int minRow(int n, int m, vector<vector<int>> a) {
        // code here
        int prev = 0;
        int index = 0;
        for(int i=0; i<a.size(); i++){
            int count = 0;
            for(int j=0; j<a[i].size(); j++){
                if(a[i][j] == 1) count++;
            }
            
            if(index == 0 && prev == 0 ){
                if(count > 0 ){
                    prev = count;
                    index = i;
                }
            }
            else if(count <= prev ){
                if(count == prev){
                    index = min(i,index);
                }
                else{
                    index = i;
                    prev = count;
                }
            }
        }
        return index+1;
    }
};
