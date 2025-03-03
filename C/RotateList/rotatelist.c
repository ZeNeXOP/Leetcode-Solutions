struct ListNode* rotateRight(struct ListNode* head, int k) {
    

    struct ListNode* temp = head;



    int length = 1;

    if (head == NULL || head->next == NULL){
        return head;
    }
    while(temp->next != NULL){
        temp = temp->next;
        length++;
    }

    k = k%length;
    if (k == 0){
        return head;
    }

    temp->next = head;
    int TailPos = length - k;

    struct ListNode* tail = head;
    for (int i = 1; i<TailPos; i++){
        tail = tail->next;
    }

    head = tail->next;
    tail->next = NULL;

    return head;
}