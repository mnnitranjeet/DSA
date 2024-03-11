 //Sort a LinkedList of 0's, 1's and 2's
 /*   
 
 


    Input: 1 -> 1 -> 2 -> 0 -> 2 -> 0 -> 1 -> NULL 
    Output: 0 -> 0 -> 1 -> 1 -> 1 -> 2 -> 2 -> NULL

    Input: 1 -> 1 -> 2 -> 1 -> 0 -> NULL 
    Output: 0 -> 1 -> 1 -> 1 -> 2 -> NULL 


 */




#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};



Node* head = nullptr;

void insertNode(int data){
    Node* temp = head;
    Node* new_node = new Node(data);

    if(head == nullptr){
        head = new_node;
    }
    else{
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = new_node;
    }
}

void Display(){
    Node* temp = head;
    if(head == nullptr){
        cout<<"No Element is present !!"<<endl;
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
    Node* temp = head;
    int count0 = 0; 
    int count1 = 0;
    int count2 = 0;
    if(head == nullptr){
        cout<<"No Element is present !!"<<endl;
    }
    else{
        while(temp){
            if(temp->data == 0){
                count0++;
            }
            else if(temp->data == 1){
                count1++;
            }
            else{
                count2++;
            }
            temp = temp->next;
        }
        
    }
    temp = head;
    if(count0 > 0){
        Node* new_node = new Node(0);
        head           = new_node;
        temp           = head;
        count0--;

    }
    else if(count1 > 0){
        Node* new_node = new Node(1);
        head           = new_node;
        temp           = head;
        count1--;

    }
    else if(count2 > 0){
        Node* new_node = new Node(1);
        head           = new_node;
        temp           = head;
        count2--;

    }
    while(count0  > 0){
        
        Node* new_node = new Node(0);
        temp->next = new_node;
        temp = temp->next;
        count0--;

    }

    while(count1 > 0){
        Node* new_node = new Node(1);
        temp->next = new_node;
        temp = temp->next;
        count1--;

    }

    while(count2 > 0){
        Node* new_node = new Node(2);
        temp->next = new_node;
        temp = temp->next;
        count2--;

    }
    Display();

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
            insertNode(data1);

        }

        else if(choice == 2){
            Display();

        }
        else if(choice == 3){
            result();
           
        }
       
        else{
            cout<<"Invalid Input !!"<<endl;
        }

    }
}