#include <bits/stdc++.h>

using namespace std; 
struct node{
    int data;
    struct node* left, *right;

};

struct node* newNode(int data){
    struct node* node=(struct node*)malloc(sizeof(struct node));
    node->data=data;
    node->left=NULL;
    node->right=NULL;
    return node;
}

node* searchBST(node* root,int target){
    while(root!=NULL && root->data!=target){
        root=target<root->data?root->left:root->right;

    }
    return root;
}


int findCeil(node* root,int key){
    int ceil=-1;
    while(root){
        if(root->data==key){
        ceil=root->data;
        return ceil;
        }
        if(key>root->data){
            root=root->right;
        }else{
            ceil=root->data;
            root=root->left;
        }
    }
    return ceil;
}

int floorBST(node* root,int key){
    int floor=-1;
    while(root){
        if(root->data==key){
            floor=root->data; 
            return floor;
        }
        if(key>root->data){
            floor=root->data;
            root=root->right;
        }else{
            root=root->left;
        }
    }
    return floor;
}

int main(){
    struct node* root=newNode(8);
    root->left=newNode(5);
    root->right=newNode(12);
    root->left->left=newNode(4);
    root->left->right=newNode(7);
    root->left->right->left=newNode(6);
    root->right->left=newNode(10);
    root->right->right=newNode(14);
    root->right->right->left=newNode(13);

    node* found=searchBST(root,10);
    if(found!=NULL){
        cout<<"Found \n";
    }else{
        cout<<"Not found \n";
    }

    int ceil=findCeil(root,9);
    std::cout<<"Ceil is "<<ceil<<"\n";
    int floor=findCeil(root,9);
    std::cout<<"floor is "<<floor<<"\n";
}