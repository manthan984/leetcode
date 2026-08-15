/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr) return list2;
        if (list2 == nullptr) return list1;

        ListNode* head = list1;
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        
        if (list2->val < list1->val){
            head = list2;
            temp1 = list2;
            temp2 = list1;
        }

        while (temp1->next != nullptr && temp2 != nullptr){
            
            while (temp2 != nullptr && temp1->next->val >= temp2->val){
                ListNode* l1next = temp1->next;
                ListNode* l2next = temp2->next;

                temp1->next = temp2;
                temp2->next = l1next;

                temp2 = l2next;
            }
            temp1 = temp1->next;
        }
        
        if (temp2 != nullptr) {
            temp1->next = temp2;
        }
        
        return head;
    }
};