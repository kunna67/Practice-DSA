class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while(head != nullptr && head->val == val ){// 1->1->1->null , val = 1
            head = head->next;
        }
        if(head == nullptr){
            return head;
        }
        
        ListNode* temp = head;
        while(temp->next != nullptr && temp != nullptr){
            if(temp->next->val == val){
                temp->next = temp->next->next;
                // After doing the above step, I am not updating "curr" because of these type of test cases:
				// 1->2->3->6->6->6->5->null  val = 6
            }else{
                temp = temp->next;
            }
        }
        
        return head;
    }
};