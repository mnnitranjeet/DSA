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

vector<int> result(int arr[],int size, int sum){
    vector<pair<int,int>>v;
    for(int i = 0; i < size; i++){
        v.push_back({arr[i],i});
    }
    sort(v.begin(),v.end());
    
    
    int start = 0;
    int end  =v.size()-1;
    vector<int>vec;

    while(start < end){
            if(sum == (v[start].first + v[end].first)){
                vec.push_back(v[start].second);
                vec.push_back(v[end].second);
                return vec;
            }
            else if(sum > (v[start].first + v[end].first)){
                start++;
                
            }
            else{
                end--;
            }
        }
        vec.push_back(-1);
        vec.push_back(-1);
        return vec;
    

        
        
    
    }
    







int main(){
    int size,sum;
    cout<<"Enter the size of array !!"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements in array"<<endl;
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }
    cout<<"Enter the sum which you want to find"<<endl;
    cin>>sum;
    


    cout<<"Array Elements Before Sorting "<<endl;
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    

    

    vector<int> vec = result(arr,size,sum);
    
    cout<<endl;
    cout << vec[0]<<" "<<vec[1]<<endl;
    

    

    
}