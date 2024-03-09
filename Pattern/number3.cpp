// Internal Varsity Square Patern

/*
        333
        313
        323
        333



*/

#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter the number of rows"<<endl;
    cin>>row;

    for(int i = 1 ; i <= row; i++){
        //Number Printing Loop
        for(int j = 1; j<= row-1; j++){
            if(i == 1 || i == row){
                cout<<row-1;

            }
            else{
                if( j == 1 || j == row-1){
                    cout<<row-1;
                }
                else{
                    cout<<i-1;
                }
            }
        }
        cout<<endl;
    }
}
