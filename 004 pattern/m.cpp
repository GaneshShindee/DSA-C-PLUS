#include<iostream>
using namespace std;
                  
int main(){
    //********************pattterns ***************************
    
    /*
    aaa
    bbb
    ccc
    */

    int n;
    cin>>n;

    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            char ab = 'a'+i-1;
            cout<<ab;
            j++;
        }
        cout<<endl;
        i++;
    }



    
    return 0;
}