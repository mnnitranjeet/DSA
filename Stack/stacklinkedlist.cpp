/*
    Basic operation in Stack
        1. push
        2. pop
        3. peek
        4. size
        5. isEmpty 

*/
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;

    }
    

};


class Stack{
    public:
    Node* top;
    int size;

    public:
    // Costructer
    Stack(){
        
        top  = NULL;
        size = 0;
        
    }


    //  Push 
    void push(int val){
        
        Node* new_node = new Node(val);
        if(new_node == NULL){
            cout<<"Stack OverFlow !!"<<endl;
        }
        else{
            new_node->next = top;
            top = new_node;
            size++;
            cout <<val <<"  Inserted in Stack !!"<<endl;

        }
            
    }
    //  pop

    void pop(){
        if(top == NULL){
            cout<<"Stack UnderFlow !!"<<endl;
        }
        else{
            size--;
            Node* temp = top;
            top = top->next;
            cout<<temp->data<<" Popped From Stack"<<endl;
            free(temp);
            
            
        }
    }

    //  Peek Element

    void peek(){
        if(top == NULL){
            cout<<"Stack Is Empty !!"<<endl;
        }
        else{
            cout<<"Peek Element is "<< top->data <<endl;
        }
    }

    //  Number of element in Stack

    void isSize(){
        cout<<"Size of stack is "<< size <<endl;

    }

    // Check Whether Stack is empty or not 
    void isEmpty(){
        if(top == NULL){
            cout<<"Stack is Empty !!"<<endl;
        }
        else{
            cout<<"Stack is Not Empty !!"<<endl;
        }
    }



};



int main(){
    int val;
    Stack s;
    

    while(true){
        cout<<"Press : 1 : For Push Operation "<<endl;
        cout<<"Press : 2 : For Pop Operation "<<endl;
        cout<<"Press : 3 : For Finding Peek Element "<<endl;
        cout<<"Press : 4 : For Size "<<endl;
        cout<<"Press : 5 : For Check Whether Stack is Empty or not "<<endl;
        cout<<"Press : 6 : For Exit "<<endl;
        int choice;
        cin>>choice;

        if(choice == 1){
            cout<<"Enter the value which you want to push into the stack !!"<<endl;
            cin>>val;
            s.push(val);

        }
        else if(choice == 2){
            s.pop();
        }
        else if(choice == 3){
            s.peek();
        }
        else if(choice == 4){
            s.isSize();
        }
        else if(choice == 5){
            s.isEmpty();
        }
        else if(choice == 6){
            exit(0);
        }
        else{
            cout<<"Invalid Input !!"<<endl;
        }

    }

}