// 328. Odd Even Linked List
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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* odd = new ListNode();
        ListNode* even = new ListNode();
        ListNode* od = odd;
        ListNode* ev = even;
        int i = 0;

        while (head != nullptr) {
            i++;
            if (i % 2 != 0) {
                od->next = head;
                od = od->next;
            } else {
                ev->next = head;
                ev = ev->next;
            }
            head = head->next;
        }
        od->next = even->next;
        ev->next = nullptr;
        return odd->next;
    }
};
