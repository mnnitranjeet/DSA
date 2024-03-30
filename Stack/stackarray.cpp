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

class Stack{
    public:
    int *arr;
    int top;
    int size;

    public:
    // Costructer
    Stack(int s){
        top  = -1;
        size = s;
        arr  = new int[s];
    }

    //  Push 
    void push(int val){
        if(top == size-1){
            cout<<"Stack OverFlow !!"<<endl;
        }
        else{
            top++;
            arr[top] = val;
            cout <<val <<"  Inserted in Stack !!"<<endl;
        }
    }
    //  pop

    void pop(){
        if(top == -1){
            cout<<"Stack UnderFlow !!"<<endl;
        }
        else{
            cout<<arr[top]<<" Popped From Stack !!"<<endl;
            top--;
        }
    }

    //  Peek Element

    void peek(){
        if(top == -1){
            cout<<"Stack Is Empty !!"<<endl;
        }
        else{
            cout<<"Peek Element is "<< arr[top]<<endl;
        }
    }

    //  Number of element in Stack

    void isSize(){
        cout<<"Size of stack is "<< top+1<<endl;

    }

    // Check Whether Stack is empty or not 
    void isEmpty(){
        if(top == -1){
            cout<<"Stack is Empty !!"<<endl;
        }
        else{
            cout<<"Stack is Not Empty !!"<<endl;
        }
    }



};



int main(){
    int size,val;
    cout<<"Please Enter the Capacity of stack "<<endl;
    cin>>size;
    Stack s(size);

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