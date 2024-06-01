class Solution {
  public:
    string oddEven(string s) {
        unordered_map<char,int> mp;
        set<char>s1;
        int x=0,y=0;
        
        for(int i=0;s[i];i++){
            mp[s[i]]++;
            s1.insert(s[i]);
        }
        
        for(char i:s1){
            if((i-'a'+1)%2==0 &&  mp[i]%2==0)x++;
            if((i-'a'+1)%2!=0 && mp[i]%2!=0)y++;
        }
        
        
        if((x+y)%2==0)return "EVEN";
        else return "ODD";
    }
};
