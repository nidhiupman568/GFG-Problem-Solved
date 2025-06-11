class Solution {
  public:
    int findLength(vector<int> &color, vector<int> &radius) {
        // code here
        vector<int> balls;
        int n = color.size();
        for(int i=0;i<n;i++){
            if(balls.empty()) balls.push_back(i);
            else{
                int ind = balls.back();
                if(color[ind] == color[i] 
                    && radius[ind] == radius[i]){
                    balls.pop_back();
                } else balls.push_back(i);
            }
        }
        
        return balls.size();
    }
};
