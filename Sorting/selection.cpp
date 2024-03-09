#include<bits/stdc++.h>
using namespace std;


int main(){
    int size,min;
    cout <<"Please enter the size of array \n";
    cin >> size;
    int arr[size];
    cout <<"Plase enter the element in array \n";
    for(int i =0; i< size; i++){
        cin>> arr[i];
    }
    cout << endl;
    cout <<"Elements before sorting are \n";
    for(int i =0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    

    for(int i = 0; i < size-1; i++){
        min =i;
        for(int j =i+1; j <size;  j++){
            if(arr[min] >arr[j]){
                min=j;
            }
                
          
                
        

            
        }
        if(min !=i){
            
        
            arr[min] = arr[min] + arr[i];
            arr[i] = arr[min] - arr[i];
            arr[min] = arr[min] - arr[i]; 
         }       
    }
    cout <<"Elements after Sorting \n ";
    //cout <<"Elements before sorting are \n";
    for(int i =0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    
}