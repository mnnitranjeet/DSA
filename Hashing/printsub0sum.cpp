/*

    Print all subarrays with 0 sum
Given an integer array, print all subarrays with zero-sum.
Input:  { 4, 2, -3, -1, 0, 4 } 
Subarrays with zero-sum are 
{ -3, -1, 0, 4 }
{ 0 }  

Input:  { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 } 
Subarrays with zero-sum are
 { 3, 4, -7 }
 { 4, -7, 3 }
 { -7, 3, 1, 3 }
 { 3, 1, -4 }
 { 3, 1, 3, 1, -4, -2, -2 }
 { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 }


 5
1 -7 4 -3 -3
-3


*/


#include<iostream>
#include<vector>

using namespace std;

int findSubArraySum(int arr[], int n, int k)
    {
        // code here
        int sum;
        int count = 0;
        for(int i = 0; i < n-1; i++){
            if(arr[i] == k){
                count++;
            }
            int temp = i + 1;
            sum = arr[i];
            while(temp < n){
                sum += arr[temp];
                if(sum == k){
                    count++;
                }
                temp++;
            }
                
        }
        
        if(arr[n-1] == k){
            count++;
        }
        return count;
    }

        
vector<pair<int,int>> printAllSubArrayWith0Sum(int arr[],int size){
    int sum;
    vector<pair<int,int>> vec;
    for(int i = 0; i < size-1; i++){
        if(arr[i] == 0){
            vec.push_back({i,i});

        }
        int temp = i + 1;
        sum = arr[i];
        while(temp < size){
            sum += arr[temp];
            if(sum == 0){
                vec.push_back({i,temp});
                    
            }
            temp++;
        }
        
    }
    if(arr[size-1] == 0){
        vec.push_back({size-1,size-1});

    }
    return vec;

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
   vector<pair<int,int>> result = printAllSubArrayWith0Sum(arr,size);
   if(result.size() == 0){
    cout<<"No Sub Array Present With Sum = 0"<<endl;
   }
   else{
    for(int i = 0; i < result.size();i++){
        cout<<"{ ";
        for(int j = result[i].first; j <= result[i].second; j++){
            cout<<arr[j]<<" ";
        }
        cout<<"}"<<endl;
    }
   }

} 

    