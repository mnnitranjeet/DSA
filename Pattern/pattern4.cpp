// Rectangle Star Pattern 

/*
    ******
    ******
    ******
    ******

*/

#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"enter the number of rows"<<endl;
    cin>>row;

    for(int i = 1; i <= row-2; i++){
        for(int j = 1; j <= row; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
