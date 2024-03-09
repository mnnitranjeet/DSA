// Basic Squar Incrementing Pattern
/*

    1111
    2222
    3333
    4444



*/

#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"enter the number of rows"<<endl;
    cin>> row;
    for(int i = 1; i<= row; i++){
        // Number Printing Loop
        for(int j = 1; j<= row; j++){
            cout<<i;
        }
        cout<<endl;
    }
}
