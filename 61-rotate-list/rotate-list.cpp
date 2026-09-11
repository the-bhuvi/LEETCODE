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

    int length(ListNode*head){
        int l = 0;
        ListNode* ptr = head;
        while(ptr != nullptr){
            l+= 1;
            ptr = ptr->next;
        }
        return l;
    }
    ListNode* rotateRight(ListNode* head, int k) {
    if(head == nullptr || head -> next == nullptr){
        return head;
    }
       int len = length(head);
       k =  k % len;
       if(k==0){
        return head;
       }
       int n = len-k;
       ListNode* ptr = head;
       while((n-1)!=0){
            ptr = ptr->next;
            n--;
       }
       ListNode* newhead = ptr->next;
       ListNode* tail = newhead;
       while(tail->next != nullptr){
        tail = tail->next;
       }
       tail-> next = head;
       ptr->next = nullptr;
       return newhead;
    }
};