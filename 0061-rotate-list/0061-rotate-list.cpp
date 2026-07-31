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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head)return head;
        ListNode* temp = head;
        int cnt = 0;
        while(temp!=NULL){
            temp = temp->next;
            cnt++;
        }
        temp = head;
        k=k%cnt;
        int c = 0;
        while(temp!=NULL && c!=cnt-k-1){
            temp = temp->next;
            c++;
        }
        ListNode* start = temp;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        if(temp!=NULL)temp->next = head;
        head = start->next;
        start->next = NULL;
        return head;
    }
};