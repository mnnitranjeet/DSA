#include<iostream>
#include<unordered_set>
using namespace std;




int main(){
    unordered_set<int> s;
    s.insert(10);
    s.insert(2);
    s.insert(4);
    s.insert(4);
    s.insert(5);
    s.insert(125);
    for(auto i = s.begin() ; i != s.end();i++){
        cout<< *i << " ";
    }
    cout<<endl;
}