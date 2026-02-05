// Insertion Sort List

/*
Given the head of a singly linked list, sort the list using insertion sort, and return the sorted list's head.

The steps of the insertion sort algorithm:

Insertion sort iterates, consuming one input element each repetition and growing a sorted output list.

At each iteration, insertion sort removes one element from the input data, finds the location it belongs within the sorted list and inserts it there.
It repeats until no input elements remain.

The following is a graphical example of the insertion sort algorithm. The partially sorted list (black) initially contains only the first element in the list. One element (red) is removed from the input data and inserted in-place into the sorted list with each iteration.
*/

#include<iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr){}
};

ListNode *insertionSortList(ListNode *head){
    if(!head || !head->next) return head;

    ListNode dummy(0);
    ListNode* curr = head;
    
    while(curr){
        ListNode* nextNode = curr->next;

        ListNode* prev = &dummy;
        while(prev->next && prev->next->val < curr->val){
            prev = prev->next;
        }

        curr->next = prev->next;
        prev->next = curr;

        curr = nextNode;
    }

    return dummy.next;
}

int main(){
    ListNode* head = new ListNode(-1);
    head->next = new ListNode(5);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(0);

    head = insertionSortList(head);

    ListNode* temp = head;
    while(temp){
        cout << temp->val << " ";
        temp = temp->next;
    }
    return 0;
}