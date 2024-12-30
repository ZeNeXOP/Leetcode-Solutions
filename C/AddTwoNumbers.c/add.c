
struct ListNode {
      int val;
      struct ListNode *next;
};
 

struct ListNode* createNode(int value){
    struct ListNode* l3 = (struct ListNode*)malloc(sizeof(struct ListNode));
    l3->val = value;
    l3->next = NULL;
    return l3;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* temp1 = l1; 
    struct ListNode* temp2 = l2;

    struct ListNode* head = NULL;
    struct ListNode* tail = NULL;

    int carry = 0;
    int value = 0;

    while(temp1 != NULL || temp2 != NULL || carry != 0){

        int val1 = (temp1 != NULL) ? temp1->val : 0;
        int val2 = (temp2 != NULL) ? temp2->val : 0;

        int temp = val1 + val2 + carry;
        carry = temp/10;
        value = temp%10;
        struct ListNode* l3 = createNode(value);
        if(head == NULL){
            head = l3;
            tail = l3;
        }
        else {
            tail->next = l3;
            tail = l3;
        }
        temp1 = (temp1 != NULL) ? temp1->next : NULL;
        temp2 = (temp2 != NULL) ? temp2->next : NULL;
    }

    if (carry > 0) {
        struct ListNode* l3 = createNode(carry);
        tail->next = l3;
    }

    return head;
}