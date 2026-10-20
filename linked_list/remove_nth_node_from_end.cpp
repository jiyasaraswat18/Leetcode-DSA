class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
     int cut=0;
     ListNode* temp=head;
     while(temp!=NULL){
        cut++;
        temp=temp->next;
     }
     if(cut==n){
       ListNode* newhead=head->next;
        delete(head);
        return newhead; 
     } 
     int res=cut-n;
     temp=head;
     while(temp!=NULL){
        res--;
        if(res==0) break;
        temp=temp->next;
     }
      ListNode* delNode=temp->next;
     temp->next=temp->next->next;
     delete(delNode);
     return head;

    }
};