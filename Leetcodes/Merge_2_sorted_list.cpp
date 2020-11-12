/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

static int x = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();





class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        if(!l1||!l2) return max(l1,l2);
        
        ListNode *first = l1,*second = l2,*head = NULL,*newnode = NULL,*temp = head;
        
        while(first || second)
        {
            if(!head)
            {
                head = new ListNode(min(first->val,second->val));
                
                temp = head;
                
                (first->val<=second->val) ? first = first->next : second = second->next;
                
            }
            
            else if(!first||!second) 
            {
                if (!first&&second)
                {   
                    newnode = new ListNode(second->val);
                    second = second->next;
                }
                
                else 
                {
                    newnode = new ListNode(first->val);
                    first = first->next;
                }
            
                    
            }
            
            else
            {
                newnode = new ListNode(min(first->val,second->val));
                (first->val<=second->val) ? first = first->next : second = second->next;
            }
            
           temp->next = newnode;
            
          if(newnode) temp = temp->next; 
                
        }
        
        return head;
        
    }
};