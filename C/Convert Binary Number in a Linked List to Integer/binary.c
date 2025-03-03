#include <math.h>
int getDecimalValue(struct ListNode* head) {
   struct ListNode* temp = head;
   int a[30];
   int i=0,n=0;
   while(temp!=NULL){
        a[i] = temp->val;
        i++;
        n++;
        temp = temp->next;
   } 
    int ans = 0;
    int j = 0;
   for (int i = n-1; i>=0; i--){
        if (a[i] == 1){
            ans = ans + pow(2,j);
        }
        j++;
   }

   return ans;
}