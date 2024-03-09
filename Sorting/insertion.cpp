#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[],int size){

    int i,j,key;
    for(i =1; i < size; i++){
        key = arr[i];
        j=i-1;

        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;

    }
}

void printArray(int arr[], int size){
    cout<<"Array after  Sorting : \n";
    for(int i =0; i < size;i++){
        cout <<arr[i] <<" ";

    }
    cout <<endl;
}







int main(){
    int size;
    cout<<"Please enter the number of element \n";
    cin >> size;
    int arr[size];
    for(int i= 0; i < size; i++){
        cin >> arr[i];
    }
    insertionSort(arr,size);
    printArray(arr,size);
    cout << endl;

    
}