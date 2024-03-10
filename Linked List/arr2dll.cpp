#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1,Node* back1,Node* next1){
        data = data1;
        next = next1;
        back = back1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};
   
Node* convertArr2DLL(int arr[],int size){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i = 1; i < size; i++){
        Node* new_node = new Node(arr[i],prev,nullptr);
        prev->next     = new_node;
        new_node->back = prev;
        new_node->next = nullptr;
        prev = new_node;
    }
    return head;
}

Node* deleteFBeg(Node* head){
    Node* temp = head;
    head       = head->next;
    head->back = nullptr;
    temp->next = nullptr;
    free(temp);

    return head;
}




int main(){
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the element in array"<<endl;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    Node* count ;
    Node* head = convertArr2DLL(arr,size);
    
    Node* temp = head;
    while(temp){
        count = temp;
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

    while(count){
        cout <<count->data<<" ";
        count = count->back;
    }
    cout<<endl;

    Node* head1 = deleteFBeg(head);
    Node* temp1 = head1;
    while(temp1){
        count = temp1;
        cout<<temp1->data<<" ";
        temp1 = temp1->next;
    }

}