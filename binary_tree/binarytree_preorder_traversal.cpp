#include <iostream>
struct Node{
    int data;
    struct Node* left;
    struct Node* right; 

    Node(int val){
        data=val;
        left=right=NULL;
    }
};



//root left right
//tc= O(n), sc=O(n), where n is no of node
void preOrder(Node* node){
    if(node==NULL){
        return;
    }
    std::cout<<node->data<<" ";
    preOrder(node->left); 
    preOrder(node->right);

}

// inorder traversal //left root right

void inOrder(Node* node){
    if(node==NULL){
        return;
    }
    inOrder(node->left);
    std::cout<<node->data<<" ";
    inOrder(node->right);
}

void postOrder(Node* node){
    if(node==NULL){
        return;
    } 
    postOrder(node->left);
    postOrder(node->right);
    std::cout<< node->data<<" ";
}

int main(){
    struct Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->right=new Node(5);
    preOrder(root);
    std::cout<<"\n";
    inOrder(root);
    std::cout<<"\n";
    postOrder(root);
    std::cout<<"\n";


}

