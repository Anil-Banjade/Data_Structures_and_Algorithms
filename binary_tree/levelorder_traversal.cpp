#include <iostream>
#include <vector>
#include <queue>
using namespace std;

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

void inOrderTrav(Node* curr,std::vector<int> &inOrder){
    if(curr==NULL){
        return;
    }
    inOrderTrav(curr->left,inOrder);
    inOrder.push_back(curr->data);
    inOrderTrav(curr->right,inOrder);
}

void postOrder(Node* node){
    if(node==NULL){
        return;
    } 
    postOrder(node->left);
    postOrder(node->right);
    std::cout<< node->data<<" ";
}


// level order traversal

vector<int> levelOrder(Node* root){
    vector<int>ans;
    if(root=NULL)
        return ans;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        std::cout<<temp->data<<" ";
        if(temp->left!=NULL){
            q.push(temp->left);
        }
        if(temp->right!=NULL){
            q.push(temp->right);
        }
        ans.push_back(temp->data);
    }
    return ans;
}

int main(){
    struct Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->right=new Node(5);
    preOrder(root);
    std::cout<<"\n";
   
    std::vector<int> inOrderResult;
    inOrderTrav(root,inOrderResult);
    std::cout<<"In-order traversal results: ";
    for(int val:inOrderResult){
        std::cout<< val<<" ";
    }


    std::cout<<"\n";
    postOrder(root);
    std::cout<<"\n";

    std::vector<int> result=levelOrder(root);
    std::cout<<"Level-order traversal: ";
    for(int val:result){
        std::cout<<val<<" ";
    }

}

