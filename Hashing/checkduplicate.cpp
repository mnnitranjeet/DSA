/*

        Find duplicates within a range `k` in an array
Given an array and a positive number k,
 check whether the array contains any duplicate elements within the range k.
  If k is more than the array’s size, the solution should check 
  for duplicates in the complete array.

  For example,

Input: 
nums[] = { 5, 6, 8, 2, 4, 6, 9 }
k = 4 
Output: Duplicates found (element 6 repeats at distance 4 which is <= k) 

 Input: 
 nums[] = { 5, 6, 8, 2, 4, 6, 9 }
 k = 2 
 Output: No duplicates were found (element 6 repeats at distance 4 which is > k)  
 
 Input:
  nums[] = { 1, 2, 3, 2, 1 }
  k = 7 
  Output: Duplicates found (element 1 and 2 repeats at distance 4 and 2, respectively which are both <= k)


*/

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

void checkDuplicate(int arr[],int size,int k){
    vector<int> vec;
    unordered_map<int,int> map;

    
        for(int i = 0; i < size ; i++){
            if(map.find(arr[i]) != map.end()){
                if(i-map[arr[i]] <= k){
                    vec.push_back(arr[i]);

                }
            }
            map[arr[i]] = i;
        }
           
    if(vec.size() == 0){
        cout<<"No Duplicate Found "<<endl;
    }
    else{
        cout<<"Duplicates  = ";
        for(int i = 0; i < vec.size(); i++){
            cout<<vec[i]<<" ";
        }
        cout<<" Found"<<endl;
    }
    

}



int main(){
    int size,k;
    cout<<"Enter the size of the array "<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the element in Array "<<endl;
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }
    cout<<"Enter the Gap Value "<<endl;
    cin>>k;
    if(k >= size){
        checkDuplicate(arr, size,size);
    }
    else{
        checkDuplicate(arr, size,k);
    }

    
    




}