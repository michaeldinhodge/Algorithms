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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {

        ListNode* l3 = NULL;
        int count = 0;
        //basically insertBegin()
        while(l1 != NULL)
        {
            ListNode* newNode = new ListNode;
            newNode->val = l1->val;
            newNode->next = l3;
            l3 = newNode;
            l1 = l1->next;
            count++;

        }
        while(l2 != NULL)
        {
            ListNode* newNode = new ListNode;
            newNode->val = l2->val;
            newNode->next = l3;
            l3 = newNode;
            l2 = l2->next;
            count++;

        }

        ListNode* current = l3;
        ListNode* index = NULL;

        //edge case if list is empty  
        if(l3 == NULL){
            return l3;
        }
        else{
            while(current != NULL) {
                index = current->next;
                while(index != NULL){
                    if(current->val > index->val){
                        ListNode* temp = new ListNode;
                        temp->val = current->val;
                        current->val = index->val;
                        index->val = temp->val;
                    }
                    index = index->next;
                }
                current = current->next;
            }
        }

        cout << "Here is the size : " << count << endl;
        return l3;
    }
};
