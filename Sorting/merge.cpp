#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int low,int mid,int high){
    int left = low;
    int right = mid + 1;
    vector<int> temp;

    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;

    }
    while(right <= high){
        temp.push_back(arr[right]);
        right++;

    }
    for(int i = low ; i <= high; i++){
        arr[i] = temp[i-low];
    }
}


void mergeSort(int arr[],int low , int high){
    if(low >= high) return ;

    int mid = (low + high) / 2;


    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}



int main(){
    int size;
    cout << "Enter the size of array \n";
    cin >> size;

    int* arr = new int[size];

    cout <<"Please Enter the elements of the array \n";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    cout << endl;

    cout <<"Array Before Sorting \n";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    mergeSort(arr,0,size-1);

    cout << "Array After Sorting \n";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    return 0;



}