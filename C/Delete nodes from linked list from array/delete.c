struct ListNode* modifiedList(int* nums, int numsSize, struct ListNode* head) {
    for (int i = 0; i<numsSize; i++ ){
        struct ListNode *prev, *nt = head;
        while (nt != NULL){
            if (nt->val == nums[i]){
                struct ListNode* temp = nt;
                if (nt == head){
                    head = nt->next;
                    nt = head;
                }
                else{
                    prev->next = nt->next;
                    nt = nt->next;
                }
                free(temp);
            }
            else {
                prev = nt;
                nt = nt->next;
            }
        }
    }
    return head;
}