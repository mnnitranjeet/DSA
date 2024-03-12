/*

    Given an unsorted array of integers, sort the array into a wave array. 
    An array arr[0..n-1] is sorted in wave form if:
    arr[0] >= arr[1] <= arr[2] >= arr[3] <= arr[4] >= …..
    Input:  arr[] = {10, 5, 6, 3, 2, 20, 100, 80}
            Output: arr[] = {10, 5, 6, 2, 20, 3, 100, 80} 
            Explanation: 
            here you can see {10, 5, 6, 2, 20, 3, 100, 80} first element is larger than the second and the same thing is repeated again and again. large element – small element-large element -small element and so on .it can be small element-larger element – small element-large element -small element too. all you need to maintain is the up-down fashion which represents a wave. there can be multiple answers.

            Input: arr[] = {20, 10, 8, 6, 4, 2}
            Output: arr[] = {20, 8, 10, 4, 6, 2}




*/





#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;

void waveArray(int arr[],int size){
    int first  = 0; 
    int second = 1;
    while(second < size){
        if(first % 2 == 0){
            if(arr[first] < arr[second]){
                swap(arr[first],arr[second]);

            }
            
        }
        else{
            if(arr[first] > arr[second]){
                swap(arr[first],arr[second]);
            }
        }
        first++;
        second++;
    }
  

}
    







int main(){
    int size;
    cout<<"Enter the size of array !!"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements in array"<<endl;
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }
    cout<<"Array Elements Before Sorting "<<endl;
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    waveArray(arr,size);

    cout<<" Wave Array is :  ";
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
    


    

    

    

    
    
    
    

    

    
