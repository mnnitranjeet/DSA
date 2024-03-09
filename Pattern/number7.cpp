// Basic Double incrementing Triangle Pattern initialised = 3
/*
        3
        4 5
        6 7 8
        9 10 11 12



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
            cout<<initial<<" ";
            initial++;
        }

        cout<<endl;
    }
}
