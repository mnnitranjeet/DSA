/*

            Given an array nums with n objects colored red, white, or blue, 
            sort them in-place so that objects 
            of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, 
white, and blue, respectively.

You must solve this problem without using the library's sort function

    Example 1:

        Input: nums = [2,0,2,1,1,0]
        Output: [0,0,1,1,2,2]
        Example 2:

        Input: nums = [2,0,1]
        Output: [0,1,2]


*/


#include<iostream>
using namespace std;


void sortColorObject(int arr[],int size){
    int low = 0;
    int high = size-1;
    int i = 0;

    while(i <= high){
        if(arr[i] == 0){
            swap(arr[i],arr[low]);
            i++,low++;
        }
        else if(arr[i] == 1){
            i++;
        }
        else{
            swap(arr[i],arr[high]);
            high--;
        }
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
    cout<<" Array Before Sorting  "<< " ";
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
   
    sortColorObject(arr,size);
     cout<<endl;

    cout<<" Array After Sorting  "<< " ";
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}