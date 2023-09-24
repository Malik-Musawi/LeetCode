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
    ListNode* deleteDuplicates(ListNode* head) {
        set<int> s; // set of unique values
        ListNode* curr = head; // current node is head
        ListNode* prev = NULL; // previous node is NULL which means that the current node is the head
        while (curr != NULL) { // while the current node is not NULL
            // if the current node's value is in the set, then delete the current node
            if (s.find(curr->val) != s.end()) {
                // if the current node is the head, then set the head to the next node
                prev->next = curr->next;
                curr = curr->next;
            } else {
                // if the current node's value is not in the set, then add the current node's value to the set
                s.insert(curr->val);
                prev = curr;
                curr = curr->next;
            }
        }
        return head;
    }
};