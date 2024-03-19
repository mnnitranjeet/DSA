/*
    Input  : mamata
    Output : atamam



*/

#include<iostream>
using namespace std;
void reverseString(string str){
    int start = 0;
    int end   = str.size()-1;

    while(start < end){
        swap(str[start],str[end]);
        start++,end--;
    }
    cout<<"Reverse String is "<<str<<endl;
}

int main(){
    string str;
    cout<<"Please Enter a String "<<endl;
    getline(cin,str);
    cout<<"Original String is "<<str<<endl;
    reverseString(str);
    

}