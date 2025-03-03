void deleteNode(struct ListNode* node) {
    struct ListNode* next = node;
    
    next = node->next;
    node->next = next->next;
    node->val = next->val;
    next->next = NULL;
    
    free(next);

}