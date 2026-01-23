#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* back;

    Node(int data1, Node* next1, Node* back1){
        data=data1;
        next=next1;
        back=back1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};

Node* convertArrtoDLL(vector<int> &arr){
    Node* head=new Node(arr[0]);

    Node* prev=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}

Node* deleteHead(Node* head){
    if(head==NULL || head->next ==NULL){//1st case if empty linked list and 2nd case if present only one node.

        return NULL;
    }
    Node* prev=head;
    head=head->next;// head moved to 2nd position

    head->back=nullptr;
    prev->next=nullptr;

    delete prev;
    return head;



}

void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
} 


Node* deleteTail(Node* head){
    if(head==NULL || head->next==NULL){// same as in deleteHead case.
        return NULL;
    }

    Node* tail=head;
    while(tail->next!=NULL){//we will go to the last node
        tail=tail->next;//to move forward


    }
    Node* newTail=tail->back;//advantage here is that we don't have to use previous like in single ll.
    newTail->next=nullptr;
    tail->back=nullptr;
    delete tail;
    return head;

}
// delete kth element given that k=1 to N, if n=4 then k will always be between 1 to 4.

Node* removeKthElement(Node* head, int k){
    if(head==NULL){
        return NULL;
    }
    int count=0; 
    Node* kNode=head;
    while(kNode!=NULL){
        count++;
        if(count==k) break;
        kNode=kNode->next;
    }
    
    Node* prev=kNode->back;
    Node* front=kNode->next;

    if(prev==NULL && front==NULL){
        return NULL;
    }
    else if(prev==NULL){
        return deleteHead(head);
    }
    else if(front==NULL){
        return deleteTail(head);
    }
    
    prev->next=front; 
    front->back=prev; 
    
    kNode->next=nullptr; 
    kNode->back=nullptr;
    delete kNode; 
    return head;
}   

//delete the node of the dll here node!=head 

void deleteNode(Node* temp){
    Node* prev=temp->back;
    Node* front=temp->next;

    if(front==NULL){//if last element
        prev->next=nullptr;
        temp->back=nullptr;
        free(temp);

        return;
    }

    prev->next=front;
    front->back=prev;

    temp->next=temp->back=nullptr;
    free(temp); 


}

int main(){
    vector<int> arr={3,7,5,4};
    Node* head=convertArrtoDLL(arr);

    //deleteNode(head->next);//mean head is pointing to node containing 3 so head->next is pointing to node containing 7 so we are supplying that node to delete.
    deleteNode(head->next->next);
    // we can't do deleteNode(head); //bcz we will have to take new head to 7 so we will have to write conditions for it.

    print(head);

    return 0;
}

