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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL)return list2;
        if(list2==NULL)return list1;
        ListNode* head1 = list1,*head2=list2;
        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;
        while(head1!=NULL && head2!=NULL){
            if(head1->val<head2->val){
                temp->next = head1;
                head1=head1->next;
            }
            else{
                temp->next = head2;
                head2=head2->next;
            }
            temp = temp->next;
        }
        if(head1)temp->next = head1;
        else temp->next = head2;
        return dummy->next;
    }
    ListNode* findMiddle(ListNode* head){
        ListNode* slow = head,*fast = head,*prev=NULL;
        while(fast && fast->next){
            prev= slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        if(prev!=NULL)prev->next = NULL;// break the link 
        return slow;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL)return head;
        ListNode* mid = findMiddle(head);
        ListNode* left = head,*right = mid;
        left = sortList(head);
        right = sortList(mid);
        return mergeTwoLists(left,right);
    }
};