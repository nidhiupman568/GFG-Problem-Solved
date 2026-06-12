class Solution {
public:
bool kSubstr(string &s, int k) {
// code here
int i = 0;
unordered_map<string, int> m;
while (i<s.size()) {
string sub = s.substr(i, k);
m[sub]++;
i += k ;
}
 
if (m.size() > 2)
return false;
 
if(m.size() == 1) return true;
 
for (auto [key, value]: m) {
if(value == 1) return true;
 
}
 
return false;
 
}
};
