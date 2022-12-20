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
    ListNode* middleNode(ListNode* head) {
        int size = find_size(head);
        
        int mid = size/2;
        mid++;
        
        ListNode* ptr = head;
        
        int siz = 0;
        while(ptr!=NULL)
        {
            siz++;
            if(siz==mid) return ptr;
            ptr=ptr->next;
        }
        
        return head;
    }
};