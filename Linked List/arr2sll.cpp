#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next){
        data = data1;
        next = next;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }

};


Node* convertArray2LL(int arr[],int size){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i = 1; i < size; i++){
        Node* new_node = new Node(arr[i]);
        mover->next = new_node;
        mover = new_node;

    }
    return head;
}

int lengthLL(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp){
        count++;
        temp = temp->next;
    }
    return count;
}


int checkifPresent(Node* head,int val){
    Node* temp = head;
    
    while(temp){
        if(temp->data == val){
            return val;

        }
        temp = temp->next;
    }
    return -1;

}

int main(){
    int size;
    cout <<"Please Enter the size of array"<<endl;
    cin>> size;
    int arr[size];

    cout<<"Enter the element in array"<<endl;
    for(int i = 0; i < size; i++){
        cin>> arr[i];

    }
    Node* head = convertArray2LL(arr,size);
    int length = lengthLL(head);
    cout<<"Length of linked List is  = "<<length<<endl;
    int val;

    cout<<"Enter the element which you want to search "<<endl;
    cin>>val;

    int data = checkifPresent(head,val);
    if(data == val){
        cout<<"Element "<< val <<" Found"<<endl;
    }
    else{
        cout<<"Element "<< val <<" Not Found"<<endl;
    }

    cout<<"Linked List is  =  ";


    Node* temp = head;
    while (temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
}