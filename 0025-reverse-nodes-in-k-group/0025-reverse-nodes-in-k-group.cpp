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
    pair<ListNode*, ListNode*> reversek(ListNode* start, ListNode* last){
        ListNode* curr = start, *prev = nullptr;
        ListNode* endNode = last->next;
        while(curr != endNode){
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return {prev, curr};
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head || k == 1) return head;
        ListNode* temp = head, *start = head;
        ListNode* prevGroupTail = nullptr;
        int cnt = 1;
        int s = 0;

        while(temp != nullptr){
            if(cnt == 1){
                start = temp;
            }
            ListNode* nextNode = temp->next; 
            if(cnt % k == 0){
                pair<ListNode*, ListNode*> x = reversek(start, temp); 
                if(cnt == k && s != 1){
                    head = x.first;
                }
                if (prevGroupTail != nullptr) {
                    prevGroupTail->next = x.first;
                }
                start->next = x.second; 
                prevGroupTail = start; 
                cnt = 1;
                s = 1;
                temp = nextNode;
                continue;
            }
            temp = nextNode;
            cnt++;
        }
        return head;
    }
};
