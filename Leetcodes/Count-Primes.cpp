
static int x = []()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    return x;
}();


class Solution {
public:
    
    bool isPrime(int num)
    {
                
       for(int i=2;i<=sqrt(num);i++)
        {
            if(!(num%i)) return 0;
        }
        
        return 1;
    }
    
    int countPrimes(int n) {
        
        if(n<=1) return 0;
        
        int prime = 0;
        
        for(int i = 2;i<(n);i++) 
        {
            if(isPrime(i)) prime++;
        }
        
        
        return prime;
    }
};