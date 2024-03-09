#include<bits/stdc++.h>
using namespace std;

int partionArray(int arr[],int lb,int ub){
    int pivot= arr[lb];
    int start = lb; 
    int end   = ub;
    while(start < end){
        while(arr[start] <= pivot){
            start++;
        }
        while(arr[end] > pivot){
            end--;
        }
        if(start < end){
           /* arr[start] = arr[start] + arr[end];
              arr[end]   = arr[start] - arr[end];
              arr[start] = arr[start] - arr[end]; 
            */
            swap(arr[start],arr[end]);
        }

    }

    /* arr[pivot] = arr[pivot] + arr[end];
       arr[end]   = arr[pivot] - arr[end];
       arr[pivot] = arr[pivot] - arr[end];
    */
    swap(arr[lb],arr[end]);

    return end;
}

void quickSort(int arr[],int lb,int ub){
    int loc;
    if(lb < ub){
        loc= partionArray(arr,lb,ub);
        quickSort(arr,lb,loc-1);
        quickSort(arr,loc + 1,ub);

    }

    
}





int main(){
    int size;
    cout <<"Please enter the number of element \n";
    cin >> size;
    int* arr=new int[size]; //Dynamic memory allocation

    cout <<"Please eneter the element \n";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    cout <<"Before Sorting : ";
    for(int i = 0; i < size; i++){
        cout << arr[i] <<" ";
    }
    
   quickSort(arr,0,size-1);

   cout <<"After Sorting : ";
    for(int i = 0; i < size; i++){
        cout << arr[i] <<" ";
    }

    return 0;
}