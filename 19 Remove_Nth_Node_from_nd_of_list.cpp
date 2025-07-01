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
    int count(ListNode* l1){
        int c=0;
        ListNode* temp=l1;
        while(temp!=NULL){
                c++;
                temp=temp->next;
        }
        return c;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int total=count(head);
        int target=total-n;
        int current=0;
       
        if(target==0 ){
            head=head->next;
            return head;
        }else{
            ListNode*temp=head;
            
            while(target>=1 && temp!=NULL ){
                if(target-1==current){

                    if(temp->next->next==NULL){
                     temp->next=NULL;
                    }   else{
                        temp->next=temp->next->next;
                    }
                    return head;
                }
                current++;
                temp=temp->next;
            }
        }
        return head;
    }
};
