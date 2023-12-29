class Solution{
public:
    void fun(int i,int end,string &s,set<string>&st,int k){
        string str=s.substr(i,k);
        st.insert(str);
    }
    int kSubstrConcat (int n, string s, int k)
    {
        // Your Code Here
        if(n%k!=0)return 0;
        
        set<string>st;
        for(int i=0;i<n;){
            fun(i,i+k,s,st,k);
            i=i+k;
        }
       if(st.size()<=2) return 1;
        return 0;
    }
};
