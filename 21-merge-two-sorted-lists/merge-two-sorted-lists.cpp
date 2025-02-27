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
    ListNode* addnode(ListNode* head, int val){
        ListNode* newnode = new ListNode(val);
        if(head==nullptr){
            return newnode;
        }
        ListNode* temp = head;

        while(temp->next){
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->next = NULL;
        return head;
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* res = nullptr;
        while(list1!=nullptr || list2!=nullptr){
            if(list1!=nullptr && (list2==nullptr || list1->val < list2->val)){
                res = addnode(res, list1->val);
                list1 = list1->next;
            }
            else if(list2!=nullptr){
                res = addnode(res, list2->val);
                list2 = list2->next;
            }
        }
         return res;
        }
};