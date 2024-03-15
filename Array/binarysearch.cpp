
#include<iostream>
using namespace std;




int binarySearch(int arr[],int size,int val){
    int start = 0;
    int end   = size-1;
    int mid;

    while(start <= end){
        mid = start + (end-start)/2;
        if(arr[mid] == val){
            return mid;
        }
        else if(arr[mid] > val){
            end = mid -1;
        }
        else{
            start = mid + 1;
        }
    }
    return -1;

}




int main(){
    int size,key,flag;
    cout<<"Please enter the size of array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Please enter the elements in array "<<endl;
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }
    cout<<"Enter the value which you want to search"<<endl;
    cin>>key;
   
   flag = binarySearch(arr,size,key);
     cout<<endl;

    if(flag == -1){
        cout<<key<<" Does not Exist !!"<<endl;
    }
    else{
        cout<<key<<" Found at index "<<flag<<endl;
    }

    
}