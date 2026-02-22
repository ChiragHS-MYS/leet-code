// Last updated: 22/2/2026, 10:20:27 pm
class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==INT_MIN&&divisor==-1)
        return INT_MAX;
       return  dividend/divisor;
    }
};