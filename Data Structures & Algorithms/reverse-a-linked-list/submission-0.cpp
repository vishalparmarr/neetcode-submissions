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
    ListNode* reverseList(ListNode* head) {
        
        if(head == nullptr || head -> next == nullptr)
            return head;

        ListNode* temp = head -> next;
        head -> next = nullptr;
        while(temp != nullptr) {
            ListNode* temp2 = temp -> next;
            temp -> next = head;

            head = temp;
            temp = temp2;
        }

        return head;
    }
};
