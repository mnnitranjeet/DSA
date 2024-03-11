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
Node* zero_head = new Node(-1);
Node* one_head = new Node(-1);
Node* two_head = new Node(-1);

Node* zero = zero_head;
Node* one  = one_head;
Node* two  = two_head;




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
    if(head == nullptr && head->next == nullptr){
        Display();
    }
    else{
        while(temp){
            if(temp->data == 0){
                zero->next = temp;
                zero       = zero->next;
            }
            else if(temp->data == 1){
                one->next = temp;
                one       = one->next;

            }
            else{
                two->next = temp;
                two       = two->next;
            }
            temp = temp->next;
        }
        one->next = nullptr;
        zero->next = nullptr;
        two->next = nullptr;
        if(zero_head->next != nullptr){
            head = zero_head->next;
            if(one_head->next != nullptr){
                zero->next = one_head->next;
                if(two_head->next != nullptr){
                    one->next = two_head->next;
                }
            }

        }
        else if(zero_head->next == nullptr){
            if(one_head->next != nullptr){
                head = one_head->next;
                if(two_head->next != nullptr){
                    one->next = two_head->next;
                }
            }
        }
        else if(one_head->next == nullptr){
            if(two_head->next != nullptr){
                head = two_head->next;

            }
        }
        
        


        Display();
        
        
    }
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