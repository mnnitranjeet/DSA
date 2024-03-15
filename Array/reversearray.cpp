/*
        You have given an array and your task is to reverse the array
        Input  : 1 2 3 4 5
        Output : 5 4 3 2 1


*/


#include<iostream>
using namespace std;


void reverseArray(int arr[],int size){
    int start = 0;
    int end   = size-1;

    while(start <= end){
        swap(arr[start],arr[end]);
        start++,end--;
    }
}

int main(){
    int size;
    cout<<"Please enter the size of array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Please enter the elements in array "<<endl;
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Array Before Reverse "<<" ";
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    reverseArray(arr,size);

    cout<<endl;
    cout<<"Array After Reverse "<<" ";
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}