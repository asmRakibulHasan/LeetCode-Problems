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
    ListNode* deleteMiddle(ListNode* head) {
        int size = find_size(head);
        if(size==1) 
        {
            head=NULL;
            return head;
        }
        
        ListNode* ptr = head;
        
        int mid = size/2;
        
        int siz = 1;
        while(siz<mid and ptr!=NULL) 
        {
            ptr=ptr->next;
            siz++;
        }  
        
        ListNode* temp = ptr;
        temp = temp->next;
        
        ptr->next = temp->next;

        return head;
    }
};