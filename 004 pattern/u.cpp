#include<iostream>
using namespace std;
                  
int main(){
    //********************pattterns ***************************
    
    /*
    _ _ _ *
    _ _ * *
    _ * * *
    * * * *
    */


    int n;
    cin>>n;

    int  row =1;

    while(row<=n){
        //space print
        int space =n-row;
        while(space){
            cout<<"_";
            space--;
        }


        //stars print 

        int col = 1;
        while(col<=row){
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
    }    

    return 0;
}