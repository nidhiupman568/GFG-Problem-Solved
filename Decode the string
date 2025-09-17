class Solution {
  public:
    string decodedString(string &s) {
        // code here
        stack<string>num;
        string res="";
        int c=0;
        for(char ch:s )
        {
            if(ch==']')
            {
                string str="";
                while(num.top()!="[")
                {
                   str=num.top()+str;
                   num.pop();
                }
                num.pop();
                res="";
                res=str+res;
                str=res;
                string dig="";
                while(!num.empty() && isdigit(num.top()[0]))
                {
                    dig=num.top()+dig;
                    num.pop();
                }
                long long n= stoll(dig);
                while(--n > 0)
                {
                     res+=str;
                }
                
                num.push(res);
            }else
            {
                num.push(string()+ch);
            }
        }
        num.pop();
        while(!num.empty())
        {
            res=num.top()+res;
            num.pop();
        }
        return res;
    }
};
