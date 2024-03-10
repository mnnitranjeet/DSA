
/*
        Rearrange a linked list in such a way that all odd position 
        nodes are together and all even positions node are together, 
                Examples: 

                Input:   1->2->3->4
                Output:  1->3->2->4
                Input:   10->22->30->43->56->70
                Output:  10->30->56->22->43->70



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
Node* head  = nullptr;
Node* head1 = nullptr;
Node* head2 = nullptr;

void  insertList(int data){
    Node* temp = head;

    if(head == nullptr){
        Node* new_node = new Node(data,nullptr);
        head = new_node;
    }
    else{

        Node* new_node = new Node(data,nullptr);

        while(temp->next != nullptr){
            temp = temp->next; 
        }
        temp->next = new_node;

    }

}

void Display(Node* headd){
    Node* temp = headd;
    if(headd == nullptr){
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



void result(){
    Node* temp = head;
    int count = 1;
    if(head == nullptr){
        cout<<"No element is Present !!"<<endl;
    }
    else{
        while(temp){

            if(count % 2 == 1){
                insertList1(temp->data);
                temp = temp->next;
                count++;

            }
            else{
                insertList2(temp->data);
                temp = temp->next;
                count++;

            }

        }
    }

    Node* temp1 = head1;
    if(head1 == nullptr){
        cout<<"No element is Present !!"<<endl;
    }
    else{
        while(temp1->next != nullptr){
            temp1 = temp1->next;
        }
        Node* temp2 = head2;
        if(head2 == nullptr){
            //Display(head1);
        }
        else{
            while(temp2 != nullptr){
                temp1->next = temp2;
                temp1       = temp1->next;
                temp2       = temp2->next;  
            }
        }
    }
    Display(head1);
    exit(0);
    
}






int main(){
    int choice;
    while(true){
        cout<<"Press : 1 : For Insert a node in Linked List"<<endl;
        cout<<"Press : 2 : For Display Linked List"<<endl;
        cout<<"Press : 3 : For Answer !! "<<endl;
        cout<<"Please Enter Your Choice "<<endl;
        cin>>choice;
        
       
        

        if(choice == 1){
            int data1;
            cout<<"Please enter an integer"<<endl;
            cin>>data1;
            insertList(data1);

        }

        else if(choice == 2){
            Display(head);

        }
        else if(choice == 3){
            result();
           
        }
       
        else{
            cout<<"Invalid Input !!"<<endl;
        }

    }
}