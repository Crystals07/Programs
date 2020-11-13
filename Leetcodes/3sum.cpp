static int x = []()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    return 0;
}();


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
                
        
        vector<vector<int> > v;
        
        if(nums.size()<3) return v;
        
        int flag = 1;
        
        for(auto i: nums) if(i) flag = 0;
        
        if(flag) 
        {
            v.push_back({0,0,0});
            return v;
        }
        
        sort(nums.begin(),nums.end());
        
        set<vector<int> > s;
        
        int curr = 0;
        
        for(int i=0;i<=nums.size()-3;i++)
        {
            curr = i;
            
            int l = curr + 1,r = nums.size()-1;
            
            while(l<r)
            {
                if(!(nums[curr]+nums[l]+nums[r]))
                {
                     vector<int> temp;
                     temp.push_back(nums[curr]);
                     temp.push_back(nums[l]);
                     temp.push_back(nums[r]);                    
                    if(s.find(temp)==s.end())
                    {
                        v.push_back(temp);
                        s.insert(temp);
                    }
                    
                   // break;
                    r--;
                }
                
                else if((nums[curr]+nums[l]+nums[r])<0) l++;
                
                else r--;
            }
        }
        
        return v;
    }
};