/*
    Given an array of integers. 
    Find if there is a subarray (of size at-least one) with 0 sum. 
    You just need to return true/false depending upon whether there is a subarray
     present with 0-sum or not. Printing will be taken care by the driver code.

     Example 1:

        Input:
        n = 5
        arr = {4,2,-3,1,6}
        Output: 
        Yes
        Explanation: 
        2, -3, 1 is the subarray with sum 0.
    Example 2:

        Input:
        n = 5
        arr = {4,2,0,1,6}
        Output: 
        Yes
        Explanation: 
        0 is one of the element in the array so there exist a subarray with sum 0.


*/

#include<iostream>
#include<unordered_set> 
using namespace std;

bool subArrayExists(int arr[], int n){
    unordered_set<int> set;
    set.insert(0);
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(set.find(sum) !=set.end()){
            return true;
        }
        else{
            set.insert(sum);
        }
    }  
    return false;
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

    bool ans = subArrayExists(arr,size);
    if(ans == 1){
        cout<<"Yes"<<endl;
    }
    else{
        cout <<"No"<<endl;
    }

} 

    