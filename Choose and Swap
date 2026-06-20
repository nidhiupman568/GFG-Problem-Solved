class Solution {
  public:
    string chooseSwap(string &s) {
        map<char,pair<bool,bool>>map;
        for(int i=0;i<s.size();i++)
        {
            map[s[i]]={true,false};
        }
        int i=0;
        char y='#';
        char z='#';
        bool check=false;
        while(i<s.size())
        {
            char c=s[i];
            for(auto it:map)
            {
                char x=it.first;
                bool a=it.second.first;
                bool b=it.second.second;
                if(x<c && a && !b)
                {
                    y=x;
                    z=s[i];
                    check=true;
                    break;
                }
            }
            if(check)
            break;
            map[s[i]]={true,true};
            i++;
        }
        if(i>=s.size())
        return s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==y)
            s[i]=z;
            else if(s[i]==z)
            s[i]=y;
        }
        return s;
    }
};
