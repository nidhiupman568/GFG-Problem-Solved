class Solution {
  public:
    int maxPeopleDefeated(int p) {
        // Code Here
        int i = 1, res = 0;
        
        while (i*i <= p) {
            p -= (i*i);
            i++;
            res++;
        }
        
        return res;
    }
};
