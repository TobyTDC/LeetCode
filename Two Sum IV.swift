class Solution {
    func binarySearch(_ root: TreeNode?, _ current: TreeNode, _ target: Int) -> Bool {
        guard let root = root else { return false }
        
        if target > root.val {
            return binarySearch(root.right, current, target)
        } else if target < root.val {
            return binarySearch(root.left, current, target)
        } else {
            return root !== current
        }
    }
    
    func findTarget(_ root: TreeNode?, _ k: Int) -> Bool {
        func walk(_ node: TreeNode?) -> Bool {
            guard let node = node else { return false }
            
            let requiredValue = k - node.val
            let found = binarySearch(root, node, requiredValue)
            
            guard !found else { return true }
            
            return walk(node.left) || walk(node.right)
        }
        
        return walk(root)
    }
}
