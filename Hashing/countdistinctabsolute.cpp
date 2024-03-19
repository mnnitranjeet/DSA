/*

    Count distinct absolute values in a sorted array

    Given an array of sorted integers that may contain several duplicate elements, 
    count the total number of distinct absolute values in it.

    For example,

Input:  { -1, -1, 0, 1, 1, 1 }
Output: The total number of distinct absolute values is 2 (0 and 1)

  Input:  { -2, -1, 0, 1, 2, 3 }
  Output: The total number of distinct absolute values is 4 (0, 1, 2 and 3) 
  
   Input:  { -1, -1, -1, -1 }
   Output: The total number of distinct absolute values is 1 (only 1)


*/

#include<iostream>
#include<unordered_set>

using namespace std;

void countDistinctAbsolutValues(int arr[],int size){
    unordered_set<int> set1;

    for(int i = 0; i < size; i++){
        if(arr[i] < 0){
            set1.insert(-arr[i]);
        }
        else{
            set1.insert(arr[i]);
        }
        
    }
    for(auto it : set1){
        cout<<it<<" ";
        
    }
    cout<<endl;

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
    countDistinctAbsolutValues(arr,size);
}