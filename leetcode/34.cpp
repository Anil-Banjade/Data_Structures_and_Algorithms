class Solution {
public:
   ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        ListNode* node=head;
        int count=0;
        while(node!=NULL){

            count++;
            node=node->next;
        }

        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        temp=dummy;

        for(int i=0;i<count-n;i++){
            temp=temp->next;
        }
        ListNode* curr=temp;
        curr=curr->next;
        temp->next=temp->next->next;
        
        delete curr;
        return dummy->next;

    }
};