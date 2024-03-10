#include<bits/stdc++.h>
#include<stack>
using namespace std;


class Node{
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1,Node* next1,Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }

    
};

Node* head = nullptr;


void insertNewNode(int data){
    Node* temp = head;
    if(head == nullptr){
        Node* new_node = new Node(data,nullptr,nullptr);
        head = new_node;


    }
    else
    { 
        Node* new_node = new Node(data,nullptr,temp);
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = new_node;
    
    }
}

void display(){
    Node* temp = head;

    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void reverseLinkedList(){
    stack<int> st;
    Node* temp = head;
    while(temp){
        st.push(temp->data);
        temp = temp->next;
    }

    temp = head;

    while(temp){
        temp->data = st.top();
        temp       = temp->next;
        st.pop();


    }
    display();
}






int main(){
    int choice;
    while(true)
    {
    cout<<"Press : 1 : For Insert New Node In Linked List"<<endl;
    cout<<"Press : 2 : For Reverse The Linked List"<<endl;
    cout<<"Press : 3 : For Display Linked List"<<endl;
    cout<<"Press : 4 : For Exit "<<endl;
    cout<<"Please Enter Your Choice "<<endl;
    cin>>choice;

    if(choice == 1){
        int data;
        cout<<"Enter an element"<<endl;
        cin>>data;
        insertNewNode(data);
    }
    else if(choice == 2){
        reverseLinkedList();

    }
    else if(choice == 3){
        display();
    }
    else if(choice == 4){
        exit(0);
    }
    else{
        cout<<"Invalid Input !!"<<endl;
    }


    }
}