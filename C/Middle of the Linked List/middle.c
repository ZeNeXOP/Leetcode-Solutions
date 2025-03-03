struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode *temp = head;
    struct ListNode *midp = head;
    if (temp == NULL){
        return temp;
    }
    int n = 0;
    while (temp->next != NULL){
        n++;
        temp = temp->next;
    }
    int mid;
    if (n%2 == 0){
        mid = n/2;
    }
    else {
        mid = n/2 + 1;
    }
    for (int i = 0 ;i < mid; i++){
        midp = midp->next;
    }
    return midp;
}