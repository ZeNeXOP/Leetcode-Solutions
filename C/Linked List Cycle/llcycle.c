bool hasCycle(struct ListNode *head) {
    struct ListNode *fast = head, *slow = head;
    if (head == NULL){
        return false;
    }
    while (true){
        if (fast == NULL || fast->next == NULL || fast->next->next == NULL){
            return false;
        }
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast){
            return true;
        }
    }
    return false;
}