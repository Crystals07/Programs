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

static int x =[]()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    return x;
}();




class Solution {
public:
    
   
    
    bool isPalindrome(ListNode* head) {
        
        if(!head||!head->next) return 1;
        
        ListNode* slow = head,*fast = head,*prevodd = slow;
        
        while(fast&&fast->next)
        {
             fast = (fast->next)->next;
            
             if(fast&&!fast->next) prevodd = slow;
                 
             if(fast) slow = slow->next;
                          
                                 
        }
        
        if(!fast)    //Even nodes
        {
            
             ListNode* newnode = slow->next;
            
             slow->next = NULL;
        
                
             //Reverse newly created node
            
            ListNode* prev = NULL,*curr = newnode,*Next = curr;
            
            while(Next)
            {
           
                
                Next = curr->next;
                
                curr->next = prev;
                
                prev = curr;
                
               if(Next) curr = Next;
            }
            
            ListNode* start = head,*trav=curr;
            
            
            //Check for palid
            
            while(start)
            {   
                
                if(start->val!=curr->val) return 0;
                
                start = start->next;
                
                curr = curr->next;
            }           
                 
        }
        
        
        else
        {
             prevodd->next = NULL;    //Odd nodes
            
             ListNode*  newnode = slow->next;   
            
             slow->next = NULL;   //Now prevodd points to end of first list      
                   
      
            //Reverse newly created node
            
            ListNode* prev = NULL,*curr = newnode,*Next = curr;
            
            while(Next)
            {
                Next = curr->next;
                
                curr->next = prev;
                
                prev = curr;
                
               if(Next) curr = Next;
            }
            
            ListNode* start = head;
            
            //Check for palindrome cond
            
            while(start)
            {
                if(start->val!=curr->val) return 0;
                
                start = start->next;
                
                curr = curr->next;
            }
            
            
        
        }
      
        
        return 1;
    }
};