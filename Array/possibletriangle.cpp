/*

    Given an array of integers, we need to find out all possible ways 
    construct non-degenerate triangle using array values as its sides. 
    If no such triangle can be formed then return 0.
    Example 1:

            Input : [5, 4, 3, 1, 2]
            Output : 3
            Explanation:
            Sides of possible triangle are
            (2 3 4), (3 4 5) and (2 4 5)
    Example 2:

            Input : [4, 1, 2]
            Output : 0 
            No triangle is possible from given
            array values




*/





#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;

void possibleTriangle(int arr[],int size){
    int count  = 0;
    sort(arr,arr+size);
    
    for(int i = 0 ; i < size-2; i++){
        for(int j = i+1; j < size-1; j++){
            int end = size-1;
            while(end > j){
                if(arr[i] + arr[j] > arr[end]){
                     
                    count++;
                }
                end--;
               
               
            }
        }
    }
    
   cout<<"Number of possible triangles are = "<<count<<endl;
   
  

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
    possibleTriangle(arr,size);

    
    cout<<endl;
    
}
    


    

    

    

    
    
    
    

    

    
