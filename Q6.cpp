#include <iostream>
#include<vector>
using namespace std;
/*--------------------------------Q6--------------------------------*/

/* Solution
- The loop (while) if current node point to next differ from NULL then do
- If current node has the same value with the next node, 
I will get the next of next of current node (next), after that delete current has the same value. Finally, set current point to next equal (next)
If current node hasn't have the same value with the next node, then go to next node and loop again.
*/

/* The complexity of algorithm
    O(N)
*/

struct ListNode {
    int val;
    ListNode *next;
};
ListNode* Q6(ListNode* head) {
    ListNode* cur = head;
    ListNode* next;
    if(cur == NULL){
        return NULL;
    }
    while(cur->next != NULL){
        if(cur->val == cur->next->val){
            next = cur->next->next;
            delete(cur->next);
            cur->next = next;
        }
        else{
            cur = cur->next;
        }
    }
    return head;
}
int main()
{
    
    struct ListNode* head = NULL;
    struct ListNode* second = NULL;
    struct ListNode* third = NULL;
    head = new ListNode();
    second = new ListNode();
    third = new ListNode();
    head ->val = 1;
    head->next = second;
    
    second ->val = 1;
    second->next = third;
    
    third ->val = 3;
    third->next = NULL;
    // cout << Q5(a,b);
    head = Q6(head);
    for(ListNode* i = head;i!=NULL;i=i->next){
        cout <<i->val;
    }


    return 0;
}
