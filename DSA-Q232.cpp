// Sort List 

/*
Given the head of a linked list, return the list after sorting it in ascending order.
*/

#include <iostream>
using namespace std;

struct ListNode { 
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if (!head || !head->next) {
            return head;
        }

        // Split the list into two halves
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;

        while (fast && fast->next) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        prev->next = nullptr; // Cut the list into two halves

        // Sort each half
        ListNode* l1 = sortList(head);
        ListNode* l2 = sortList(slow);

        // Merge the sorted halves
        return merge(l1, l2);
    }
private:
    ListNode* merge(ListNode* l1, ListNode* l2) {
        ListNode dummy;
        ListNode* tail = &dummy;

        while (l1 && l2) {
            if (l1->val < l2->val) {
                tail->next = l1;
                l1 = l1->next;
            } else {
                tail->next = l2;
                l2 = l2->next;
            }
            tail = tail->next;
        }

        tail->next = l1 ? l1 : l2;

        return dummy.next;
    }
};

int main() {
    // Example usage:
    ListNode* head = new ListNode(4);
    head->next = new ListNode(2);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(3);

    Solution solution;
    ListNode* sortedHead = solution.sortList(head);

    // Print sorted list
    ListNode* current = sortedHead;
    while (current) {
        cout << current->val << " ";
        current = current->next;
    }
    return 0;
}