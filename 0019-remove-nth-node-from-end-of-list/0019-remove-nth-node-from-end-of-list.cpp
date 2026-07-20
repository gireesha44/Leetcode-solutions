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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt = 0;
        ListNode* temp = head;
        while(temp){
            cnt++;
            temp=temp->next;
        }
        if(cnt==n){
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
        temp = head;
        for(int i=1;i<cnt-n;i++)temp=temp->next;

        ListNode* x = temp->next;
        temp->next = temp->next->next;
        delete x;

        return  head;
    }
};