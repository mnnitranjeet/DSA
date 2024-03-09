// Square Star Pattern 
/*
    *****
    *****
    *****
    *****
    *****
*/

#include<iostream>
using namespace std;

int main(){
    int row;
    cout <<"Please enter the value of row "<<endl;
    cin >> row;

    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= row; j++){
            cout<<"*";
        }
        cout << endl;
    }
}
