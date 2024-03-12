/*

        Given an array of integers nums and an integer target, 
        return indices of the two numbers such that they add up to target.
        You may assume that each input would have exactly one solution,
        and you may not use the same element twice.

        You can return the answer in any order.






*/

#include<iostream>
#include<vector>
using namespace std;

vector<int> result(int arr[],int size, int sum){
    int temp = size;
    int start;
    int end  = size-1;
    vector<int>vec;
    int i = 0;

    while(temp--){
        start = i;
        while(start < end){
            if(sum == (arr[start] + arr[end])){
                vec.push_back(start);
                vec.push_back(end);
                return vec;
            }
            else{
                start++;
                end--;
            }
        }
        i++;
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
    


    cout<<"Array Elements "<<endl;
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    vector<int> vec = result(arr,size,sum);
    cout << vec[0]<<" "<<vec[1]<<endl;
    

    

    
}