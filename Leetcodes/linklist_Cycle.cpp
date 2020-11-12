/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    
    Solution()
    {
         
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
    
    }
    
    bool hasCycle(ListNode *head) {
    
        ListNode* slow = head, *fast = head;
        
        while(slow&&fast&&fast->next)
        {
            fast = (fast->next)->next;
            
            slow = (slow->next);
            
            if(slow == fast) return 1;
        }
          
        return 0;
    }
};