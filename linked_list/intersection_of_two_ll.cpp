
class Solution {
public:
    ListNode *collision(ListNode *t1, ListNode *t2,int d){
        while(d){
            d--;
            t2=t2->next;
        }
        while(t1!=t2){
            t1=t1->next;
            t2=t2->next;
        }
        if(t1==NULL) return 0;
        return t1;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
      ListNode* t1=headA;
      int n1=0;
      while(t1!=NULL){
        n1++;
        t1=t1->next;
      }
      ListNode* t2=headB;
      int n2=0;
      while(t2!=NULL){
        n2++;
        t2=t2->next;
      }
      if(n1<n2) return collision(headA,headB,n2-n1);
      else return collision(headB,headA,n1-n2);
    }
};