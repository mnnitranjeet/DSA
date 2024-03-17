
/*

        Print all pair with the given sum in an array
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
#include<unordered_map>
#include<vector>

using namespace std;


void apairWithGivenSum(int arr[],int size,int sum){

    unordered_map<int,int>  map;
    vector<pair<int,int>> vec;
    

    for(int i = 0; i < size; i++){
        if(map.find(sum-arr[i]) !=map.end()){
            vec.push_back({arr[i],arr[map[sum-arr[i]]]});
        }
        map[arr[i]] = i;
    }
    if(vec.size()== 0){
        cout<<"No Pair is Found With Given Sum"<<endl;

    }
    else{
        for(int i = 0; i < vec.size(); i++){
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