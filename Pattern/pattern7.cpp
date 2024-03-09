// Mirrored Rhombus Star Pattern 
/*
        ****
       ****
      ****
     ****

*/

#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter the number of rows"<<endl;
    cin>>row;

    for(int i = 1; i<= row; i++){
        // Space Printing Loop
        for(int j = 1; j <= row-i+1;j++){
            cout<<" ";
        }
        // Star Printing Loop
        for(int j = 1; j <= row; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
