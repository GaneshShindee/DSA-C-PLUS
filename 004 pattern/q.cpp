#include<iostream>
using namespace std;
                  
int main(){
    //********************pattterns ***************************
    
    /*
    A
    BB
    CCC
    */

    int n;
    cin>>n;

    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<char(i+'a'-1);
            j++;
        }
        cout<<endl;
        i++;
        
    }

    return 0;
}