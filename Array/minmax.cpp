/*
    Find the minimum and maximum element given in an array
    Input : 
        5
        arr[] ={1,3,2,5,0}
    Output :
        min = 0;
        max = 5 
    
*/

#include<iostream>
using namespace std;


void minMaxElement(int arr[],int size){
    int min,max;
    if(arr[0] > arr[1]){
        max = arr[0];
        min = arr[1];

    }
    else{
        max  = arr[1];
        min  = arr[0];
    }
    for(int i = 2; i < size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout<<"Minimum Element of the Array is  "<<" "<<min<<endl;
    cout<<"Maximum Element of the Array is  "<<" "<<max<<endl;
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
    minMaxElement(arr,size);
}