class Solution {
  public:
    int countSubarrays(vector<int> &arr, int k) {
        // code here
        map<int,int> mp;
        mp[0] = 1;
        int sum = 0, count = 0;
        
        for(int i=0; i<arr.size(); i++)
        {
            sum += arr[i];
            
            int rem = sum-k;
            
            if(mp.find(rem) != mp.end()){
                count += mp[rem];
            }
            mp[sum]++;
        }
        return count;


    }
};
