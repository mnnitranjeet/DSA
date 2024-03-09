// HolloW Square Star Pattern 

/* 
    ****
    *  *
    *  *
    ****


*/

#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"Please enter the the number of rows"<<endl;
    cin >> row;
    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= row; j++){
            if(i == 1 || i == row){
                cout<<"*";
            }
            else{
                if(j == 1 || j == row){
                    cout <<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
}
