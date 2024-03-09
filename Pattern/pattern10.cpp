//Hollow Pyramid Star Pattern 
/*
      *
     * *
    *   * 
   ******* 

*/

#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter the number of rows"<<endl;
    cin>>row;

    for(int i = 1; i <= row; i++){
        // Space Printing Loop
        for(int j = 1; j <= row-i;j++){
            cout<<" ";
        }
        // Star Printing Loop
        if(i == row){
            for(int j = 1; j<=2*i-1;j++){
                cout<<"*";
            }
        }
        else{
            for(int j = 1; j<=2*i-1; j++){
                if(j == 1 || j == 2*i-1){
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
