/*

        Given an array of N integers, and an integer K,
         find the number of pairs of elements in the array whose sum is equal to K.

                Example 1:

                Input:
                N = 4, K = 6
                arr[] = {1, 5, 7, 1}
                Output: 2
                Explanation: 
                arr[0] + arr[1] = 1 + 5 = 6 
                and arr[1] + arr[3] = 5 + 1 = 6.

                Example 2:

                Input:
                N = 4, K = 2
                arr[] = {1, 1, 1, 1}
                Output: 6
                Explanation: 
                Each 1 will produce sum 2 with any 1.

*/


#include<iostream>
#include<unordered_map> 
using namespace std;


int getPairsCount(int arr[], int n, int k) {
    unordered_map<int,int> map1;
    int count = 0;
    for(int i = 0; i < n; i++){
        if(map1.find(k-arr[i]) != map1.end()){
            count+=map1[k-arr[i]];
        }
        map1[arr[i]]++;
    }
        
    return count;
    
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
    cout<<"Enter the sum which you want to find "<<endl;
    cin>>sum;

    int count = getPairsCount(arr, size,sum);
    cout <<count<<endl;




}