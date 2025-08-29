// Binary Tree Inorder Traversal

/**Given the root of a binary tree, return the inorder traversal of its nodes' values. */


function inorderTraversal(root){
    let result = [];
    function inorder(node){
        if(!node) return;
        inorder(node.left);
        result.push(node.val);
        inorder(node.right);
    }
    inorder(root);
    return result;
}

