// Hollow Rectangle Star Pattern
/*
    ******
    *    *
    *    *
    ****** 


*/

#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the number of rows"<<endl;
    cin>>row;

    for(int i = 1; i <= row-2; i++){
        for(int j = 1; j <= row; j++){
            if(i == 1 || i == row-2){
                cout<<"*";

            }
            else{
                if(j == 1 || j == row){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }


        }
        cout<<endl;



    }
}
