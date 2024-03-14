/*
        You are given two integer arrays nums1 and nums2,
         sorted in non-decreasing order,
         and two integers m and n, representing the number 
         of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function,
 but instead be stored inside the array nums1. To accommodate this,
  nums1 has a length of m + n, where the first m elements denote 
  the elements that should be merged, and the last n elements are 
  set to 0 and should be ignored. nums2 has a length of n.

            Example 1:

Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.

Example 2:

Input: nums1 = [1], m = 1, nums2 = [], n = 0
Output: [1]
Explanation: The arrays we are merging are [1] and [].
The result of the merge is [1].

Example 3:

Input: nums1 = [0], m = 0, nums2 = [1], n = 1
Output: [1]
Explanation: The arrays we are merging are [] and [1].
The result of the merge is [1].
Note that because m = 0, there are no elements in


*/


#include<iostream>
using namespace std;


void merge(int arr1[], int m,int arr2[], int n) {
         

        // Indices for nums1 and nums2
        int index1 = m-1, index2 = n-1;
        int index  = m + n -1;
        while(index1 >= 0 && index2 >= 0){
            if(arr1[index1] >= arr2[index2]){
                arr1[index] = arr1[index1];
                index1--;
                index--;
            }
            else{
                arr1[index] = arr2[index2];
                index--;
                index2--;

            }

        }
        while(index1 >= 0){
            arr1[index] = arr1[index1];
            index--;
            index1--;
        }
        while(index2 >= 0){
            arr1[index] = arr2[index2];
            index--;
            index2--;
        }

        
    }










int main(){
    int m,n;
    cout<<"Enter the size of array1 "<<endl;
    cin>>m;
    cout<<"Enter the size of array2"<<endl;
    cin>>n;
    int arr1[m+n];
    int arr2[n];
    cout<<"Please enter "<<m<<" elements in array1"<<endl;
    for(int i = 0; i < m; i++){
        cin>>arr1[i];
    }

    cout<<"Please enter "<<n<<" elements in array2"<<endl;
    for(int i = 0; i < n; i++){
        cin>>arr2[i];
    }


    merge(arr1,m,arr2,n);

    cout<<"After Merge Array elements are  "<<" ";
    for(int i = 0; i < m+n; i++){
        cout<<arr1[i]<<" ";
    }



}