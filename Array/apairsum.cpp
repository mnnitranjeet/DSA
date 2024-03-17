/*

        Find a pair with the given sum in an array
        Given an unsorted integer array, find a pair with the given sum in it.

        For example,

            Input: nums = [8, 7, 2, 5, 3, 1]
            target = 10
            Output: Pair found (8, 2)
            orPair found (7, 3) 
            
             Input: nums = [5, 2, 6, 8, 1, 9]
             target = 12
             
             Output: Pair not found



*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<pair<int,int>> vec;

void binarySearch(int arr[],int i,int size,int sum){
    
    int mid;
    int start = i;
    int end   = size-1;
    while(start <= end){
        mid = start + (end-start)/2;

        if(arr[mid] == sum){
            vec.push_back({arr[i-1],arr[mid]});
            break;

        }
        else if(arr[mid] > sum){
            end--;
        }
        else{
            start++;
        }

    }
    
    


}

void apairWithGivenSum(int arr[],int size,int sum){
    
    sort(arr,arr+size);

    for(int i = 0; i < size-1; i++){
        int val = sum-arr[i];
        binarySearch(arr,i+1,size,val);

    }
    if(vec.size() == 0){
        cout <<"No Pair Exist With Given Sum !!"<<endl;
    }
    else{
        for(int i = 0; i < vec.size();i++){
            cout<<"["<<vec[i].first<<" "<<vec[i].second<<"]"<<endl;
        }

    }
    

}



int main(){
    int size,sum;
    cout<<"Enter the size of the array "<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the element in Array "<<endl;
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }
    cout <<"Enter the value whoose pair you want to find "<<endl;
    cin >> sum;
    apairWithGivenSum(arr,size,sum);
}