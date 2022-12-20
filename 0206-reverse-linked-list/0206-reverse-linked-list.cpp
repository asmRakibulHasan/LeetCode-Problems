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
    
    int find_size(ListNode* head)
    {
        ListNode* ptr = head;
        
        int siz = 0;
        while(ptr!=NULL) siz++,ptr=ptr->next;
        
        return siz;
    }
    
    int call_swap(ListNode* head,int idx,int value)
    {
        ListNode* ptr = head;
        
        int siz = 0;
        while(ptr!=NULL)
        {
            siz++;
            if(siz==idx){
                int x = ptr->val;
                ptr->val=value;
                return x;
            }
            ptr=ptr->next;
        }
        
        return 0;
    }
    
    ListNode* reverseList(ListNode* head) {
        int size = find_size(head);
        int i=1;
        int j=size;
        ListNode* ptr = head;
        while(i<j)
        {
            int x = call_swap(head,j,ptr->val);
            ptr->val = x;
            ptr=ptr->next;
            i++;
            j--;
        }
        
        return head;
    }
};