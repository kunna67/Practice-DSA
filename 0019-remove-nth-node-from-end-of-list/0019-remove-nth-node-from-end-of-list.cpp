class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* newHead = reverse(head);
        
        // Whether the node to be removed is the last node or not
        if (n == 1) {
            return reverse(newHead->next);
        }
        
        ListNode* curr = newHead;
        // Move curr to one node previous to the node to be removed
        for (int i = 1; i < n - 1; i++) {
            curr = curr->next;
        }
        // Update the link
        curr->next = curr->next->next;
        
        return reverse(newHead);
    }
    
    ListNode* reverse(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = nullptr;
        
        while (curr != nullptr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        return prev;
    }
};