/*
    Given a string s which consists of lowercase or uppercase letters, 
    return the length of the longest palindrome that can be built with those letters.

Letters are case sensitive, for example, "Aa" is not considered a palindrome here.

Example 1:

        Input: s = "abccccdd"
        Output: 7
        Explanation: One longest palindrome that can be built is "dccaccd", whose length is 7.
Example 2:

        Input: s = "a"
        Output: 1
        Explanation: The longest palindrome that can be built is "a", whose length is 1.

*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 int longestPalindrome(string str){
    vector<int> lower(26,0);
    vector<int> upper(26,0);
    int count = 0; 
    int odd = 0;
    for(int i = 0; i < str.size();i++){
        if(str[i] >='a'){
            lower[str[i]-'a']++;
        }
        else{
            upper[str[i]-'A']++;
        }
    }
    for(int i = 0; i < lower.size();i++){
        if(lower[i] % 2 == 0){
            count+= lower[i];
        }
        else{
            odd = 1;
            count+=lower[i]-1;
        }

    }
    for(int i = 0; i < upper.size();i++){
        if(upper[i] % 2 == 0){
            count+=upper[i];
        }
        else{
            odd = 1;
            count += upper[i]-1;
        }

    }

    if(odd == 1){
        count+=1;
    }
    return count;

 }

int main(){
    string str;
    cout<<"Enter a String "<<endl;
    getline(cin,str);
     int ans = longestPalindrome(str);
     cout<<"Longest Pallindrom length = "<< ans<<endl;

}