class Solution1 {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || head->next==NULL|| k==1) return head;
        ListNode* ptr=head;
        int i;
        stack<int> sp;
        while(ptr!=NULL){
            ListNode* pre=ptr;
            for(i=0;i<k;i++){
                if(pre==NULL) return head;
                sp.push(pre->val);
                pre=pre->next;
            }
            for(i=0;i<k;i++){
                ptr->val=sp.top();
                sp.pop();
                ptr=ptr->next;
            }
        }
        return head;
    }
};
class Solution {
public:
    ListNode *oh=NULL,*ot=NULL,*th=NULL,*tt=NULL;
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* ptr=head;
        int n=0;
        while(ptr!=NULL){
            n++;
            ptr=ptr->next;
        }
        auto *f=head;
        while(n>=k){
            int tk=k;
            while(tk>0){
                f=head->next;
                head->next=NULL;
                addnode(head);
                head=f;
                tk--;
            }
            if(oh==NULL){
                oh=th;
                ot=tt;
            }
            else{
                ot->next=th;
                ot=tt;
            }
            th=NULL;
            tt=NULL;
            n-=k;
        }
        ot->next=head;
        return oh;
    }
    void addnode(ListNode * ptr){
        if(th==NULL){
            th=ptr;
            tt=ptr;
        }
        else{
            ptr->next=th;
            th=ptr;
        }
    }
};