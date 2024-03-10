/*
    You are given two non-empty linked lists representing two non-negative integers. 
    The digits are stored in reverse order, and each of their nodes contains a single digit.
     Add the two numbers and return the sum as a linked list.
        Input: l1 = [2,4,3], l2 = [5,6,4]
        Output: [7,0,8]
        Explanation: 342 + 465 = 807.


*/
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }
};
Node* head1 = nullptr;
Node* head2 = nullptr;
Node* head3 = nullptr;



void  insertList1(int data1){
    Node* temp1 = head1;

    if(head1 == nullptr){
        Node* new_node = new Node(data1,nullptr);
        head1 = new_node;
    }
    else{

        Node* new_node = new Node(data1,nullptr);

        while(temp1->next != nullptr){
            temp1 = temp1->next; 
        }
        temp1->next = new_node;

    }

}


void  insertList2(int data2){
    Node* temp2 = head2;

    if(head2 == nullptr){
        Node* new_node = new Node(data2,nullptr);
        head2 = new_node;
    }
    else{

        Node* new_node = new Node(data2,nullptr);

        while(temp2->next != nullptr){
            temp2 = temp2->next; 
        }
        temp2->next = new_node;

    }

}

void displayList1(){
    Node* temp1 = head1;
    if(head1 == nullptr){
        cout<<"No Element is Present !!"<<endl;
    }
    else{
        while(temp1){
            cout<<temp1->data<<" ";
            temp1 = temp1->next;
        }
        cout<<endl;

    }
    
}


void displayList2(){
    Node* temp2 = head2;
    if(head2 == nullptr){
        cout<<"No Element is Present !!"<<endl;
    }
    else{
        while(temp2){
            cout<<temp2->data<<" ";
            temp2 = temp2->next;
        }
        cout<<endl;
    }
        
}

void reverseSingleLL1(){
    Node* current = head1;
    Node* temp    = nullptr;
    Node* prev    = nullptr;
    if(head1 == nullptr ){
        cout<<"No element is present !!"<<endl;

    }
    else{
        while(current){
            temp = current;
            current = current->next;
            temp->next = prev;
            prev = temp;

        }
        head1 = temp;
    }


}



void reverseSingleLL2(){
    Node* current = head2;
    Node* temp    = nullptr;
    Node* prev    = nullptr;
    if(head2 == nullptr ){
        cout<<"No element is present !!"<<endl;

    }
    else{
        while(current){
            temp = current;
            current = current->next;
            temp->next = prev;
            prev = temp;

        }
        head2 = temp;
    }


}

void insertNewList(int rem){
    Node* new_node = new Node(rem,nullptr);
    Node* temp = head3;
    if(head3 == nullptr){
        head3=new_node;
    }
    else{
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = new_node;
    }


}

void Display(){
    Node* temp = head3;
    if(head3 == nullptr){
        cout<<"No element is present !!"<<endl;
    }
    else{
        while(temp){
            cout<<temp->data<<" ";
            temp = temp->next;
        
        }
        cout<<endl;
    }
}


void result(){
    reverseSingleLL1();
    reverseSingleLL2();
    int sum1=0;
    int sum2=0;

    Node* temp1 = head1;
    Node* temp2 = head2;
    while(temp1){
        sum1 = (sum1*10) + temp1->data;
        temp1 = temp1->next; 

    }

    while(temp2){
        sum2 = (sum2*10) + temp2->data;
        temp2 = temp2->next; 

    }

    //cout<< " Sum1 = "<<sum1<<endl;
    //cout<< " Sum2 = "<<sum2<<endl;

    int ans = sum1 + sum2;
    int rem;
    

    while(ans > 0){
        rem = ans % 10;
        insertNewList(rem);
        ans = ans / 10;
    }
    Display();
    
}


int main(){
    int choice;
    while(true){
        cout<<"Press : 1 : For Insert a node in Linked List1"<<endl;
        cout<<"Press : 2 : For Insert a node in Linked List2"<<endl;
        cout<<"Press : 3 : For Display Linked List1"<<endl;
        cout<<"Press : 4 : For Display Linked List2"<<endl;
        cout<<"Press : 5 : For Answer !! "<<endl;
        cout<<"Press : 6 : For Exit "<<endl;
        cout<<"Please Enter Your Choice "<<endl;
        cin>>choice;

        if(choice == 1){
            int data1;
            cout<<"Please enter an integer"<<endl;
            cin>>data1;
            insertList1(data1);

        }

        else if(choice == 2){
            int data2;
            cout<<"Please enter an integer"<<endl;
            cin>>data2;
            insertList2(data2);

        }
        else if(choice == 3){
            displayList1();
        }
        else if(choice == 4){
            displayList2();
        }
        else if(choice == 5){
            result();
        }
        else if(choice == 6){
            exit(0);
        }
        else{
            cout<<"Invalid Input !!"<<endl;
        }

    }
}