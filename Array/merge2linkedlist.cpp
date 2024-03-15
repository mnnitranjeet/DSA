#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1){
        data = data1;
        next =nullptr;
    }
    
};

Node* head1 = nullptr;
Node* head2 = nullptr;



void ensertInList1(int data){
    Node* temp1 = head1;
    Node* new_node = new Node(data);

    if(head1 == nullptr){
        head1= new_node;
    }
    else{
        while(temp1->next != nullptr){
            temp1 = temp1->next;
        }
        temp1->next = new_node;
    }
}


void ensertInList2(int data){
    

    Node* temp2 = head2;
    Node* new_node = new Node(data);

    if(head2 == nullptr){
        head2 = new_node;
    }
    else{
        while(temp2->next != nullptr){
            temp2 = temp2->next;
        }
        temp2->next = new_node;
    }
}


void displayList(Node* head){
    Node* temp = head;
    if(temp == nullptr){
        cout<<"No element is present"<<endl;
    }
    else{
        while(temp){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
    cout<<endl;
}

void result(){
    // Check if both lists are non-empty
    if (head1 == nullptr || head2 == nullptr) {
        cout << "Error: At least one of the lists is empty.";
        return;
    }
    
    Node* temp11 = head1;
    Node* temp1  = head1;
    Node* temp2  = head2;
    int count    = 1;

    while (temp11 != nullptr && temp2 != nullptr) {
    if (count % 2 != 0) {
        temp1->next = temp2;
        temp1 = temp1->next;
        temp2 = temp2->next;
    } else {
        temp1->next = temp11->next;
        temp1 = temp1->next;
        temp11 = temp11->next;
    }
    count++;
}
if (temp2 != nullptr) {
    temp1->next = temp2;
    head2 = nullptr; // Set head2 to nullptr as temp2 is fully merged into head1
} else {
    head2 = nullptr; // If temp2 has reached the end, head2 should be nullptr
}
displayList(head1);

}




int main(){
    int choice;
    while(true){
        cout<<"Press : 1 : For Insert Node In List1 "<<endl;
        cout<<"Press : 2 : For Insert Node In List2 "<<endl;
        cout<<"Press : 3 : For Display List1"<<endl;
        cout<<"Press : 4 : For Display List2"<<endl;
        cout<<"Press : 5 : For Result "<<endl;
        cout<<"Press : 6 : For Exit "<<endl;
        cin>>choice;

        if(choice == 1){
            int data;
            cout<<"Please enter a number"<<endl;
            cin>>data;
            ensertInList1(data);
        }
        else if(choice == 2){
            int data;
            cout<<"Please enter a number"<<endl;
            cin>>data;
            ensertInList2(data);

        }
        else if(choice == 3){
            displayList(head1);
        }
        else if(choice == 4){
            displayList(head2);
        }
        else if(choice == 5){
            result();
        }
        else if(choice == 6){
            exit(0);
        }
        else{
            cout<<"Invalid Input "<<endl;
        }

    
    
    }



}