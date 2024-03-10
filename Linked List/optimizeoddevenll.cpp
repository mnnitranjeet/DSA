
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
#include<vector>
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







void result(){
    vector<int>vec;
    Node* temp = head;
    
    if(head == nullptr){
        cout<<"No element is Present !!"<<endl;
    }
    else{
        while(temp != nullptr && temp->next != nullptr){
            vec.push_back(temp->data);
            temp = temp->next->next;

        }
        if(temp){
            vec.push_back(temp->data);
        }

        temp = head->next;

        while(temp != nullptr && temp->next != nullptr){
            vec.push_back(temp->data);
            temp = temp->next->next;

        }
        if(temp){
            vec.push_back(temp->data);
        }
        int i = 0;
        temp = head;

        while(temp != nullptr){
            temp->data = vec[i];
            i++;
            temp = temp->next;

        }


            
    }
    Display(head);
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