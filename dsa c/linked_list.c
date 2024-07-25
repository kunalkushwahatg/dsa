/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    
    struct ListNode *temp = NULL;
    int carry = 0;
    while(l1-> next != NULL && l2 -> next != NULL){
        int sum = 0;
        if(l1 -> next != NULL){
            sum += l1 -> val;
        }
        if(l2 -> next != NULL){
            sum += l2 -> val;
        }
        temp -> val = sum + carry;
        carry += sum%10;
        carry = 0;
    }
    return temp;
}