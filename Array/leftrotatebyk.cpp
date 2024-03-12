#include<iostream>
using namespace std;


void reverseArray(int arr[],int start,int end){
    while(start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;

    }
}

void rotateArray(int arr[],int k,int size){
    reverseArray(arr,0,k-1);
    reverseArray(arr,k,size-1);
    reverseArray(arr,0,size-1);


}


int main(){
    int size,k;
    cout<<"Enter the size of array !!"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements in array"<<endl;
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }
    cout<<"Enter the number of element which you want to rotate"<<endl;
    cin>>k;
    k = k % size;


    cout<<"Array Before Rotation"<<endl;
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    rotateArray(arr,k,size);

    

    cout<<"Array  Rotation"<<endl;
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
}