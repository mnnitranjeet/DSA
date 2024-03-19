/*

    Print all the duplicate characters in a string

    Given a string S, the task is to print all the duplicate characters 
    with their occurrences in the given string.

    Input: S = “geeksforgeeks”
    Output:

        e, count = 4
        g, count = 2
        k, count = 2
        s, count = 2



*/

#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

void printDuplicateChar(string str){
    unordered_map<char,int> map;
    for(int i = 0; i < str.size(); i++){
        map[str[i]]++;
    }
    if(map.size() == 0){
        cout<<"String is Empty !!"<<endl;
    }
    else{
        for(auto i = map.begin(); i != map.end(); i++){
            if(i-> second > 1){
                cout<< i->first<<" "<< i->second <<endl;
            }
        }
    }
}


int main(){
    string str;
    cout<<"Enter a string "<<endl;
    getline(cin,str);
    printDuplicateChar(str);
}