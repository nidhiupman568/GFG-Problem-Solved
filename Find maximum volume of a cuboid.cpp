class Solution {
  public:
    double maxVolume(double p, double a) {
        double D=sqrt(pow(p,2)-24.0*a);
        double f=(p-D)/12.0;
        double s=(p+2.0*D)/12.0;
        return pow(f,2)*s;
    }
};

