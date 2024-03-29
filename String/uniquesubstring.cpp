#include<bits/stdc++.h>
#include<vector>
using namespace std;



void findLongestUniqueSubString(string str){
    int length = 0;
    vector<string> vec;
    for(int i = 0; i < str.size(); i++){
        string ans="";
        for(int j = i; j < str.size(); j++){
            ans+=str[j];
            vec.push_back(ans);
        }
    }
    
    for(int i = 0; i < vec.size(); i++){
        string s = vec[i];
        
        int size = s.size();
        vector<bool> visit(256,false);
        int index = 0;
        bool flag = false;
        while(index < size){
            if(visit[s[index]] == true){
                flag = true;
                break;
            }
            else{
               visit[s[index]] = true;
                index++;
            }



        }
        if(flag == false){
            int length1 = s.size();
            length = max(length,length1);
        }
    }

    
       cout << length<<" ";    
    
            

}








    

           
         
            
            

            



int main(){
    string str;
    cout<<"Enter a string "<<endl;
    getline(cin,str);
    findLongestUniqueSubString(str);
}