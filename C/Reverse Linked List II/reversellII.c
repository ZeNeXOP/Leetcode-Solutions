struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {
    struct ListNode* dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
    dummy->next = head;
    if (head == NULL || head->next == NULL){
        return head;
    }
    if (left == right){
        return head;
    }
    

    struct ListNode* lcurr = head;
    struct ListNode* lprev = dummy;
    struct ListNode* lnext = head->next;
    struct ListNode* rcurr = head;

    for (int i = 0; i < right-1 ; i++){
        rcurr = rcurr->next;
    }

    head = dummy;
    
    for (int i = 0; i < (left-1) ; i++){
        lprev = lcurr;
        lcurr = lnext;
        lnext = lnext->next;
    }

    lcurr->next = rcurr->next;
    lprev->next = rcurr;
    while (lnext!=rcurr){
        lprev = lcurr;
        lcurr = lnext;
        lnext = lnext->next;
        lcurr->next = lprev;
    }

    lnext->next = lcurr;

    head = dummy->next;

    return head;
}