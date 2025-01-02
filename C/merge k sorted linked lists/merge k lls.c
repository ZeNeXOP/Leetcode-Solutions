/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode* temp1 = list1;
    struct ListNode* temp2 = list2;
    struct ListNode* temp3 = NULL;
    struct ListNode* head = list1;

    if (list1 == NULL) return list2;
    if (list2 == NULL) return list1;

    if (list1->val > list2->val) {
        temp1 = list2;
        temp2 = list1;
        head = list2;
    }


    while (temp1 != NULL && temp2 != NULL){
            if (temp1->next == NULL || temp2->val <= temp1->next->val){
                temp3 = temp2->next;
                temp2->next = temp1->next;
                temp1->next = temp2;
                temp2 = temp3;
            }
            temp1 = temp1->next;
    }

    return head;
}

struct ListNode* mergeKLists(struct ListNode** lists, int listsSize) {
    if (listsSize == 0) return NULL;
    if (listsSize == 1) return lists[0];
    while (listsSize > 1) {
        int newSize = (listsSize + 1) / 2;
        for (int i = 0; i < listsSize / 2; i++) {
            lists[i] = mergeTwoLists(lists[i], lists[listsSize - i - 1]);
        }
        listsSize = newSize;
    }

    return lists[0];
}