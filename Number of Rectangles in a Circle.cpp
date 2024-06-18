class Solution {
public:
    int rectanglesInCircle(int r) {
        int count = 0;
        
        // Iterate over all possible lengths and widths
        for (int a = 1; a <= 2 * r; ++a) {
            for (int b = 1; b <= 2 * r; ++b) {
                // Calculate the half-diagonal of the rectangle
                double halfDiagonal = sqrt((a / 2.0) * (a / 2.0) + (b / 2.0) * (b / 2.0));
                // Check if the half-diagonal is less than or equal to the radius
                if (halfDiagonal <= r) {
                    count++;
                }
            }
        }
        
        return count;
    }
};
