#include<iostream>
using namespace std;
                  
int main(){
    //********************pattterns ***************************
    
    /*
    ****
    ***
    **
    *
    */


    int n;
    cin>>n;

    int i = 1;
    while(i<=n){
        int space = n-i+1;
        while(space){
            cout<<"*";
            space--;

        }
        cout<<endl;
        i++;
    }

    return 0;
}