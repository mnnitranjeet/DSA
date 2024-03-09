// Half Diamond Star Pattern

/*
    *
    **
    ***
    ****
    ***
    **
    *


*/

#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter the number of rows"<<endl;
    cin>>row;

    for(int i = 1; i<= row; i++){
        // Star Printing Loop
        for(int j = 1; j<= i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i = 1; i<= row-1; i++){
        // Star Printing Loop
        for(int j = 1; j<= row-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
