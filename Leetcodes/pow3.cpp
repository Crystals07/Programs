class Solution {
public:
    bool isPowerOfThree(int n) {
            
        if(n<=0) return false;
        
        double cal = log2(n)/log2(3);
        
      return pow(3,cal) == n;
      //  return !(cal-trunc(n));
    }
};