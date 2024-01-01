#include<iostream>
using namespace std;
                  
int main(){
    //********************pattterns ***************************
    
    /*
    1
    23
    345
    4567      
    */

    int n;
    cin>>n;

    // int row =1;
    // while(row<=n){
    //     int col = 1;
    //     while(col<=row){
    //         cout<<row+col-1;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;


    int row =1;

    while(row<=n){
        
        int col = 1;
        int value = row;
        while(col<=row){
            cout<<value;
            value++;
            col++;
        }
        cout<<endl;
        row++;
    }



    
    return 0;
}