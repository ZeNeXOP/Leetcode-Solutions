struct ListNode* removeElements(struct ListNode* head, int val) {

    if (head == NULL){
        return head;
    }
    struct ListNode* dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
    dummy->next = head;
    head = dummy;

    struct ListNode* prev = head;
    struct ListNode* curr = head->next;


    while (curr->next != NULL){
        if (curr->val == val){
            prev->next = curr->next;
            curr->next = NULL;
            curr = prev->next;
        }
        else {
            prev = curr;
            curr = curr->next;
        }
    }

    if(curr->val == val){
        prev->next = NULL;
    }

    head = head->next;
     
    return head;
}