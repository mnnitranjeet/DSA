/*


        Given an integer array nums sorted in non-decreasing order, 
        remove the duplicates in-place such that each unique element appears only once. 
        The relative order of the elements should be kept the same. 
        Then return the number of unique elements in nums.

Consider the number of unique elements of nums to be k,
 to get accepted, you need to do the following things:

Change the array nums such that the first k elements 
of nums contain the unique elements in the order they were present in nums initially. 
The remaining elements of nums are not important as well as the size of nums.


Example 1:

Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
Example 2:

Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
 

*/



/*

        Given an array of integers nums and an integer target, 
        return indices of the two numbers such that they add up to target.
        You may assume that each input would have exactly one solution,
        and you may not use the same element twice.

        You can return the answer in any order.

        Example 1:

                Input: nums = [2,7,11,15], target = 9
                Output: [0,1]
                Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
                Example 2:

                Input: nums = [3,2,4], target = 6
                Output: [1,2]
                Example 3:

                Input: nums = [3,3], target = 6
                Output: [0,1]







*/

#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;

void removeDuplicate(int arr[],int size){
    int first  = 0;
    int second = 1;
    vector<int>vec;

    while(second < size){
        if(arr[first] != arr[second] ){
            vec.push_back(arr[first]);

        }
        first++;
        second++;

    }
    vec.push_back(arr[first]);

    for(int i = 0; i < size; i++){
        arr[i] = -1;
    }

    for(int i = 0; i < vec.size(); i++){
        arr[i] = vec[i];
       
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
    removeDuplicate(arr,size);

    for(int i = 0; i < size; i++){
       cout<< arr[i] <<" ";
    }
}
    


    

    

    

    
    
    
    

    

    
