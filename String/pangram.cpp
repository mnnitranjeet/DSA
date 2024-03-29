#include<bits/stdc++.h>
using namespace std;

bool checkPanGram(string str){
    int arr[26];
    for(int i = 0; i < 26; i++){
        arr[i] = 0;
    }

    for(int i = 0 ; i < str.size();i++){
        char index = str[i]-'a';
        arr[index] = 1;

    }

    for(int i = 0; i < 26; i++){
        if(arr[i] == 0){
            return false;
        }

    }
    return true;

}




int main(){
    string str;
    cout<<"Enter a string "<<endl;
    getline(cin,str);

    bool flag =checkPanGram(str);
    cout<<flag<<endl;


}