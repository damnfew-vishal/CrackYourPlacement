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
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return true;
        }
        // finding out the middle element
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=reverseList(slow->next);
        // Basically connecting our slow next to the reverse of the slow next of the RHS half
        slow=slow->next;
        // checking whether our dummy is equal to slow or not
        while(slow!=NULL){
            if(head->val!=slow->val){
                return false;
            }
            head=head->next;
            slow=slow->next;
        }
        return true;
    }
    ListNode*reverseList(ListNode*head){
        ListNode*dummy=NULL;
        while(head!=NULL){
            ListNode*next=head->next;
            head->next=dummy;
            dummy=head;
            head=next;
        }
        return dummy;
    }
};