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
    ListNode* middleNode(ListNode* head) {
        int count=0;
        ListNode *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
            count++;
        }
        int ans=0;
        if(count%2!=0){
               ans=(count/2)+1;
        }
        else{
            ans=(count+1)/2;
        }
        ListNode *bolo=head;
        while(bolo->next!=NULL && ans>0){
            //bolo=temp;
            bolo=bolo->next;
            ans--;
        }
        return bolo;
    }
};