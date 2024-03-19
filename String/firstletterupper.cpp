/*

    Input  : ranjeet Is good boy
    output : Ranjeet Is Good Boy

*/
#include<iostream>
#include<cctype>
#include<string>
using namespace std;
void firstLetterUpperCase(string str){

    bool flag = false ;
    int size = str.size();
    string temp = "";
    temp+= toupper(str[0]);
    
    for(int i = 1; i < size; i++){
        if(str[i] == ' '){

            flag = 1;
            

        }
        else if(flag == 1){
            temp+=' ';
            
            temp +=toupper(str[i]);
            flag = 0;
        }
        else{
            temp += str[i];
        }
        
        
    }

    cout << temp<<endl;
   
}

int main(){
    string str;
    cout<<"Please Enter a String "<<endl;
    getline(cin,str);
    cout<<"Original String is "<<str<<endl;
    firstLetterUpperCase(str);
    

}