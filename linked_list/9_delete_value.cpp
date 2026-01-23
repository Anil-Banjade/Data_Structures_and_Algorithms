#include <bits/stdc++.h>
using namespace std;

class Node{
public:
  int data;
  Node* next;

  Node(int data1, Node* next1){
    data=data1;
    next=next1;
  }

  Node(int data1){
    data=data1;
    next=nullptr;
  }

}; 


Node* convertArr2LL(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;

    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        
        mover=temp;
        }

    return head;
}

int lengthOfLL(Node* head){
    int count=0; 
    Node* temp=head;
    while(temp){
        temp=temp->next;
        count++;
    }
    return count;
}

int checkIfPresent(Node* head, int val){
    Node* temp=head;
    while(temp){
        if(temp->data==val) return 1;
        temp=temp->next;
        
    }
    return 0;
}



Node* removeHead(Node* head){
    if(head==NULL) return head;
    
    Node* temp=head;
    head=head->next;
    delete temp; //we are freeing we can use delete temp, here we are deleting first node
    return head;

}
void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;

    }
    cout<<endl;
}

Node* removeTail(Node* head){
    if(head==NULL|| head->next==NULL) return NULL; //first case if linked list is null return null, 2nd case is if only one element in linked list ie head->next==NULL then we won't delete that node bcz deleting that will led to deletion of linked list as a whole.
    Node* temp=head; 
    while(temp->next->next != NULL){ //temp->next points the member of node pointed by temp but temp->next->next will point to element next from previous node 
    //suppose we are in second last element, so last element next will be a null pointer so, we run loop while temp->next->next!=NULL which means we will run this loop until we are in second last element.
    //temp->next will point to next of 2nd last element but temp->next->next will point to next member of last element.
        temp=temp->next;// we keep on going bcz it's not the second last element.

    }
    //on completion of loop, temp will be pointing to second last node.
    delete temp->next;
    temp->next=nullptr;
    return head;
}



Node* removeKthElement(Node* head,int k){
    if(head==NULL) return head;
    //case if k=1 ie remove first element of a linked list. easier to start with edges first.
    if(k==1){
        Node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }

    //case let's imagine we have to remove 2nd last element so 3rd last next should have last node's pointer so we use previous 

    //this works also for if last element is asked. since second last will store nullptr.
    int count=0;
    Node* temp=head;
    Node* prev=NULL;

    while(temp!=NULL){
        count++;
        if(count==k){
            //suppose k is 3 so we have to delete 3rd node.
            prev->next=prev->next->next; // prev will have 2nd node pointer so prev->next ie member of second node will point to 4th node using prev->node->node.
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;


}



Node* removeElement(Node* head,int num){
    if(head==NULL) return head;
    
    if(head->data==num){
        Node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }

    Node* temp=head;
    Node* prev=NULL;

    while(temp!=NULL){
        
        if(temp->data==num){
           
            prev->next=prev->next->next; 
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;


}


int main(){
  vector<int>arr={3,4,5,7};

  Node* head=convertArr2LL(arr);
  head=removeElement(head,5);
  print(head);

 return 0;
}

