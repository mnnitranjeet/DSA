// Basic incrementing Triangle Pattern  initialized = 3
/*
    6666
    555
    44
    3

*/

#include<iostream>
using namespace std;

int main(){
    int row,initial;
    cout<<"Enter the number of rows"<<endl;
    cin>>row;
    cout<<"Enter the number from where you want to start"<<endl;
    cin>>initial;

    for(int i = 1; i<= row; i++){
        int count = initial + row-i;
        // Number Printing Loop
        for(int j = 1; j<=row-i+1;j++){
            cout<<count;
        }
        cout<<endl;
    }
}
