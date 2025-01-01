struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {

    struct ListNode* dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
    dummy->next = head;
    
    struct ListNode* temp = head;
    int count = 0;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    int target = count - n + 1;
    temp = dummy;
    for (int i = 1; i < target; i++){
        temp = temp->next;
    }
    struct ListNode* prev = temp->next;
    temp->next = prev->next;
    free(prev);
    struct ListNode* newHead = dummy->next;
    free(dummy);
    return newHead;
}