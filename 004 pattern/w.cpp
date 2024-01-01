#include<iostream>
using namespace std;
                  
int main(){
    //********************pattterns ***************************
    
    /*
     
     ****
     _***
     __**
     ___*

    */


    int n;
    cin>>n;

    int i =0;

    while(i<=n){


        //spaces print
        int space = 1;
        while(space<=i){
            if (i == n) {
              break;
              }
            cout<<"_";
            space++;
        }

        // star prints

        int col=n-i;
        while(col){
            cout<<"*";
            col--;
        }

        cout<<endl;
        i++;
    }

    return 0;
}