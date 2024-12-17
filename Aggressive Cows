class Solution {
  public:
    bool isPossible(vector<int> &stalls,int n, int c,int mid){
        int cows=1, lastStallPos = stalls[0];
        for(int i=1;i<n;i++)  {
            if((stalls[i]-lastStallPos) >= mid){
                cows++;
                lastStallPos=stalls[i];
            }
            
            if (cows==c){
                return true;
            }
        }
        
        return false;
    }
    
    int aggressiveCows(vector<int> &stalls, int c) {
        int n = stalls.size();
        int ans=-1;
        sort(stalls.begin(),stalls.end());
        int st=0,end=stalls[n-1]-stalls[0];
        while(st<=end){
            int mid= st + (end-st)/2;
            if(isPossible(stalls,n,c,mid)){
                ans=mid;
                st=mid+1;
            }
            else {
                end=mid-1;
            }
        }
        return ans;
    }
};
