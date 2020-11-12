#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    
 //   void swap(int&,int&);
    
    int removeDuplicates(vector<int>& nums) {
        
        
    int len = nums.size(),count=0;
    
    for(int i =0;i<=len-2;i++)
    {
        if(nums[i]==nums[i+1]) count++;
    }
    
    int req = len-count,i = 0,j=i+1,z=0;
        
    for(;i<=len-2;i++)      
    {
        
        if(z==req) break;
        
        if(nums[i]==nums[i+1]||nums[i]>nums[i+1])
        {
            
            while(j<len&&nums[j]<=nums[i])
            {
                j++;
            }
            
         //   cout<<nums[i+1]<<" "<<nums[j]<<" j "<<j<< "\n";
            
           if(j<len) swap(nums[i+1],nums[j] );
            
            z++;
            
          
        }
    }
                        
        return len-count;
    }
};

