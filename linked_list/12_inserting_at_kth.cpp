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



//inserting at kth position size of linked list is n then size will be n+1
//insert at k=1, means insert at first position

Node* insertAtKthPosition(Node* head, int el, int k){
    if(head==NULL){// if empty linked list 
        if(k==1){//if enter at first position of an empty linked list
            return new Node(el); 
        }

    else{ //if k is more than 1 in an empty linked list it's not possible.
        return head;
    }
    } 

    if(k==1){//if insertion is at first of an already existing linked list 
        Node* newHead=new Node(el,head);
        return newHead; //or can directly do return new Node(el,head);
    }

    //if to insert at middle, end addition will also be included.
    
    int count=0;
    Node* temp=head;
    while(temp!=NULL){
        count++;
        if(count== (k-1)){// i will have to be in 2nd position if i have to insert at 3rd position i.e. k=3
            Node* x=new Node(el);//new node is created if i have one position back of desired.
            x->next=temp->next;//new node is pointing to what previous node was pointing to.
            //insted of these above 2 lines can do directly Node* x=new Node(el,temp->next);
            temp->next=x;//2nd node will be pointing to new node created.

            break;
        }
        temp=temp->next; //if the required position is not found move forward
        
    }
    return head;



}



int main(){
  vector<int>arr={3,4,5,7};

  Node* head=convertArr2LL(arr);
  head=insertAtKthPosition(head,17,2); 
  print(head);

 return 0;
}


