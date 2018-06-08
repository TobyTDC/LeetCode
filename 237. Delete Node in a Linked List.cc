class Solution {
public:
    void deleteNode(ListNode* node) {
        
          *node = *node->next;
        
        // node->val=node->next->val;
        // ListNode *tmp=node->next;
        // node->next=tmp->next;
        // delete tmp;
    }
};
