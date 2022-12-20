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
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode *ptr = head;
        int num = 1;
        int f = 0;
        while(ptr!=NULL)
        {
            num*=2;
            f|=ptr->val;
            ptr=ptr->next;
        }
        
        if(f==0) return 0;
        
        int ans = 0;
        
        ptr = head;
        num/=2;
        while(ptr!=NULL)
        {
            if(ptr->val) ans+=num;
            num/=2;
            ptr=ptr->next;
        }
        
        return ans; 
        
    }
};