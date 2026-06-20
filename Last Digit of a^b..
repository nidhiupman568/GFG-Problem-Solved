class Solution {
public:
    int getLastDigit(string& a, string& b) {
        vector<long long> v;
        long long x = a[a.length()-1]-'0';
        long long y = 0;
        for(int i = 0;i<b.length();i++){
            y = y*10 + (b[i]-'0');
        }
        int u = x;
        if(y == 0){
            return 1;
        }
        v.push_back(x);
        unordered_map<long long,long long> mp;
        mp[x]++;
        while(1){
           x = x*u;
           mp[x%10]++;
           if(mp[x%10] > 1){
               break;
           }
           v.push_back(x%10);
        }
        if(y%v.size() == 0){
            return (int)v[v.size()-1];
        }
        return (int)v[(y%v.size())-1];
    } 
};

