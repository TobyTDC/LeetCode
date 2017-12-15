/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
private:
    int preSum = 0;
public:
    TreeNode* convertBST(TreeNode* root) {
        stack<TreeNode*> tracker;
        TreeNode* next = root;
        
        while(true) {
            if(nullptr == next) {
                if(tracker.empty()) {
                    break;
                }
                next = tracker.top();
                tracker.pop();
            }
            else
            {            
                while(next->right != nullptr) {
                    tracker.push(next);
                    next = next->right;
                }
            }
            
            if(nullptr == next) {
                break;
            }
            
            next->val += preSum;
            preSum = next->val;
            
            next = next->left;
        }
        
        return root;
    }
};
