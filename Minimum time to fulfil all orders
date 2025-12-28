class Solution {
  public:
    int valid(vector<int>& ranks, int n,int time){
        int count = 0;
        for(auto it:ranks){
            int donut = (int)( (sqrt(1 + 8LL * time / it) - 1) / 2 );
            count+= donut;
            if(count >= n) return true;
        }
        return count>=n;
    }
    int minTime(vector<int>& ranks, int n) {
        // code here
        int start = 0;
        int end = INT_MAX;
        while(start<end){
            int mid = start+(end-start)/2;
            if(valid(ranks,n,mid)){
                end = mid;
            }
            else{
                start = mid+1;
            }
        }
        return end;
    }
};
