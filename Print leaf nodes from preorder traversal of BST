class Solution {
  public:
    vector<int> leafNodes(vector<int>& preorder) {
        vector<int>l;
        int i=0;
        find(preorder,i,INT_MIN,INT_MAX,l);
        return l;
    }

  private:
    void find(const vector<int>& preorder,int& i,int m,int max_, vector<int>& l) {
        if (i >=preorder.size()) return;

        int val=preorder[i];
        if(val<m || val>max_) return;
        i++;
        int cur=i;
        find(preorder,i, m,val-1,l);
        find(preorder,i,val+1,max_,l);
        if(i ==cur) 
            l.push_back(val);
        }
};
