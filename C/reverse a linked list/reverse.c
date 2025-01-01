struct ListNode* reverseList(struct ListNode* head) {
    if (head == NULL || head->next == NULL){
        return head;
    }

    struct ListNode* temp = head;
    struct ListNode* prev = head;

    if(temp->next == NULL){
        return head;
    }

    temp = temp->next;
    prev = prev->next;

    if(prev->next == NULL){
        head->next = NULL;
        temp->next = head;
        head = temp;
        return head;
    }

    prev = prev->next;
    head->next = NULL;
    while (prev->next != NULL){
        temp->next = head;
        head = temp;
        temp = prev;
        prev = prev->next;
    }

    temp->next = head;
    head = temp;
    prev->next = temp;
    temp = prev;
    head = prev;

    return head;
}