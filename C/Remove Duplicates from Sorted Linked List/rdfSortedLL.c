struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* temp = head;
    if (temp == NULL){
        return head;
    }
    while(temp->next != NULL){
        if (temp->next->val == temp->val){
            temp->next = temp->next->next;
        }
        else {
            temp = temp->next;
        }
    }
    return head;
}