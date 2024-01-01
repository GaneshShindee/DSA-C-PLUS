#include<iostream>
using namespace std;
                  
int main(){
    //********************pattterns ***************************
    
    /*
    a
    bc
    def
    ghij
    */
   
    int n;
    cin>>n;

    char count = 'a';

    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<count;
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}