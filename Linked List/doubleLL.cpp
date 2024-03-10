#include<bits/stdc++.h>
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
   







void insertAtBeg(int data){
    if(head == NULL){
        Node* new_node = new Node(data,nullptr,nullptr);
        head = new_node;
    }
    else{
        Node* new_node = new Node(data,head,nullptr);
        head->back     = new_node;
        head           = new_node;

    }

}


void insertAtEnd(int data){
    if(head == NULL){
        Node* new_node = new Node(data,nullptr,nullptr);
        head = new_node;
    }
    else{
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;

        }

        Node* new_node = new Node(data,nullptr,temp);
        temp->next     = new_node;
    }

}


void insertAtkthPosition(int data,int k){
    if(k == 1){
        if(head == NULL){
            Node* new_node = new Node(data,nullptr,nullptr);
            head = new_node;

        }
        else{
            Node* new_node = new Node(data,head,nullptr);
            head->back     = new_node;
            head           = new_node;
        }
        
    }
    else{

    
    int count = 1;
    Node* temp = head;
    Node* prev = nullptr;

    while(count < k && temp != nullptr){
        count++;
        prev = temp;
        temp = temp->next;
    }
    
    
    if(temp != nullptr){
        Node* new_node = new Node(data,temp,prev);
        temp->back     = new_node; // chance to get error
        prev->next     = new_node;
    }
    else{
        Node* new_node = new Node(data,nullptr,prev);
        prev->next     = new_node;

    }
    
}
}

void insertAtBeforeNode(int data,int val){
    Node* temp = head;
    Node* prev = nullptr;

    while(temp != nullptr && temp->data != val){
        prev = temp;
        temp = temp->next;

    }
    if(temp == nullptr){
        cout<<"Invalid Input !!"<<endl;
    }
     else if(prev != nullptr){
         Node* new_node = new Node(data,temp,prev);
         temp->back     = new_node;
         prev->next     = new_node;


    }
    else {
        Node* new_node = new Node(data,temp,nullptr);
        temp->back     = new_node;
        head           = new_node;
    }
    
    


}

void  insertAtAfterNode(int data,int val){
    Node* temp = head;

    while(temp != nullptr && temp->data != val){
        temp = temp->next;
    }
    if(temp == nullptr){
        cout<<"Invalid Input !!"<<endl;
    }
    else if(temp->next != nullptr){
        Node* new_node   = new Node(data,temp->next,temp);
        temp->next->back = new_node;
        temp->next       = new_node;
    }
    else{
        Node* new_node   = new Node(data,nullptr,temp);
        temp->next       = new_node;
    }

}

void deleteFastNode(){
    Node* temp = head;
    if(head == nullptr){
        cout<<"No Element is Present !! "<<endl;
    }
    else if(head->next == nullptr){
        
        cout<<head->data<<" deleted successfully no element is present !!"<<endl;
        free(temp);
        head = nullptr;
    }
    else{
        head = head->next;
        head->back = nullptr;
        temp->next = nullptr;
        cout<<temp->data<<" deleted successfully  !!"<<endl;
        free(temp);
    }

}

void deleteLastNode(){
    Node* temp = head;
    Node* prev = nullptr;
    if(head == nullptr){
        cout<<"No element is present !!"<<endl;
    }
    else if(temp->next == nullptr){
        cout<<temp->data<<" deleted successfully No element is present !!"<<endl;
        free(temp);
        head = nullptr;

    }
    else{
        while(temp->next != nullptr){
            prev = temp;
            temp = temp->next;
        }
        cout<<temp->data<<" deleted Successfully !!"<<endl;
        temp->back = nullptr;
        prev->next = nullptr;
        free(temp);

    }

}

void deleteGiventPosition(int k){
    Node* temp = head;
    Node* prev = nullptr;
    int count  = 1;
    if(head == nullptr){
        cout<<"No Element is Present !!"<<endl;
    }
    else if(k==1){
        if(temp->next == nullptr){
            cout<<temp->data<<" deleted successfully No element left !!"<<endl;
            free(temp);
            head = nullptr;
        }
        else{
            head = head->next;
            head->back = nullptr;
            temp->next = nullptr;
            cout<<temp->data<<" Deleted successfully !!"<<endl;
            free(temp);
        }
    }
    else{
        while(count < k && temp->next != nullptr){
            prev = temp;
            count++;
            temp = temp->next;

        }

        if(temp->next == nullptr){
            temp->back = nullptr;
            prev->next = nullptr;
            cout<<temp->data<<" Deleted successfully !!"<<endl;
            free(temp);
        }
        else{
            
            prev->next = temp->next;
            temp->next->back = prev;
            temp->next = nullptr;
            temp->back = nullptr;
            cout<<temp->data<<" Deleted successfully !!"<<endl;
            free(temp);
        }

    }

}

void deleteBeforeGivenNode(int val){
    Node* temp = head;
    Node* prev = nullptr;
    if(head == nullptr){
        cout<<"No element is present !!"<<endl;

    }
    else{
        while(temp != nullptr && temp->data != val){
            prev = temp;
            temp = temp->next;
        }

        if(prev == nullptr){
            if(temp->back == nullptr){
                cout<<"  No element left Before "<< temp->data<<endl;
            }
        }
         else if(prev->back != nullptr){
            prev->back->next = prev->next;
            temp->back = prev->back;
            prev->back = nullptr;
            prev->next = nullptr;
            cout<<prev->data<<" Deleted Successfully !!"<<endl;
            free(prev);
        }

        

        else{
            if(temp->next == nullptr){
                cout<< temp->data<<" Deleted successfully No element left !!"<<endl;
                free(temp);
            }
            
            head = head->next;
            temp->back = nullptr;
            prev->next = nullptr;
            cout<<prev->data<<" Deleted successfully !!"<<endl;
            free(prev);
        }


    }

}
void deleteAfterGivenNode(int val){
    // Check if the list is empty
    if (head == nullptr) {
        cout << "No element is present !!" << endl;
        return;
    }

    // Search for the node with the given value
    Node* temp = head;
    while (temp != nullptr && temp->data != val) {
        temp = temp->next;
    }

    // Check if the given value was not found
    if (temp == nullptr || temp->next == nullptr) {
        cout << "No data is present after " << val << endl;
        return;
    }

    // Store the node to be deleted
    Node* nodeToDelete = temp->next;

    // Update the links to remove the node
    temp->next = nodeToDelete->next;

    // Check if there is a node after the deleted node
    if (nodeToDelete->next != nullptr) {
        nodeToDelete->next->back = temp;
    }

    // Display the deleted data
    cout << nodeToDelete->data << " Deleted successfully !!" << endl;

    // Free the memory of the deleted node
    free(nodeToDelete);
}


void  displayList(){
    
    Node* temp =head;
    Node* count ;
    while(temp){
        count = temp;
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

    while(count){
        cout<<count->data<<" ";
        count = count->back;
    }
    cout<<endl;

}


int main(){
    while(true){
    cout<<"Press : 1 : For Insert At Begning"<<endl;
    cout<<"Press : 2 : For Insert At End"<<endl;
    cout<<"Press : 3 : For Insert At Given Position K "<<endl;
    cout<<"Press : 4 : For Insert  Before a given node"<<endl;
    cout<<"Press : 5 : For After a Given node"<<endl;
    
    cout<<"Press : 6 : For Delete Fast Node"<<endl;
    cout<<"Press : 7 : For Delete Last Node"<<endl;
    cout<<"Press : 8 : For  Delete From Given Position K "<<endl;
    cout<<"Press : 9 : For Delete  Before a given node"<<endl;
    cout<<"Press : 10 : For Delete After a Given node"<<endl;
    cout<<"Press : 11 : For Display"<<endl;
    cout<<"Press : 12 : For Exit"<<endl;


    cout<<"Please Enter your choice"<<endl;

    int choice;
    cin >>choice;

    
        if(choice == 1){
            int data;
            cout<<"enter a number"<<endl;
            cin>>data;
            insertAtBeg(data);
        }
        else if(choice == 2){
            int data;
            cout<<"enter a number"<<endl;
            cin>>data;
            insertAtEnd(data);
        }

        else if(choice == 3){
            int data,k;
            cout<<"enter a number"<<endl;
            cin>>data;
            cout<<"Enter the positio where you want to insert"<<endl;
            cin>>k;
            insertAtkthPosition(data,k);
        }

        else if(choice == 4){
            int data,val;
            cout<<"enter a number"<<endl;
            cin>>data;
            cout<<"Enter the value before which you want to insert"<<endl;
            cin>> val;
            insertAtBeforeNode(data,val);
        }
        else if(choice == 5){
            int data,val;
            cout<<"enter a number"<<endl;
            cin>>data;
            cout<<"Enter the value before which you want to insert"<<endl;
            cin>> val;
            insertAtAfterNode(data,val);


        }

        else if(choice == 6){
            deleteFastNode();

        }
        else if(choice == 7){
            deleteLastNode();

        }
        else if(choice == 8){
            int k;
            cout<<"Please enter the position number which you want to delete"<<endl;
            cin>>k;
            deleteGiventPosition(k);

        }
        else if(choice == 9){
            int val;
            cout<<"Enter the value before  which you want to delete a node"<<endl;
            cin>>val;
            deleteBeforeGivenNode(val);

        }
        else if(choice == 10){
            int val;
            cout<<"Enter the value After which you want to delete a node"<<endl;
            cin>>val;
            deleteAfterGivenNode(val);

        }
        else if(choice == 11){
            displayList();

        }
        else if(choice == 12){
            exit(0);
        }

    }
}