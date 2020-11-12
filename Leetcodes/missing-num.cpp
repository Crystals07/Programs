class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int nxor = 0,size = nums.size();
        
        for(int i=0;i<=size;i++)
         {
             nxor ^= i;
         }
        
        for(auto n: nums)
        {
            nxor ^= n;
        }
        
        return nxor;
    }
};