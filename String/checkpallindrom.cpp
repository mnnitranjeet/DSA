/*
    Input  : mam
    Output : "Yes"

    Input  : ranjeet
    Output : "No" 


*/

#include<iostream>
using namespace std;
bool checkPallindrom(string str){
    int start = 0;
    int end   = str.size()-1;

    while(start < end){
        if(str[start] != str[end]){
            return false;
        }
        start++,end--;
    }
    return true;
}

int main(){
    string str;
    cout<<"Please Enter a String "<<endl;
    getline(cin,str);
    
  bool ans =  checkPallindrom(str);
  if(ans == 0){
    cout<<"Given String "<< str <<"  is Not A Pallindrom"<<endl;
  }
  else{
    cout<<"Given String "<< str <<"  is  A Pallindrom"<<endl;
  }
    

}