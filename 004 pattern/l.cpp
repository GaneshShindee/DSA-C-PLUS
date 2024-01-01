#include<iostream>
using namespace std;
                  
int main(){
    //********************pattterns ***************************
    
    /*
    1
    21
    321
    4321
    */

    int n;
    cin>>n;

    // int i =1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=i){
    //         cout<<i-j+1;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;

        int i =1;
    while(i<=n){
        int j = 1;
        int value =i;
        while(j<=i){
            cout<<i-j+1;
            value--;
            j++;
        }
        cout<<endl;
        i++;
    }

    

    
    return 0;
}