/*


        Given an integer array nums of length n and an integer target,
         find three integers in nums such that the sum is closest to target.
         Return the sum of the three integers.
         You may assume that each input would have exactly one solution.

         Example 1:

                Input: nums = [-1,2,1,-4], target = 1
                Output: 2
                Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).

                Example 2:

                Input: nums = [0,0,0], target = 1
                Output: 0
                Explanation: The sum that is closest to the target is 0. (0 + 0 + 0






*/




#include<bits/stdc++.h>
//#include<climits.h>
using namespace std;


int find3Sum(int arr[],int size,int target){
    int next,end,ans,sum,diff;
    int min_diff = INT_MAX;
    sort(arr,arr+size);
    

    for(int i = 0; i < size-2; i++){
        next = i + 1;
        end  = size-1;
        while (next < end){
            sum = arr[i] + arr[next] + arr[end];
            diff = abs(sum-target);
            if(diff < min_diff){
                min_diff = diff;
                ans = sum;
            }

            if(sum == target){
                return sum;
            }
            else if(sum < target){
                next++;
            }
            else{
                end--;
            }

        }
        
        

        

    }
    return ans;
    
}




int main(){
    int size,target;
    cout<<"Enter the size of array !"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the element in array "<<endl;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    cout<<"Enter the value of target "<<endl;
    cin>>target;

    int ans = find3Sum(arr,size,target);
    cout << ans<<endl;
}