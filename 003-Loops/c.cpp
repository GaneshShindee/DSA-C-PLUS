#include<iostream>
using namespace std;
                  
int main(){
    int a, b;
    cout<<"Enter your age in year:- "<<endl;
    cin>>a;
    cout<<"Enter your friend age in year:- "<<endl;
    cin>>b;

    if(a>b){
        cout<<"You are older than your friend by:-"<<a-b<<"year"<<endl;
    }
    else if(a<b){
        cout<<"your friend is older than you by:- "<<b-a<<"year"<<endl;
    }else{
        cout<<"You and your friend at same age";
    }
    return 0;
}