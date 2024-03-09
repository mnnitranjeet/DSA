// Basic Right Triangle Number Pattern 

/*
        1
        23
        456
        78910
        1112131415

*/

#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter the number of rows"<<endl;
    cin>> row;
    int count = 1;

    for(int i = 1; i <= row; i++){
        // Number Printing Loop
        for(int j = 1; j<=i; j++){
            cout<<count;
            count++;
        }
        cout<<endl;
    }
}
