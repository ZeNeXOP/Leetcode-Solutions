/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {

    if (head == NULL){
        return 0;
    }

    struct ListNode* temp = head;
    struct ListNode* t1 = head;
    struct ListNode* t2 = t1->next;


    
    while(t2 != NULL){
        if (t1->val == t2->val){
            while(true){
                if (t1->val != t2->val){
                    if (temp == head && temp->val == t1->val){
                        temp = t2;
                        head = temp;
                        t1 = temp;
                        break;
                    }
                    else if (temp == head && temp->val != t1->val){
                        temp->next = t2;
                        t1 = temp;
                        break;
                    }
                    else{
                        temp->next = t2;
                        t1 = temp;
                        break;
                    }
                }
                if(t1->val == t2->val && t2->next == NULL){
                    if(head == temp){
                        if(temp->val == t1->val){
                            head = NULL;
                            return head;
                        }
                        else{
                            temp->next = NULL;
                            return head;
                        }
                        
                    }
                    temp->next = NULL;
                    break;
                }
                t1 = t1->next;
                t2 = t2->next;
            }
        }
        if(t1 == t2){
            t2 = t2->next;
        }
        else{
            temp = t1;
            t1 = t1->next;
            t2 = t2->next;
        }   
    }

    return head;
}


struct ListNode* deleteDuplicates(struct ListNode* head) {
    if (!head) return NULL;

    // temp acts as the dummy node
    struct ListNode dummy;
    dummy.next = head;
    struct ListNode* temp = &dummy; // prev pointer
    struct ListNode* t1 = head; // current pointer
    struct ListNode* t2;     

    while (t1) {
        t2 = t1->next;
        // Move t2 to the end of this duplicate group
        while (t2 && t2->val == t1->val) {
            t2 = t2->next;
        }

        if (t1->next == t2) {
            // No duplicates in this group; move temp forward
            temp = t1;
        } else {
            // Duplicates found; skip the entire group
            temp->next = t2;
        }

        t1 = t2; // Move to the next distinct value
    }

    return dummy.next;
}