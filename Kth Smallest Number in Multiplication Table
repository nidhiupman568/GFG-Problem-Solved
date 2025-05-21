class Solution {
  public:
  int countElementLessThanMid(int &mid,int m,int n){
      int col=0;
      int row=m-1;
      int count=0;
      while(col<n && row>=0){
          if((row+1)*(col+1)<=mid){
              count+=row+1;
              col++;
          }
          else
          row--;
      }
      return count;
  }
    int kthSmallest(int m, int n, int k) {
       int low=1;
       int high=m*n;
       while(low<high){
           int mid=(low+high)/2;
           int count=countElementLessThanMid(mid,m,n);
           if(count<k)
           low=mid+1;
           else
           high=mid;
       }
       return low;
    }
};
