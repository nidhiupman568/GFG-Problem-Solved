class Solution {
  public:
    int longestSubseq(vector<int>& arr) {
        // code here
        int n=arr.size();
        int ans=0;
        unordered_map<int, int>mp;
        for(int i=0;i<n;i++){
            int num=arr[i];
            
            int seq1=mp.find(num-1)!=mp.end()?mp.find(num-1)->second:0;
            int seq2=mp.find(num+1)!=mp.end()?mp.find(num+1)->second:0;
            
            mp[num]=max(mp[num], 1+max(seq1, seq2));                
            ans=max(ans, mp[num]);
        }
        
        return ans;
    }
};
