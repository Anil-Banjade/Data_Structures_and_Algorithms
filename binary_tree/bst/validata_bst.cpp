// given binary tree evaluate if its a bst.


boolean isValidBST(node* root, long minVal,long maxVal){
    if(root==NULL) return true;
    if(root.val>=maxVal || root.val<=minVal) return false;
    return isValidBST(root.left,minVal,rot.val)&& isValidBST(root.right,root.val,maxVal);
}