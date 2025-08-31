class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
       int i=0,j=arr.size()-1,result=0,ans=0;
       while(i<=j)
       {
           if(arr[i]<=arr[j])
           {
               result=arr[i]*(j-i);
               i++;
           }
           else
           {
           result=arr[j]*(j-i);
           j--;
           }
           if(result>ans)
           {
               ans=result;
           }
       }
       return ans;
    }
};
