/*
    Given two unsorted arrays arr1[] of size n and arr2[] of size m
     of distinct elements, the task is to find all pairs from both arrays 
     whose sum is equal to x.

Note: All pairs should be printed in increasing order of u. 
For eg. for two pairs (u1,v1) and (u2,v2), if u1 < u2 then
(u1,v1) should be printed first else second.

                Example 1:

                Input:
                A[] = {1, 2, 4, 5, 7}
                B[] = {5, 6, 3, 4, 8} 
                X = 9 
                Output: 
                1 8
                4 5 
                5 4
                Explanation:
                (1, 8), (4, 5), (5, 4) are the
                pairs which sum to 9.
                Example 2:
                Input:
                A[] = {-1, -2, 4, -6, 5, 7}
                B[] = {6, 3, 4, 0} 
                X = 8 
                Output:
                4 4 
                5 3




*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map> 
using namespace std;


vector<pair<int,int>> allPairs(int arr1[], int arr2[], int n, int m, int x){
    
    vector<pair<int,int>> vec;
    unordered_map<int,int> mapp;
    for(int i = 0; i < m; i++){
        mapp[arr2[i]]++;
    }
    sort(arr1,arr1+n);
    for(int i = 0; i < n; i++){
        int sum = x-arr1[i];
        auto it = mapp.find(sum);
            
        if( it !=mapp.end()){
            vec.push_back({arr1[i],it->first});
        }
    }
    return vec;       
}



int main(){
    int size1,size2,sum;
    cout<<"Enter the size of the array1 "<<endl;
    cin>>size1;
    int arr1[size1];
    cout<<"Enter the element in Array1 "<<endl;
    for(int i = 0; i < size1; i++){
        cin>>arr1[i];
    }

    cout<<"Enter the size of the array2 "<<endl;
    cin>>size2;
    int arr2[size2];
    cout<<"Enter the element in Array2 "<<endl;
    for(int i = 0; i < size2; i++){
        cin>>arr2[i];
    }
    cout<<"Enter the sum which you want to find "<<endl;
    cin>>sum;

   vector<pair<int,int>> result = allPairs(arr1,arr2,size1,size2,sum);

    if(result.empty()) {
        cout << "No pairs found." << endl;
    } else {
        cout << "Pairs with sum " << sum << ":" << endl;
        for(auto pair : result) {
            cout << pair.first << " " << pair.second << endl;
        }
    }
    




}