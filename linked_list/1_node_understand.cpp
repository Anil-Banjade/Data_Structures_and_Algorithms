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




// to find length 

int lengthOfLinkedList(Node* head){
  Node* temp=head;
  int count=0;
  
  while(temp!=NULL){
    temp=temp->next;
    count++;
  }

  return count;

}





int main(){
  vector<int>arr={2,4,5,7};

  // Node* y=new Node(arr[0],nullptr);
  // cout<< y->data<<endl; 
  // cout<< y->next<<endl; 

  Node* head=new Node(arr[0]);
  head->next=new Node(arr[1]); 
  head->next->next=new Node(arr[2]);
  head->next->next->next=new Node(arr[3]);



// head: The first node in the linked list, created with the value arr[0].
// head->next: The second node, created with the value arr[1].
// head->next->next: The third node, created with the value arr[2].
// head->next->next->next: We are setting the "next" pointer of the third node to a new node created with the value arr[3].


// head->next=new Node(arr[1]); 
// so when we do this we are setting next which is element of first node to point to second node ?
// ChatGPT
// Yes, exactly. When you execute the line head->next = new Node(arr[1]);, you are setting the "next" pointer of the first node (referenced by the head pointer) to point to a new node that is created with the value arr[1].

// In other words:

// head: The first node in the linked list, created with the value arr[0].
// head->next: The "next" pointer of the first node, now pointing to the second node created with the value arr[1].

  cout<<lengthOfLinkedList(head)<<"\n";

 return 0;
}
