#include<iostream>
#include<set>
using namespace std;

set<int> sett;
set<int,greater<int>> set1;

void insertElementSet(int data){
    sett.insert(data);

}

void insertElementAscending(int data){
    set1.insert(data);

}

void displaySet1Element(){
    /*
    for(auto i : sett){
        cout<<i<<" ";
    } */
    cout<<endl;
    for(auto i = sett.begin(); i != sett.end(); i++){
        cout<<*i<<" ";
        cout<<*sett.lower_bound(*i)<<" ";
        cout<<*sett.upper_bound(*i)<<" ";

    }
    cout<<endl;

}

void displaySet2Element(){
    for(auto i : set1){
        cout<<i<<" ";
    }
    cout<<endl;
    for(auto i = set1.rbegin(); i != set1.rend(); i++){
        cout<<*sett.lower_bound(*i)<<" ";
        cout<<*sett.upper_bound(*i)<<" ";

    }
    
    cout<<endl;

}

int main(){
    int choice;
    while(true){
        cout<<"Press : 1 : For Insert Element in Set"<<endl;
        cout<<"Press : 2 : For Insert Element in Set in Ascending Order "<<endl;
        cout<<"Press : 3 : For Print Elements of Set1"<<endl;
        cout<<"Press : 4 : For Print Elements of Set2"<<endl;
        cout<<"Press : 3 : For Exit "<<endl;
        cin>>choice;

        if(choice == 1){
            int data;
            cout<<"Enter an element "<<endl;
            cin>>data;
            insertElementSet(data);
        }
        else if(choice == 3){
            displaySet1Element();
        }
        else if(choice == 2){
            int data;
            cout<<"Enter an element "<<endl;
            cin>>data;
            insertElementAscending(data);


        }
        else if(choice == 4){
            displaySet2Element();

        }
        else if(choice == 5){
            cout<<"Size of set1 = "<<sett.size()<<endl;
            cout<<"Size of set2 = "<<set1.size()<<endl;
        }
        else if(choice == 6){
            //cout<<*sett.lower_bound()
        }
        else if(choice == 7){
            exit(0);
        }
        else{
            cout<<"Invalid Input !!"<<endl;
        }

    }
    


}