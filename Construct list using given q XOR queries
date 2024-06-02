class Solution {
  public:
    vector<int> constructList(int q, vector<vector<int>> &queries) {
        vector<int> v;
        v.push_back(0);
        int totalXor=0;
        for(int i=0;i<q;i++){
            int a=queries[i][0];
            int b=queries[i][1];
            if(a==0){
                v.push_back(b^totalXor);
            }else if(a==1){
                totalXor=totalXor^b;
            }
        }
        for(int i=0;i<v.size();i++){
            v[i]=v[i]^totalXor;
        }
        sort(v.begin(),v.end());
        return v;
    }
};
