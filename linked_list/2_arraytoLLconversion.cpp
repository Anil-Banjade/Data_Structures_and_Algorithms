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
    Node* head=new Node(arr[0]);// here using 2nd constructor to create object no need to pass nullptr
    //above rhs creates first node with data 0 and next as nullptr and head is the pointer which points to that node/object.

    Node* mover=head;//mover is also the pointer which points to the first node at this point.the type of pointer is Node* which mean it can point to the object of type Node*.


    for(int i=0;i<arr.size();i++){
        Node* temp=new Node(arr[i]);// rhs creates 2nd node and temp is the pointer which points to that node.
        mover->next=temp;//mover is the pointer to the first node and it sets the element of the first node i.e. next with the pointer temp. which means next of first node is set as pointer to 2nd node.
        
        mover=temp; //can do mover=mover->next; 
        // mover pointer now points to 2nd node as temp points to 2nd node.
        }

    return head;
}

int main(){
  vector<int>arr={2,4,5,7};

  Node* head=convertArr2LL(arr);
  cout<<head->data;

 return 0;
}
