#include<iostream>
using namespace std;
                  
int main(){
    //********************pattterns ***************************
    
    /*
    abc
    bcd
    cde
    */

    int n;
    cin>>n;

    int  i = 1;
    while(i<=n){

        int j = 1;

        while(j<=n){
            cout<< char(i+j-1+'a'-1);
            j++;

        }
        cout<<endl;
        i++;
    }
    return 0;
}