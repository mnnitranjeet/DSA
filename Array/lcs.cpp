/*
    Given an integer array, find the length of the longest subsequence 
    formed by the consecutive integers. The subsequence should contain
     all distinct values, and the character set should be consecutive, irrespective of its order.
     
    For example,

        Input : [2, 0, 6, 1, 5, 3, 7]
        Output: 4 
        Explanation: The longest subsequence formed by the consecutive integers is 
        [2, 0, 1, 3]. 
        It has distinct values and length 4. 
        
         Input : [2, 4, 6, 3, 7, 4, 8, 1]
         Output: 4 
         Explanation: The longest subsequence formed by the consecutive integers is 
         [2, 4, 3, 4, 1]. The distinct subsequence is [2, 4, 3, 1] having length 4.



*/

#include<iostream>
#include<algorithm>
using namespace std;



void findLCS(int arr[],int size){
    sort(arr,arr+size);
    int count = 0;

    for(int i = 0; i < size-1; i++){
        if(arr[i+1] == arr[i]+1){
            count++;

        }
        else{
            break;
        }

        
    }
    cout<<"[";
    for(int i = 0; i <= count; i++){
       cout<<arr[i]<<" ";
    }
    cout<<"]"<<endl;

}



int main(){
    int size;
    cout<<"Enter the size of the array "<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the element in Array "<<endl;
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }

    findLCS(arr,size);
}




