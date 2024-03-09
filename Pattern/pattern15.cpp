// Diamond Star Pattern

/*
    *
   ***
  *****
 *******
  *****
   ***
    *   


*/

#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter the number of rows"<<endl;
    cin>> row;

    for(int i = 1; i<= row; i++){
        // Space Printing Loop
        for(int j = 1; j <= row-i;j++){
            cout<<" ";
        }
        // Star Printing Loop
        for(int j = 1; j <= 2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i = 1; i<= row-1; i++){
        // Space Printing Loop
        for(int j = 1; j <= i;j++){
            cout<<" ";
        }
        // Star Printing Loop
        for(int j = 1; j <=2*(row-1)-(2*i-1);j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
