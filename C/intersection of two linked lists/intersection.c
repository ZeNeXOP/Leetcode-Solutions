struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {

    if (headA == NULL || headB == NULL) {
        return NULL;
    }

    int len1 = 0 , len2 = 0;
    struct ListNode* temp1 = headA;
    struct ListNode* temp2 = headB;
    while (temp1 != NULL){
        temp1 = temp1->next;
        len1++;
    }
    while (temp2 != NULL){
        temp2 = temp2->next;
        len2++;
    }

    temp1 = headA;
    temp2 = headB;

    int diff = abs(len1 - len2);
    if (len1 > len2) {
        while (diff--) {
           if (temp1 == NULL) break;
            temp1 = temp1->next;
        }
    } 
    else {
        while (diff--) {
            if (temp2 == NULL) break;
            temp2 = temp2->next;
        }
    }



    while (temp1 != NULL && temp2 != NULL){
        if (temp1 == temp2){
            return temp1;
        }
        else {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
    return NULL;
}