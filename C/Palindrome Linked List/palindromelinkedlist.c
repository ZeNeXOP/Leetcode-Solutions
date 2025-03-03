bool isPalindrome(struct ListNode* head) {
    struct ListNode* temp = head;

    if (head == NULL || head->next == NULL){
        return true;
    }
    int a[100000], i = 0, n = 0;
    while(temp != NULL){
        a[i] = temp->val;
        temp = temp->next;
        i++;
        n++;
    }
    i = 0;
    int j = n-1;
    while(i < j){
        if (a[i] != a[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}