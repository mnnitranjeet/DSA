// Basic Square 1 Pattern 

/*

    1111
    1111
    1111
    1111


*/

#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter the number of rows"<<endl;
    cin>>row;

    for(int i = 1; i<= row; i++){
        // Number Printing Loop
        for(int j= 1; j<= row; j++){
            cout<<"1";
        }
        cout<<endl;
    }
}
