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
    if(head==NULL|| head->next==NULL) return NULL; 
    Node* temp=head; 
    while(temp->next->next != NULL){ 
    
        temp=temp->next;

    }
    
    delete temp->next;
    temp->next=nullptr;
    return head;
}



Node* removeKthElement(Node* head,int k){
    if(head==NULL) return head;
    
    if(k==1){
        Node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }

    
    int count=0;
    Node* temp=head;
    Node* prev=NULL;

    while(temp!=NULL){
        count++;
        if(count==k){
           
            prev->next=prev->next->next; 
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



Node* insertHead(Node* head,int val){

    return new Node(val,head);//if null then single element will be created.
   
}
Node* insertTail(Node* head,int val){
    if(head==NULL){
        return new Node(val);// if null then single node is created.
    }
    Node* temp=head;
    while(temp->next!=NULL){//we stop at the last element
        temp=temp->next;

    }
    Node* newNode=new Node(val);//after reaching last new node is created
    temp->next=newNode;//last node is pointing to new node
    return head;
}



int main(){
  vector<int>arr={3,4,5,7};

  Node* head=convertArr2LL(arr);
  head=insertTail(head,17); 
  print(head);

 return 0;
}


