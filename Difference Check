class Solution {
  public:
    int minDifference(vector<string> &arr) {
        // code here
        int n=arr.size();
        vector<long long>ans;
        for(string ch:arr)
        {
            int hr=stoi(ch.substr(0,2));
            int min=stoi(ch.substr(3,2));
            int sec=stoi(ch.substr(6,2));
            
            
            long long total=hr*3600+min*60+sec;
            ans.push_back(total);
        }
        
        sort(ans.begin(),ans.end());
        long long maxi=INT_MAX;
        for(int i=1;i<n;i++)
        {
            long long diff=ans[i]-ans[i-1];
            maxi=min(maxi,diff);
        }
         long long wrapDiff = 86400 - ans[n - 1] + ans[0];
         maxi = min(maxi, wrapDiff);

        return (int)maxi;
    }
};
