/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    struct ListNode* temp3 = head;
    struct ListNode* temp2 = head;
    struct ListNode* temp1 = head;

    if(head == NULL || head->next == NULL){
        return head;
    }  //if for 0 or 1 elements

    temp2 = temp2->next;
    if (temp2->next == NULL){
        head = temp2;
        temp2->next = temp1;
        temp1->next = NULL;
        return head;
    }  // if for 2 elements
    
    temp3 = temp2->next;
    temp1->next = temp3;
    temp2->next = temp1;
    head = temp2;

    if (temp3->next == NULL){
        return head;
    }  // if for 3 elements, in case 4 element or more, it goes into the loop, with 1st pair sorted
    temp2 = temp3;
    temp3 = temp3->next;
    temp1->next = temp3;
    while(true){
        if (temp3->next == NULL){
            temp3->next = temp2;
            temp2->next = NULL;
            break;
        }
        if (temp3->next->next == NULL){
            temp2->next = temp3->next;
            temp3->next = temp2;
            break;
        }
        else {
            temp2->next = temp3->next;
            temp3->next = temp2;
        }
        // now handling temp variables for cases which have an additional pair ahead and needs to loop
        temp1 = temp2;
        temp2 = temp1->next;
        temp3 = temp2->next;
        temp1->next = temp3;


    }

    return head;
}