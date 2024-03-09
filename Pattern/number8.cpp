// Basic incrementing Diamond Pattern (invetred) initialised = 3

/*
        3
        44
        555
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
        // Number Printing Loop
        for(int j = 1; j<=i; j++){
            cout<<initial;
        }
        initial++;
        cout<<endl;
    }

    initial-=2;

    for(int i = 1; i<= row-1; i++){
        // Number Printing Loop
        for(int j = 1; j<=row-i; j++){
            cout<<initial;
        }
        initial--;
        cout<<endl;
    }
}
