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

    return new Node(val,head);
   
}
Node* insertTail(Node* head,int val){
    if(head==NULL){
        return new Node(val);
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;

    }
    Node* newNode=new Node(val);
    temp->next=newNode;
    return head;
}

Node* insertAtKthPosition(Node* head, int el, int k){
    if(head==NULL){
        if(k==1){
            return new Node(el); 
        }

    else{ 
        return head;
    }
    } 

    if(k==1){ 
        Node* newHead=new Node(el,head);
        return newHead; 
    }

    
    
    int count=0;
    Node* temp=head;
    while(temp!=NULL){
        count++;
        if(count== (k-1)){
            Node* x=new Node(el);
            x->next=temp->next;
            
            temp->next=x;

            break;
        }
        temp=temp->next; 
        
    }
    return head;



}

//insert element el=10 before give node has value=5 provided

Node* insertBeforeValue(Node* head, int el, int val){
    if(head==NULL){// if ll is empty then it can't have value so we return null.
      return NULL;
    } 

    if(head->data==val){ // if asked to insert at first.
        Node* newHead=new Node(el,head);
        return newHead; 
    }

    
    
    
    Node* temp=head;

    bool found=false;
    while(temp->next!=NULL){//i am staying at 2nd last position and saying run loop while last element is not null
        
        if(temp->next->data==val){//we will remain at 2nd last position and check at last position
            Node* x=new Node(el);
            x->next=temp->next;
            
            temp->next=x;
            found=1;

            break;
        }
        temp=temp->next; 
        
    }
    if(found==false){
        cout<<"not found";
    }
    return head;



}

int main(){
  vector<int>arr={3,4,5,7};

  Node* head=convertArr2LL(arr);
  head=insertBeforeValue(head,17,5); 
  print(head);

 return 0;
}







































