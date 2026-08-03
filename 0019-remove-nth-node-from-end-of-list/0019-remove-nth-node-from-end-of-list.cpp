class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=0;
        ListNode* curr=head;
        while(curr!=NULL){
            len++;
            curr=curr->next;
        }
        if(len==n) return head->next;
        curr=head;
        for(int i=0;i<len-n-1;i++) curr=curr->next;
        curr->next=curr->next->next;
        return head;
    }
};