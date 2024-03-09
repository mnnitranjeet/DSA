#include<bits/stdc++.h>
using namespace std;

int main(){
    cout <<"Bubble Sort \n";
    int size;
    cout<<"Please Enter the size \n";
    cin >>size;
    int arr[size];
    cout<<"Please enter the element\n";
    for(int i =0; i< size; i++){
        cin >> arr[i];
    }
    cout <<"Before Sorting elements are    ";
    for(int i =0; i< size; i++){
        cout<< arr[i]<<" ";
    }
    cout <<"\n";

    cout <<"Elements after sorting are  ";


    for(int i =0; i < size; i++){
        for(int j=0; j < size-i; j++){
            if(arr[j]> arr[j+1]){
                arr[j]     = arr[j]+arr[j+1];
                arr[j+1]   = arr[j]-arr[j+1];
                arr[j]     = arr[j]-arr[j+1] ;

                //cout <<"I and J "<< i <<"  "<< j<<endl;

                

            }
            
        }
    }
    for(int i =0; i< size; i++){
        cout<< arr[i]<<" ";
    }
    return 0;

}