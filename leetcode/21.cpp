// 21. Merge Two Sorted Lists
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
        next=NULL;
    }

    Node* mergeTwoLists(Node* list1, Node* list2);

};



void display(Node* head){
    while(head!=NULL){
        std::cout<<" "<<head->data<<" ";
        head=head->next;
    }
    std::cout<<"\n";
}



// leetcode

Node* mergeTwoLists(Node* list1, Node* list2){
    Node* head=new Node(0);
    Node* current =head;

   
    while(list1!=NULL && list2!=NULL){

    if(list1->data<list2->data){
        current->next=new Node(list1->data);
        list1=list1->next;
    }else{
        current->next=new Node(list2->data);
        list2=list2->next;
    }
    current=current->next;


}
if(list1!=NULL){
    current->next=list1;
}else{
    current->next=list2;
}
return head->next;

}

int main(){
    // int arr[]={2,3,7,17};
    vector<int>arr={3,4,5,7};

    Node* head=new Node(arr[0]);
    head->next=new Node(arr[1]);
    head->next->next=new Node(arr[2]);
    head->next->next->next=new Node(arr[3]);
    


    int arr1[]={1,5,7,77};
    Node* head1=new Node(arr1[0]);
    head1->next=new Node(arr1[1]);
    head1->next->next=new Node(arr1[2]);
    head1->next->next->next=new Node(arr1[3]);

    display(head);
    display(head1);

    Node* head3=mergeTwoLists(head,head1);

    display(head3);
}

