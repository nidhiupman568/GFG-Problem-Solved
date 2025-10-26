class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code here
        int cost =0;
        multiset<int>st;
        for(int it : arr)st.insert(it);
        while (st.size() > 1){
            int num1 = *st.begin();
            st.erase(st.begin());
            int num2 = *st.begin();
            st.erase(st.begin());
            int curr_cost = num1+num2;
            cost += curr_cost ;
            st.insert(curr_cost );
        }
        return cost;
    }
};
