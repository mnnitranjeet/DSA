#include<bits/stdc++.h>
using namespace std;


void reverseArrayUsingStack(char arr[],int size){
    stack<char> st;
    for(int i = 0; i < size; i++){
        st.push(arr[i]);
    }
    int i = 0;
    while(st.size()){
        arr[i] = st.top();
        st.pop();
        i++;

    }

   

}

int main(){
    int size;
    cout<<"Please Enter the size of array "<<endl;
    cin>>size;
    char arr[size];
    cout<<"Please Enter the element in array "<<endl;
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }
    reverseArrayUsingStack(arr,size);

     for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}