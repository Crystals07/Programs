class Solution {
public:
    int climbStairs(int n) {
        if(n<=3) return n;
        
       long int prev = 3,bprev = 2;
        
        for(int i = 4;i<=n;i++)
        {
            prev = prev + bprev;
            
            bprev = prev - bprev;
        }
        
        return prev;
    }
};