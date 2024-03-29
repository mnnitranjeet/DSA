#include<bits/stdc++.h>
#include<vector>
using namespace std;



void findLongestUniqueSubString(string str){
    vector<int> visit(256,0);
    int length = 0;
    int first = 0; 
    int second = 0;
    while(second < str.size()){
        while(visit[str[second]]){
            visit[str[first]] = 0;
            first++;

        }
        visit[str[second]] = 1;
        int length1 = second - first + 1;
        length = max(length,length1);
        second++;
    }            

}


int main(){
    string str;
    cout<<"Enter a string "<<endl;
    getline(cin,str);
    findLongestUniqueSubString(str);
}