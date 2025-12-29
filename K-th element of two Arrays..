class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        // code here
        int n1=a.size();
        int n2=b.size();
        int ind1=0,ind2=0, cnt=0;
        while(ind1<n1 && ind2<n2){
            if(a[ind1]<=b[ind2]){
                if(cnt==k-1)return a[ind1];
                ind1++;
            }else{
                if(cnt==k-1)return b[ind2];
                ind2++;
            }
            cnt++;
        }
        while(ind1<n1){
            if(cnt==k-1)return a[ind1];
            ind1++;
            cnt++;
        }
        while(ind2<n2){
            if(cnt==k-1)return b[ind2];
            ind2++;
            cnt++;
        }
        return -1;
    }
};
