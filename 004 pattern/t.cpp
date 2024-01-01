#include<iostream>
using namespace std;
                  
int main(){
    //********************pattterns ***************************
    
    /*
    d
    cd
    bcd
    abcd
    */

    int n;
    cin>>n;


    int i =1;
    while(i<=n){
        int j = 1;
        int m = n-i+1;
        while(j<=i){
            cout<<char (m+'a'-1);
            m++;
            j++;
        }
        cout<<endl;
        i++;
    }

            // 4                        n-i+1 
            // 34
            // 234
            // 1234


    return 0;
}