/*
    Find whether one array is subset of another Array
    Input :
        arr1[] = {11,1,13,21,3,7}
        arr2[] = {11,1,7,3} 
    Output : 
        True

*/

#include<iostream>
#include<algorithm>
using namespace std;


bool checkSubsetArray(int arr1[],int arr2[],int size1,int size2){
    if(size1 < size2){
        return false;
    }
    else{
        sort(arr1,arr1+size1);
        sort(arr2,arr2+size2);
    
        for(int i = 0; i < size2; i++){
            if(arr1[i] != arr2[i]){
                return false;
            }

        }

    }
    
    return true;

}




int main(){
    int size1,size2;
    cout<<"Please enter the size of array1"<<endl;
    cin>>size1;
    int arr1[size1];
    cout<<"Please enter the elements in array1 "<<endl;
    for(int i = 0; i < size1; i++){
        cin>>arr1[i];
    }

    cout<<"Please enter the size of array2"<<endl;
    cin>>size2;
    int arr2[size2];
    cout<<"Please enter the elements in array2 "<<endl;
    for(int i = 0; i < size2; i++){
        cin>>arr2[i];
    }
    
   bool ans = checkSubsetArray(arr1,arr2,size1,size2);
   if(ans == true){
    cout<<"True"<<endl;
   }
   else{
    cout<<"False"<<endl;
   }
}